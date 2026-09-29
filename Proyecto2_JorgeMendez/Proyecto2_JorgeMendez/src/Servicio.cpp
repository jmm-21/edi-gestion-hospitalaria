/*
 * Servicio.cpp
 *
 *  Created on: 13 mar. 2023
 *      Author: alumno
 */

#include "Servicio.h"

Servicio::Servicio() {
	int i;
	for(i=0; i< MAX_PRIORIDAD; i++){
	colaPP[i]= new ColaPaciente;
	}
	this->especialidad= "";
	this->m=nullptr;
}

Servicio::Servicio(string especialidad) {
	int i;
	for(i=0; i< MAX_PRIORIDAD; i++){
	colaPP[i]= new ColaPaciente;
	}
	this->especialidad= especialidad;
	this->m=nullptr;
}

Servicio::~Servicio() {
	int i;
		for(i=0; i< MAX_PRIORIDAD; i++){
	delete colaPP[i];
	}
}

bool Servicio::estaVacia() {
	bool flag = true;
	int i;
	for(i=0; i< MAX_PRIORIDAD  && flag; i++){
		if (colaPP[i]->estaVacia()== false){
			flag= false;
		}
	}
	return flag;
}

bool Servicio::estaVaciaPrioridad(int prioridad) {
	bool flag = true;
		if (colaPP[prioridad- 1]->estaVacia()== false){
			flag= false;
		}
		return flag;
}

void Servicio::insertar(int prioridad, Paciente *p) {
	colaPP[prioridad- 1]->insertar(p);
}

void Servicio::mostrarPrioridad(int prioridad) {
	colaPP[prioridad-1]->mostrar();
}

int Servicio::contarPrioridad(int prioridad) {
	int cont;
	cont= colaPP[prioridad-1]->contar();
	return cont;
}

void Servicio::mostrar() {
	int i;
	for(i=0; i< MAX_PRIORIDAD ; i++){
		colaPP[i]->mostrar();
	}
}

string Servicio::getEspecialidad() {
	return this->especialidad;
}

Medico* Servicio::getMedico() {
	return this->m;
}

void Servicio::asignarMedico(Medico *m) {
	this->m = m;
}

string obtenerFechaHora() {
	    time_t t = std::time(nullptr);
	    tm* now = std::localtime(&t);

	    char buffer[128];
	    string data;
	    strftime(buffer, sizeof(buffer), "%d/%m/%Y %X", now);
	    return buffer;
}

void Servicio::procesar() {
	Informe*inf;
	string sfecha;
	string texto;
	Paciente*p=nullptr;
	string sprioridad;
		for(int i= 0; i< MAX_PRIORIDAD;i++){
			while(!colaPP[i]->estaVacia()){
				int prioridad= i+1;
				sprioridad= to_string(prioridad);
				colaPP[i]->obtener(p);
				texto= " se ha generado un informe para el paciente: " + p->getNombre() + " de prioridad "+ sprioridad;
				sfecha= obtenerFechaHora();
				FechaYHora fh(sfecha);
				inf= new Informe (texto,fh ,m);
				p->anadirInforme(inf);
				p->mostrarP();
			}
	}
}


