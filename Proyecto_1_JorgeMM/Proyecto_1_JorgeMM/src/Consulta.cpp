/*
 * Consulta.cpp
 *
 *  Created on: 15 feb. 2023
 *      Author: alumno
 */

#include "Consulta.h"


#include <iostream>
#include <string>

using namespace std;

Consulta::Consulta() {
	this->alta= false;
	this->informe="";

	this->paciente= nullptr;
	this->medico=nullptr;
	this->tipo= Pendiente;
}

Consulta::Consulta(Paciente *p){
	this->alta= false;
	this->informe="";
    paciente=p;
	this->medico=nullptr;
	this->tipo= Pendiente;

}

Consulta::Consulta(Paciente *p, Medico *m){
	this->alta= false;
	this->informe="";
	this->fechayhora= FechaYHora();
	this->tipo= Pendiente;
	medico=m;
	paciente=p;

}
Consulta::Consulta(Paciente*p, Medico*m, tipoConsulta tipo, const FechaYHora &f){
	this->alta= false;
	this->informe="";
	medico=m;
	paciente= p;
	this->tipo=tipo;
	this->fechayhora=f;
}

bool Consulta::getAlta(){
	return alta;
}

void Consulta::setAlta(bool alta){
	this->alta= alta;
}

tipoConsulta Consulta::getTipo(){
	return tipo;
}

void Consulta::setTipo(tipoConsulta tipo){
	this->tipo=tipo;
}

void Consulta::asignarMedico(Medico *medico){
	this->medico= medico;
}

Medico *Consulta::getMedico() {
	return medico;
}

Paciente *Consulta::getPaciente() {
	return paciente;
}

bool Consulta::darDeAlta(bool alta){
	this->alta=true;
	return alta;
}

void Consulta::setInforme(string informe) {
	this->informe= informe;
}

void Consulta::adjuntarInforme(string informe){
	this->informe += " "+informe;

}

void Consulta::agendarFecha(FechaYHora fh) {
	this->fechayhora = fh;
}

FechaYHora Consulta::getFecha() {
	return fechayhora;
}

void Consulta::mostrar(){
	cout<<"Tipo de la consulta: ";
	if(getTipo()== Pendiente){
		cout<< "Pendiente" << endl;
	}
	if(getTipo()== Urgente){
		cout<< "Urgente" <<endl;
	}
	if(getTipo()==Externa){
		cout<< "Externa" <<endl;
	}
	if (getAlta()== false){
		cout<<"No está de alta"<<endl;
	}
	else{
		cout<<"Está de alta"<<endl;
	}
	cout<<"Paciente: ";

	this->paciente->mostrar();

	cout<<"Médico: ";

	this->medico->mostrar();

	this->fechayhora.mostrar();

	cout<< "Informe: "<< informe<< endl;

}

Consulta::~Consulta() {

}


