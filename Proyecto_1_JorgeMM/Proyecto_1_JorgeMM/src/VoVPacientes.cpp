/*
 * VoVPacientes.cpp
 *
 *  Created on: 24 feb. 2023
 *      Author: alumno
 */

#include "VoVPacientes.h"

VoVPacientes::VoVPacientes() {
this->ocupacion=0;
}

int VoVPacientes::getOcupacion() {
	return (this->ocupacion);
}

bool VoVPacientes::estaVacio() {
	return (this->ocupacion==0);
}

bool VoVPacientes::estaLleno() {
	return (this->ocupacion==MAX_P);
}

void VoVPacientes::insertar(Paciente *p) {
	if(this->ocupacion < MAX_P){
		this->vovPaciente[this->ocupacion] = p;
		this->ocupacion++;
	}
}

void VoVPacientes::borrar(int pos) {
	int i;
	for (i=pos; i< ocupacion; i++){
		vovPaciente[i] = vovPaciente[i+1];
	}
	ocupacion--;
}

void VoVPacientes::getPosicion(int pos, Paciente *&p) {
	p= vovPaciente[pos];
}

Paciente* VoVPacientes::getPosicion(int pos) {
	Paciente *p;
	if((pos >= 0)&&(pos< ocupacion)){
		p= vovPaciente[pos];;
		}
		return p;

}

VoVPacientes::~VoVPacientes() {

}

