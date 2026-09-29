/*
 * ListaPacientes.cpp
 *
 *  Created on: 20 mar. 2023
 *      Author: alumno
 */

#include "ListaPacientes.h"

ListaPacientes::ListaPacientes() {
	lPacientes= new ListaDPI <Paciente *>;

}

void ListaPacientes::InsertarOrdenDNI(Paciente *p) {
	Paciente*aux= nullptr;
	bool enc= false;
	lPacientes->moverPrimero();
	while(!lPacientes->alFinal()&&!enc){
		aux=lPacientes->consultar();
		if(aux->getDNI()>p->getDNI()){
			enc= true;
		}
		else{
			lPacientes->avanzar();
		}
	}
	lPacientes->insertar(p);
}

bool ListaPacientes::existe(string DNI) {
	bool enc= false;
		Paciente*p= nullptr;
		lPacientes->moverPrimero();
			while(!lPacientes->alFinal()&&!enc){
				p=lPacientes->consultar();
				if(p->getDNI()== DNI){
					enc= true;
				}
				else{
					lPacientes->avanzar();
				}
			}
			return enc;
}

void ListaPacientes::obtener(string DNI, Paciente *&p) {
	bool enc= false;
	lPacientes->moverPrimero();
	while(!lPacientes->alFinal()&&!enc){
			p=lPacientes->consultar();
			if(p->getDNI() == DNI){
				enc= true;
			}
			else{
				lPacientes->avanzar();
			}
		}
}

void ListaPacientes::obtenerPrimero(Paciente *p) {
	lPacientes->moverPrimero();
	p=lPacientes->consultar();
	lPacientes->eliminar();
}

int ListaPacientes::cuantosR() {
	int cont= 0;
	if(!lPacientes->estaVacia()){
		lPacientes->moverPrimero();
		cont= cuantosR(lPacientes);
	}
	return cont;
}

int ListaPacientes::cuantosR(ListaDPI<Paciente*> *l) {
	int cont= 0;
	if(l->alFinal()){
		cont= 0;
	}else{
		l->avanzar();
		cont= 1+ cuantosR(l);
	}
	return cont;
}

bool ListaPacientes::estaVacia() {
	return lPacientes->estaVacia();
}

void ListaPacientes::mostrarR(ListaDPI<Paciente*> *lPacientes) {
	if ( ! lPacientes->alFinal ( ) ) {
			cout << lPacientes->consultar() << " ";
			lPacientes->avanzar ( );
			mostrarRec ( lPacientes );
		}
	}

void ListaPacientes::mostrarRec(ListaDPI<Paciente*> *lPacientes) {
	lPacientes->moverPrimero ( );
		cout << "Lista = { ";
		mostrarRec ( lPacientes );
		cout << "}" << endl;
}

void ListaPacientes::mostrar(){
	Paciente*p=nullptr;
	lPacientes->moverPrimero();
	while(!lPacientes->alFinal()){
		lPacientes->consultar(p);
		p->mostrar();
		lPacientes->avanzar();
	}
}

ListaPacientes::~ListaPacientes() {
	delete lPacientes;
}

