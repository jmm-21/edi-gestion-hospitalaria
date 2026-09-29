/*
 * Informe.cpp
 *
 *  Created on: 6 mar. 2023
 *      Author: alumno
 */

#include "Informe.h"

Informe::Informe() {
informe= "";
this->fechaYHora= fechaYHora;
m= nullptr;
}

Informe::Informe(string informe, FechaYHora fechaYHora, Medico *m) {
	this->informe= informe;
	this->fechaYHora= fechaYHora;
	this->m= m;
}

Informe::Informe(const string &informe) {
	this->informe= informe;
	this->fechaYHora=fechaYHora;
	this->m= nullptr;
}

string Informe::getInforme() {
	return informe;
}

FechaYHora Informe::getFechaYHora() {
	return fechaYHora;
}

Medico *Informe::getMedico() {
	return m;
}

void Informe::setInforme(string informe) {
	this->informe= informe;
}

void Informe::setFechaYHora(FechaYHora fechaYHora) {
	this->fechaYHora= fechaYHora;
}

void Informe::setMedico(Medico *m) {
	this->m= m;
}

void Informe::mostrar() {
	cout<< "Datos del informe: "<< informe<<endl;
	if(m!=nullptr){
		cout<< "Médico del informe: ";
		m->mostrar();
		cout<<endl;
	}
	cout<< "Fecha y hora: ";
	fechaYHora.mostrar();
	cout<< " "<<endl;

}

Informe::~Informe() {

}

