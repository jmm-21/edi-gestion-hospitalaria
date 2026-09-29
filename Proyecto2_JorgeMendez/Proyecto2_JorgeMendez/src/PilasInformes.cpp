/*
 * PilasInformes.cpp
 *
 *  Created on: 6 mar. 2023
 *      Author: alumno
 */

#include "PilasInformes.h"

PilasInformes::PilasInformes() {
	pInformes = new Pila<Informe*>;

}

void PilasInformes::insertar(Informe *i) {
	pInformes->apilar(i);

}

void PilasInformes::mostrar() {
	    Pila<Informe*>*pAux= new Pila<Informe*>;
	    Informe *aux;
	    while(!pInformes->estaVacia()){

	        aux= pInformes->getCima();
	        aux->mostrar();
	        pInformes->desapilar();
	        pAux->apilar(aux);
	    }
		cout << endl;
		while ( !pAux->estaVacia ( ) ) {
			pInformes->apilar ( pAux->getCima ( ) );
			pAux->desapilar ( );
		}
	    delete pAux;
	}

void PilasInformes::getUltimoInforme(Informe *&i) {
	Pila <Informe*> *aux = new Pila <Informe*> ( );
	Informe *valor;
		while ( !pInformes->estaVacia ( ) ) {
			valor = pInformes->getCima ( );
			aux->apilar ( valor );
			pInformes->desapilar ( );
		}
		i=aux->getCima();
		while ( !aux->estaVacia ( ) ) {
			pInformes->apilar ( aux->getCima ( ) );
			aux->desapilar ( );
		}
		delete aux;
	}

void PilasInformes::getPrimerInforme(Informe *&inf){
	inf= pInformes->getCima();
}

void PilasInformes::anadirInforme(Informe *inf) {
	this->pInformes->apilar(inf);
}

PilasInformes::~PilasInformes() {
	Informe *inf;
	while(!pInformes->estaVacia()){
		pInformes->getCima(inf);
		delete inf;
		pInformes->desapilar();
	}
	 delete pInformes;
}

