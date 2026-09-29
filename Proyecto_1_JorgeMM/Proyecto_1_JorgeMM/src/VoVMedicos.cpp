/*
 * VoVMedicos.cpp
 *
 *  Created on: 24 feb. 2023
 *      Author: alumno
 */

#include "VoVMedicos.h"

VoVMedicos::VoVMedicos() {
	this->ocupacion=0;
}

int VoVMedicos::getOcupacion() {
	return (this->ocupacion);
}

bool VoVMedicos::estaVacio() {
	return (this->ocupacion==0);
}

bool VoVMedicos::estaLleno() {
	return (this->ocupacion==MAX_M);
}

void VoVMedicos::insertar(Medico *m) {
	if(this->ocupacion < MAX_M){
		this->vovMedicos[this->ocupacion] = m;
		this->ocupacion++;
	}
}

void VoVMedicos::borrar(int pos) {
	int i;
	for (i=pos; i< ocupacion; i++){
		vovMedicos[i] = vovMedicos[i+1];
	}
	ocupacion--;
}

void VoVMedicos::getPosicion(int pos, Medico *&m) {
	m= vovMedicos[pos];
}

Medico* VoVMedicos::getPosicion(int pos) {
	Medico*m;
	if((pos >= 0)&&(pos< ocupacion)){
			m= vovMedicos[pos];
		}
	return m;
}



VoVMedicos::~VoVMedicos() {

}


