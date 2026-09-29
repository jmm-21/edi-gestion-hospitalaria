/*
 * paciente.h
 *
 *  Created on: 6 feb. 2023
 *      Author: alumno
 */

#ifndef PACIENTE_H_
#define PACIENTE_H_
#include <iostream>
#include <string>

using namespace std;
enum Genero{
	Hombre, Mujer, No_Definido
};

class Paciente {
private:
	string nombre;
	string apellidos;
	string DNI;
	int edad;
	Genero genero;
public:
	//constructores

	// PRE: ---
	// DES: Constructor por defecto
	// COM: O(1)
	Paciente();

	// PRE: ---
	// DES: Constructor parametrizado
	// COM: O(1)
	Paciente(string DNI, string nombre);

	// PRE: edad >= -1 (Si es = -1, mostrará por pantalla que no se ha deinido la edad)
	// DES: Constructor parametrizado
	// COM: O(1)
	Paciente(string nombre, int edad);

	// PRE: edad >= -1 (Si es = -1, mostrará por pantalla que no se ha deinido la edad)
	// DES: Constructor parametrizado
	// COM: O(1)
	Paciente(string DNI, string nombre, string apellidos, Genero genero, int edad);

	// PRE: p correctamente inicializada
	// DES: Constructor por copia
	// COM: O(1)
	Paciente( const Paciente &p);

	 ~Paciente();

	//getters

	 // PRE: ---
	 // DES: devuelve this->nombre
	 // COM: O(1)
	 string getNombre();

	 // PRE: ---
	 // DES: devuelve this->apellidos
	 // COM: O(1)
	 string getApellidos();

	 // PRE: ---
	 // DES: devuelve this->DNI
	 // COM: O(1)
	 string getDNI();

	// PRE: ---
	 // DES: devuelve this->genero
	 // COM: O(1)
	 Genero getGenero();

	 // PRE: ---
	 // DES: devuelve this->edad
	 // COM: O(1)
	 int getEdad();

	 //setters

	 // PRE: ---
	 // DES: modifica this->nombre= nombre
	 // COM: O(1)
	 void setNombre(string nombre);

	 // PRE: ---
	 // DES: modifica this->nombre= nombre
	 // COM: O(1)
	 void setApellidos(string apellidos);

	 // PRE: ---
	 // DES: modifica this->nombre= nombre
	 // COM: O(1)
	 void setDNI(string DNI);

	 // PRE: ---
	 // DES: modifica this->genero= genero
	 // COM: O(1)
	 void setGenero(Genero genero);

	 // PRE: ---
	 // DES: modifica this->edad = edad
	 // COM: O(1)
	 void setEdad(int edad);

	 // PRE: ---
	 // DES: muestra por consola el nombre , el apellido, el DNI, su género y su edad
	 // COM: O(1)
	 void mostrar();
	};

#endif /* PACIENTE_H_ */
