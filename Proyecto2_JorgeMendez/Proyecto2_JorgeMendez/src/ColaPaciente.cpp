/*
 * ColaPaciente.cpp
 *
 *  Created on: 13 mar. 2023
 *      Author: alumno
 */

#include "ColaPaciente.h"

ColaPaciente::ColaPaciente() {
	cP= new Cola <Paciente *> ;
}

ColaPaciente::~ColaPaciente() {
	delete cP;
}

void ColaPaciente::insertar(Paciente *p) {
	cP->encolar(p);
}

void ColaPaciente::obtener(Paciente *&p) {
	p= cP->getPrimero();
	cP->desencolar();
}
Paciente* ColaPaciente::obtener(){
	Paciente *p;
	p= cP->getPrimero();
	cP->desencolar();
	return p;
}

bool ColaPaciente::estaVacia() {
	return (this->cP->estaVacia());
}

void ColaPaciente::mostrar() {
	Cola <Paciente*> *aux = new Cola <Paciente*> ( );
		Paciente* p=nullptr;
		cout << "{ ";
		while ( !cP->estaVacia() ) {
			p = cP->getPrimero( );
			p->mostrar();
			cout<< " "<<endl;
			cP->desencolar ( );
			aux->encolar ( p );
		}
		cout << "}";
		while  ( !aux->estaVacia ( ) ) {
			cP->encolar ( aux->getPrimero ( ) );
			aux->desencolar ( );
		}

		delete aux;
}

int ColaPaciente::contar() {
	Cola <Paciente*> *aux = new Cola <Paciente*> ( );
	int cont=0;
	while(!cP->estaVacia()){
		aux->encolar ( cP->getPrimero ( ) );
		cP->desencolar ( );
		cont++;
	}
	while ( !aux->estaVacia ( ) ) {
			cP->encolar ( aux->getPrimero ( ) );
			aux->desencolar ( );
		}
		delete aux;
		return cont;
}
