/*
 * Medico.cpp
 *
 *  Created on: 14 feb. 2023
 *      Author: alumno
 */

#include "Medico.h"
#include <iostream>
#include <string>

using namespace std;

Medico::Medico(){
	this->nombre= "";
	this->apellidos= "";
	this->especialidad="";
	}
Medico::Medico(string nombre, string especialidad){
	this->nombre=nombre;
	this->apellidos="";
	this->especialidad=especialidad;
}
Medico::Medico(const Medico &m){
	this->nombre= m.nombre;
	this->apellidos=m.apellidos;
	this->especialidad=m.especialidad;
}
Medico::Medico(string nombre, string apellidos, string especialidad) {
	this->nombre=nombre;
	this->apellidos=apellidos;
	this->especialidad=especialidad;
}

//getters
string Medico::getNombre(){
	return nombre;
}
string Medico::getApellidos(){
	return apellidos;
}
string Medico::getEspecialidad(){
	return especialidad;
}

//setters


void Medico::setNombre(string nombre) {
	this->nombre=nombre;
}

void Medico::setApellidos(string apellidos) {
	this->apellidos=apellidos;
}

void Medico::setEspecialidad(string especialidad) {
	this->especialidad= especialidad;
}

void Medico:: mostrar(){
	cout<<getNombre()<< ";"<< getApellidos()<<";"<< getEspecialidad()<<";"<< endl;
	}
Medico::~Medico() {
	//destructor
}


