/*
 * Medico.h
 *
 *  Created on: 14 feb. 2023
 *      Author: alumno
 */

#ifndef MEDICO_H_
#define MEDICO_H_
#include <iostream>
#include <string>

using namespace std;

class Medico {
private:
	string nombre;
	string apellidos;
	string especialidad;
public:

	// PRE: ---
	// DES: Constructor por defecto
	// COM: O(1)
	Medico();

	// PRE: ---
	// DES: Constructor parametrizado
	// COM: O(1)
	Medico(string nombre, string especialidad);

	// PRE: ---
	// DES: Constructor parametrizado
	// COM: O(1)
	Medico(string nombre, string apellidos, string especialidad);

	// PRE: m correctamente inicializada
	// DES: Constructor por copia
	// COM: O(1)
	Medico(const Medico &m);

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
	// DES: devuelve this->especialidad
	// COM: O(1)
	string getEspecialidad();

	//setters

	// PRE: ---
	// DES: modifica this->nombre = nombre
	// COM: O(1)
	void setNombre(string nombre);

	// PRE: ---
	// DES: modifica this->apellidos = apellidos
	// COM: O(1)
	void setApellidos(string apellidos);

	// PRE: ---
	// DES: modifica this->especialidad = especialidad
	// COM: O(1)
	void setEspecialidad(string especialidad);

	// PRE: ---
	// DES: muestra por consola el nombre, el apellido y la especialidad del médico
	// COM: O(1)
	void mostrar();

	// PRE: ---
	// DES: Destructor
	// COM: O(1)
	 ~Medico();
};

#endif /* MEDICO_H_ */
