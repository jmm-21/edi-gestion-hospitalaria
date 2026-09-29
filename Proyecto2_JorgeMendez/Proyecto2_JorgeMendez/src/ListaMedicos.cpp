/*
 * ListaMedicos.cpp
 *
 *  Created on: 20 mar. 2023
 *      Author: alumno
 */

#include "ListaMedicos.h"

ListaMedicos::ListaMedicos() {
	lMedicos= new ListaDPI <Medico *>;

}

void ListaMedicos::mostrarR(ListaDPI<Medico*> *lMedicos) {
	if ( ! lMedicos->alFinal ( ) ) {
				cout << lMedicos->consultar() << " ";
				lMedicos->avanzar ( );
				mostrarRec ( lMedicos );
			}
}

void ListaMedicos::mostrarRec(ListaDPI<Medico*> *lMedicos) {
	lMedicos->moverPrimero ( );
		cout << "Lista = { ";
		mostrarRec ( lMedicos );
		cout << "}" << endl;
}

int ListaMedicos::cuantosR(ListaDPI<Medico*> *l) {
	int cont= 0;
	if(l->alFinal()){
		cont= 0;
	}else{
		l->avanzar();
		cont= 1+ cuantosR(l);
	}
	return cont;
}

void ListaMedicos::InsertarOrden(Medico *m) {
	Medico *aux= nullptr;
		bool enc= false;
		lMedicos->moverPrimero();

		while(!lMedicos->alFinal() && !enc){
			aux=lMedicos->consultar();
			if(aux->getApellidos() > m->getApellidos()){
				enc= true;
			}
			else{
				lMedicos->avanzar();
			}
		}
		lMedicos->insertar(m);
}

bool ListaMedicos::existe(string Apellidos) {
	bool enc= false;
	Medico*m= nullptr;
	lMedicos->moverPrimero();
		while(!lMedicos->alFinal()&&!enc){
			m=lMedicos->consultar();
			if(m->getApellidos()== Apellidos){
				enc= true;
			}
			else{
				lMedicos->avanzar();
			}
		}
		return enc;
}
void ListaMedicos::buscarEsp (string especialidad, Medico*&m) {
	bool enc= false;
	lMedicos->moverPrimero();
		while(!lMedicos->alFinal()&&!enc){
			m=lMedicos->consultar();
			if(m->getEspecialidad()== especialidad){
				enc= true;
			}
			else{
				lMedicos->avanzar();
			}
		}
}


void ListaMedicos::obtener(string Apellidos, Medico *&m) {
	bool enc= false;
		lMedicos->moverPrimero();
			while(!lMedicos->alFinal()&&!enc){
				m=lMedicos->consultar();
				if(m->getApellidos()== Apellidos){
					enc= true;
				}
				else{
					lMedicos->avanzar();
				}
			}
	}

void ListaMedicos::obtenerPrimero(Medico *m) {
	lMedicos->moverPrimero();
		m=lMedicos->consultar();
		lMedicos->eliminar();
}

void ListaMedicos::mostrar() {
	Medico*m=nullptr;
	lMedicos->moverPrimero();
		while(!lMedicos->alFinal()){
			lMedicos->consultar(m);
			m->mostrar();
			lMedicos->avanzar();
		}
}

bool ListaMedicos::estaVacia() {
	return lMedicos->estaVacia();
}

int ListaMedicos::cuantosR() {
	int cont= 0;
		if(!lMedicos->estaVacia()){
			lMedicos->moverPrimero();
			cont= cuantosR(lMedicos);
		}
		return cont;
}

ListaMedicos::~ListaMedicos() {
	delete lMedicos;
}
