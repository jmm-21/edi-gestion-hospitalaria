/*
 * Hospital.h
 *
 *  Created on: 20 mar. 2023
 *      Author: alumno
 */

#include <fstream>
#include <string>
#include <iostream>
#include "ListaPacientes.h"
#include "ListaMedicos.h"
#include "Servicio.h"
#include "pruebasPaciente.h"
#include "pruebasMedico.h"
#include "pruebaInformes.h"
#include "pruebasColaPaciente.h"
#include "pruebaServicio.h"
#include "pruebasPilaInformes.h"
#include "pruebaListaPacientes.h"
#include "pruebasListaMedico.h"

#ifndef HOSPITAL_H_
#define HOSPITAL_H_

class Hospital {
private:
	string nombre;
	ListaPacientes*lp;
	ListaMedicos*lm;
	Servicio* s;

	// PRE: ---
	// DES: método que abrirá el fichero pacientes.csv, para leer los pacientes e insertarlos por orden de
	// 		DNI dentro de la lista de los médicos
	// COM: O(n)
	void cargarPacientes();

	// PRE: ---
	// DES: método que abrirá el fichero medicos.csv, para leer los médicos e insertarlos por orden de
	//		apellido dentro de la lista de los médicos
	// COM: O(n)
	void cargarMedicos();

	// PRE: ---
	// DES: método que abrirá el fichero informes.csv, para leer los datos y añadirles un nuevo informe
	// COM: O(n)
	void cargarInformes();
public:

	// PRE: ---
	// DES: Constructor por defecto
	// COM: O(1)
	Hospital();

	// PRE:	---
	// DES: Constructor parametrizado
	// COM: O(1)
	Hospital(string nombre);

	// PRE: ---
	// DES: devuelve this->nombre
	// COM: O(1)
	string getNombre();

	// PRE: ---
	// DES: muestra por consola los datos de los pacientes.
	// COM: O(n)
	void mostrarPacientes();

	// PRE: ---
	// DES: muestra por consola los datos de los médicos.
	// COM: O(n)
	void mostrarMedicos();

	// PRE: ---
	// DES: muestra por consola  los pacientes en espera a ser atendidos en el Servicio
	// COM: O(n)
	void mostrarPenEspera();

	// PRE: ---
	// DES: muestra por consola  los pacientes en espera a ser atendidos en el Servicio
	// COM: O(n)
	void mostrarEstadisticas();

	// PRE: ---
	// DES: devuelve al paciente de dentro de la lista de los pacientes que concuerde con el DNI dado
	// COM: O(n)
	void obtenerPaciente(string DNI);

	// PRE: ---
	// DES: devuelve al médico de dentro de la lista de los médicos que concuerde con el apellido dado
	// COM: O(n)
	void obtenerMedico(string Apellidos);

	// PRE: ---
	// DES: dado un DNI y un paciente recorre la lista de los pacientes, si existe uno con el DNI dado,
	//		devuelve true, si no devuelve false. (devuelve tamién el paciente con el DNI dado)
	// COM: O(n)
	bool buscarP(string DNI, Paciente *&p);

	// PRE: ---
	// DES: dado un apellido y un médico recorre la lista de los médicos, si existe uno con el apellido dado,
	//		devuelve true, si no devuelve false. (devuelve tamién el médico con el apellido dado)
	// COM: O(n)
	bool buscarM(string Apellidos, Medico*&m);

	// PRE: ---
	// DES: dada la especialidad del servicio, el módulo busca un médico cn dicha especialidad y lo asigna al Servicio
	// COM: O(n)
	void asignarMedico();

	// PRE: ---
	// DES: el módulo va obteniendo los pacientes de las colas según su prioridad y orden de
	//		llegada, al paciente que se atiende se le genera un informe que se añade a su historia médica,
	//		se muestra el paciente con todos sus informes y desaparece de la cola de espera
	// COM: O(n)
	void procesar();

	// PRE: ---
	// DES: destructor
	// COM: O(n)
	 ~Hospital();
};

#endif /* HOSPITAL_H_ */
