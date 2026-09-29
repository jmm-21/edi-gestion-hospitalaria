/*
 * ensayoclinico.h
 *
 *  Autor: Juan A. Rico (jarico@unex.es)
 *  Fecha: 15 abril 2023
 */

#ifndef ENSAYO_CLINICO_H_
#define ENSAYO_CLINICO_H_

#include <iostream>
#include <string>

#include "paciente.h"
#include "BSTree.h"
#include "KeyValue.h"
#include "ListaDPI.h"
// Si necesitas alguna ED o clase adicional, puedes incluirla aqui



using namespace std;


class EnsayoClinico {

private:
   string  nombre;
   ListaDPI<string> *ListaErrores;
   ListaDPI<Paciente*>*ListaPuntuacion;
   BSTree<KeyValue<string, Paciente*>> *arbolPacientes;

   // PRE: ---
   // DES: modifica this->nombre= nombre
   // COM: O(1)
   void setNombre(string nombre);

   // PRE: ---
   // DES: método que recorrerá los  subárboles creados anteriormente viendo si su DNI contiene el string "s_dni"
   // COM: O(n)
   void mostrarEnOrdenDNI (BSTree<KeyValue<string, Paciente*>>*arbol, string s_dni);

   // PRE: ---
   // DES: divide el aŕbol principal que contiene los DNI en subárboles más pequeños para así
   //      facilitar la búsqueda de los DNI que empiecen por un dicho número
   // COM: O(n)
   BSTree<KeyValue <string, Paciente *>> *buscarArbolDNI(BSTree <KeyValue<string, Paciente*>>*abbu, const string &s_dni);

   // PRE: ---
   // DES: devuelve la profundidad del árbol
   // COM: O(n)
   int    numNiveles         (BSTree<KeyValue<string, Paciente*>> *arbolPacientes);

   // PRE: ---
   // Muestra los DNI de ListaErrores
   // COM: O(1)
   void mostrarErrrores(ListaDPI <string> *ListaErrores);

   // PRE: ---
   // DES: devuelve true si encuentra un paciente con el DNI dado en la lista, false en caso contrario
   // COM: O(n)
   bool existe (string DNI);

	// PRE: ---
	// DES: dado un DNI recorre el árbol de los pacientes hasta encontrar el paciente con el mismo DNI.
	// COM: O(n)
   void buscarP(string DNI, Paciente *&p, BSTree<KeyValue<string, Paciente*>> *arbolPacientes);

	// PRE: ---
	// DES: método que abrirá el fichero ensayo.csv, para leer los pacientes e insertarlos en el vector
	// COM: O(n)
   void cargarPacientesVector(Paciente* Vector[200]);

	// PRE: ---
	// DES: método que abrirá elinsertará el vector con los pacientes en un árbol balanceado
	// COM: O(n)
   void crearArbolPaciente(Paciente* Vector[199], int ini, int fin);

   // PRE: ---
   // DES: método que recorrerá el árbol de las personas viendo si su apellido contiene el string "s_apellido"
   // COM: O(n)
   void  mostrarPorApellido (BSTree<KeyValue<string, Paciente*>> *arbol, string s_apellido);

   // PRE: ---
   // Inserta los pacientes en la lista ListaPuntuacion de mayor a menor puntuación
   // COM: O(1)
   void ordenarPorPuntuacion(Paciente*p);

   // PRE: ---
   // Muestra "cuantos" pacientes con mayor puntuacion
   // COM: O(1)
   void mostrarPunt(ListaDPI<Paciente*> *ListaPuntuacion, int cantos);

   // PRE: ---
   // DES: método que recorrerá el árbol de las personas llevandolas a un módulos que las ordenará según
   // la puntuación en una lista
   // COM: O(n)
   void mostrarMayoresPunt(BSTree<KeyValue<string, Paciente*>> *arbol, int cuantos);

public:

   	   	   // PRE: ---
   	   	   // DES: constructor
   	   	   // COM: O(n)
          EnsayoClinico      ();

          // PRE: ---
          // DES: destructor
          // COM: O(n)
          ~EnsayoClinico      ();

   // PRE: ---
   // devuelve el nombre del alumno
   // COM: O(1)
   string getNombre          ();
   // PRE: ---
   // Lee el archivo ensayo.csv y añade la puntuación de los pacientes.
   // COM: O(n)
   void   anotar             ();
   // PRE: ---
   // Muestra el numero de niveles del arbol
   // COM: O(1)
   int    numNiveles         ();
   // PRE: ---
   // Muestra los DNI de los pacientes de ensayo.csv que no existen
   // COM: O(1)
   void   mostrarErrores     ();
   
   // PRE: ---
   // Muestra "cuantos" pacientes con mayor puntuacion
   // COM: O(1)
   void   mostrarMayores     (int cuantos);
   
   // PRE: ---
   // Muestra pacientes cuyo apellido contiene subcadena "s_apellido"
   // COM: O(1)
   void   mostrarPorApellido (string s_apellido);
   
   // PRE: ---
   // DES: Muestra pacientes cuyo DNI empieza por subcadena "s_dni"
   // COM: O(n)
   void   mostrarPorDNI      (string s_dni);
};
#endif /* ENSAYO_CLINICO_H_ */
