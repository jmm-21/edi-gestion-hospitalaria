/*
 * Hospital.h
 *
 *  Created on: 27 feb. 2023
 *      Author: alumno
 */

#include <string>
#include <iostream>
#include <fstream>

#ifndef HOSPITAL_H_
#define HOSPITAL_H_

#include "VoVPacientes.h"
#include "VoVMedicos.h"
#include "VoVConsultas.h"

using namespace std;

const int MAX=100;
class Hospital {
private:
	string nombre;
	VoVPacientes *vovPacientes;
	VoVMedicos *vovMedicos;
	VoV_Consultas *vovConsultas;

	// PRE: ---
	// DES: método que abrirá el fichero pacientes.csv, para leer los datos e insertarlos en el vector paciente
	// COM: O(n)
	void cargarPacientes();

	// PRE: ---
	// DES: método que abrirá el fichero medicos.csv, para leer los datos e insertarlos en el vector medico
	// COM: O(n)
	void cargarMedicos();

	// PRE: ---
	// DES: método que abrirá el fichero consultas.csv, para leer los datos e insertarlos en el vector consulta
	// COM: O(n)
	void cargarConsultas();



public:

	// PRE: p correctamente inicializada
	// DES: Constructor parametrizado
	// COM: O(1)
	Hospital(string nombre);

	// PRE: ---
	// DES: muestra por consola los datos de los pacientes.
	// COM: O(n)
	void mostrarPacientes();

	// PRE: ---
	// DES: muestra por consola los datos de los médicos.
	// COM: O(n)
	void mostrarMedicos();

	// PRE: ---
	// DES: muestra por consola los datos de las consultas.
	// COM: O(n)
	void mostrarConsultas();

	// PRE: ---
	// DES: Busca al paciente de dentro del dichero pacientes.csv que concuerde con el DNI dado
	// COM: O(n)
	void buscarP(string DNI, Paciente *&p);

	// PRE: ---
	// DES: Busca al médico de dentro del dichero medicos.csv que concuerde con el apellido dado
	// COM: O(n)
	void buscarM(string apellidos, Medico *&m);

	// PRE: ---
	// DES: muestra por consola el número de pacientes, médicos y consultas
	// COM: O(1)
	void mostrarEstadisticas();

	// PRE: ---
	// DES: método que creará un fichero (con el DNI del paciente como nombre) en el que apareceran
	//		las consultas que tiene programadas el paciente de dicho DNI
	// COM: O(n)
	void guardarConsultas(string DNI);

	// PRE: ---
	// DES: devuelve this->nombre
	// COM: O(1)
	string getNombre();


	 ~Hospital();
};

#endif /* HOSPITAL_H_ */
