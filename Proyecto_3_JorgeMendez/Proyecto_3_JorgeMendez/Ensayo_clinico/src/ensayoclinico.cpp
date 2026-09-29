/*
 * ensayoclinico.cpp
 *
 *  Created on: 28 abr. 2023
 *      Author: alumno
 */
using namespace std;
#include "ensayoclinico.h"
#include <fstream>

EnsayoClinico::EnsayoClinico() {
	Paciente* Vector[199];
    this->nombre = "Jorge Méndez Martínez";
    this->arbolPacientes = new BSTree<KeyValue<string, Paciente*>>;
    ListaErrores= new ListaDPI <string>;
    ListaPuntuacion= new ListaDPI<Paciente*>;

    cargarPacientesVector(Vector);

    crearArbolPaciente(Vector, 0, 199);
}

EnsayoClinico::~EnsayoClinico() {
	KeyValue<string, Paciente*> kv;
	Paciente *p;
	while(!arbolPacientes->estaVacio()){
		kv= arbolPacientes->getDato();
		p= kv.getValue();
		arbolPacientes->eliminar(kv);
		delete p;
	}
	delete ListaErrores;
	delete ListaPuntuacion;
delete arbolPacientes;

}

string EnsayoClinico::getNombre() {
	return (this->nombre);
}

void EnsayoClinico:: setNombre(string nombre) {
	this->nombre= nombre;
}

bool EnsayoClinico::existe(string DNI) {
	bool enc= false;
	string aux;
	ListaErrores->moverPrimero();
			while(!ListaErrores->alFinal()&&!enc){
				aux =ListaErrores->consultar();
				if(aux == DNI){
					enc= true;
				}
				else{
					ListaErrores->avanzar();
				}
			}
			return enc;
}

void EnsayoClinico::buscarP(string DNI, Paciente *&p,BSTree<KeyValue<string, Paciente*>> *arbolPacientes) {
	KeyValue<string, Paciente*> kv;
	string aux;
	Paciente *Aux;
	kv= arbolPacientes->getDato();
	Aux= kv.getValue();
	aux= Aux->getDNI();
	if(DNI== aux){
		kv= arbolPacientes->getDato();
		p= kv.getValue();
	}
	else{
		if(DNI< aux){
			if(arbolPacientes->getIzq() != nullptr)
			buscarP(DNI, p, arbolPacientes->getIzq());
		}
		else{
			if(arbolPacientes->getDer() != nullptr)
			buscarP(DNI, p, arbolPacientes->getDer());
		}
	}
}

void EnsayoClinico::anotar() {
	ifstream ifs;
	Paciente*p= nullptr;
	string DNI;
	string puntuacion;
	int i_puntuacion;
	ifs.open("ensayo.csv");
	while (!ifs.eof()){
		getline(ifs, DNI, ';');
		if (!ifs.eof()) {
		getline(ifs, puntuacion,'\n');
		i_puntuacion= atoi(puntuacion.c_str());
		if(arbolPacientes->existe(DNI)){
			buscarP(DNI, p, arbolPacientes);
			p->incrementarP(i_puntuacion);
			}
		else{
			if(!existe(DNI)){
			ListaErrores->insertar(DNI);
			}
		}
	}
	}
}

int EnsayoClinico::numNiveles(BSTree<KeyValue<string, Paciente*>> *arbolPacientes) {
	int prof = 0;
		int prof_izq = 0;
		int prof_der = 0;
		if ( !arbolPacientes->estaVacio ( ) ) {
			if ( arbolPacientes->getIzq ( ) != nullptr )
				prof_izq = numNiveles ( arbolPacientes->getIzq ( ) );
			if ( arbolPacientes->getDer ( ) != nullptr )
				prof_der = numNiveles ( arbolPacientes->getDer ( ) );
			prof = max ( prof_izq, prof_der ) + 1;
		}
		return prof;
	}

void EnsayoClinico::mostrarErrrores(ListaDPI<string> *ListaErrores) {
	if ( ! ListaErrores->alFinal ( ) ) {
		cout << ListaErrores->consultar() << " "<<endl;
		ListaErrores->avanzar ( );
		mostrarErrrores ( ListaErrores );
	}
}
void EnsayoClinico::mostrarErrores() {
	ListaErrores->moverPrimero ( );
	mostrarErrrores ( ListaErrores );
}

void EnsayoClinico::mostrarPunt(ListaDPI<Paciente*> *ListaPuntuacion, int cuantos) {
Paciente*l;
	if ( ! ListaPuntuacion->alFinal ( ) ) {
		l= ListaPuntuacion->consultar();
			l->mostrarMP();
			cout << " ";
			ListaPuntuacion->avanzar ( );
			cuantos--;
			if(cuantos != 0){
				mostrarPunt ( ListaPuntuacion, cuantos);
		}
	}
}

void EnsayoClinico::ordenarPorPuntuacion(Paciente *p) {
Paciente*aux= nullptr;
bool enc= false;
ListaPuntuacion->moverPrimero();
	while(!ListaPuntuacion->alFinal() && !enc){
		aux=ListaPuntuacion->consultar();
		if(aux->getPuntuacion() < p->getPuntuacion()){
			enc= true;
		}
		else{
			ListaPuntuacion->avanzar();
		}
	}
	ListaPuntuacion->insertar(p);
}
void EnsayoClinico::mostrarMayoresPunt(BSTree<KeyValue<string, Paciente*>> *arbol, int cuantos) {
	KeyValue<string, Paciente*> kv;
	Paciente*p;
	if(!arbol->estaVacio()){
		kv= arbol->getDato();
		p= kv.getValue();
		ordenarPorPuntuacion(p);

		if(arbol->getIzq() != nullptr){
			mostrarMayoresPunt(arbol->getIzq(), cuantos);
		}
		if(arbol->getDer()!= nullptr)
			mostrarMayoresPunt(arbol->getDer(), cuantos);
	}
}

void EnsayoClinico::mostrarMayores(int cuantos) {
		mostrarMayoresPunt(arbolPacientes, cuantos);
		ListaPuntuacion->moverPrimero ( );
		mostrarPunt ( ListaPuntuacion, cuantos);
}

void EnsayoClinico::mostrarPorApellido(BSTree<KeyValue<string, Paciente*>> *arbol, string s_apellido) {
	KeyValue<string, Paciente*> kv;
	if(!arbol->estaVacio()){
	    kv= arbol->getDato();
		Paciente*p ;
		p= kv.getValue();
		string apellidos = p->getApellidos();
		int pos;

		pos=apellidos.find(s_apellido);
			if(pos!= -1){
				p->mostrarMP();
			}
		if(arbol->getIzq() != nullptr){
			mostrarPorApellido(arbol->getIzq(), s_apellido);
		}
		if(arbol->getDer()!= nullptr)
			mostrarPorApellido(arbol->getDer(), s_apellido);
	}
}
void EnsayoClinico::mostrarPorApellido(string s_apellido) {
	mostrarPorApellido(arbolPacientes, s_apellido);

}

void EnsayoClinico::mostrarPorDNI(string s_dni) {
	BSTree<KeyValue<string, Paciente *>> *abb;
	if(!arbolPacientes->estaVacio()){
		abb= buscarArbolDNI(arbolPacientes, s_dni);

		if(abb != nullptr){
			mostrarEnOrdenDNI(abb, s_dni);
		}
	}
}

void EnsayoClinico::cargarPacientesVector(Paciente *Vector[200]) {
	ifstream ifs;
	string nombre;
	string DNI;
	string apellidos;
	string edad;
	int i=0;
	string genero;
	int iedad;
	Genero Ggenero;


	Paciente *p = nullptr;
	ifs.open("pacientes_ordenados.csv");
	if (ifs.fail()) {
		cerr << "ERROR: fichero no encontrado." << endl;
	} else {
		while (!ifs.eof()) {

			getline(ifs, DNI,';');

		if (!ifs.eof()) {

			getline(ifs, nombre,';');
			getline(ifs, apellidos,';');
			getline(ifs, genero,';');
			getline(ifs, edad, '\n');

			iedad= stoi(edad);
			Ggenero= Genero(stoi(genero));

				p= new Paciente (DNI, nombre, apellidos, Ggenero, iedad);
				Vector[i]=p;
				i++;
			}
		}
	ifs.close();
	}
}

int EnsayoClinico::numNiveles() {
	int niveles;
	niveles= numNiveles(arbolPacientes);
	return niveles;
}
void EnsayoClinico::crearArbolPaciente(Paciente *Vector[199], int ini ,int fin) {
	int medio;
	if(ini!= fin){
		if (fin-ini ==1){
				KeyValue<string, Paciente*>kv(Vector[ini]->getDNI(), Vector[ini]);
				arbolPacientes->insertar(kv);
		}
		else{
			medio= (fin+ini)/2;
			KeyValue<string, Paciente*>kv(Vector[medio]->getDNI(), Vector[medio]);
			arbolPacientes->insertar(kv);
			crearArbolPaciente(Vector,ini,medio);
			crearArbolPaciente(Vector, medio+1,fin);
		}
	}

}

void EnsayoClinico::mostrarEnOrdenDNI(BSTree<KeyValue<string, Paciente*>> *arbol, string s_dni) {
	if(!arbol->estaVacio()){
		if(arbol->getIzq () != nullptr)
			mostrarEnOrdenDNI(arbol->getIzq(), s_dni);

		KeyValue<string, Paciente*> kv= arbol->getDato();
		Paciente*p = kv.getValue();
		string dni = p->getDNI();

		if(dni.find(s_dni)== 0){
		p->mostrarMP();
		}
		if (arbol->getDer()!= nullptr)
			mostrarEnOrdenDNI(arbol->getDer(), s_dni);
	}
}

BSTree<KeyValue<string, Paciente*> >* EnsayoClinico::buscarArbolDNI(
		BSTree<KeyValue<string, Paciente*> > *abbu, const string &s_dni) {
	BSTree <KeyValue <string, Paciente*>> *aux = nullptr;
	if (!abbu->estaVacio()){
		KeyValue<string, Paciente*> kv = abbu->getDato();
		string dni = kv.getKey();

		if(dni.find(s_dni)== 0){
			aux= abbu; 								//subarbol encontrado
		}
		else{
			if(s_dni < dni){
				if(abbu->getIzq() != nullptr){
					aux= buscarArbolDNI(abbu->getIzq(), s_dni);	//subarbol izquierdo
				}
			}
			else /* dato > raiz */{
				if(abbu->getDer() != nullptr){
					aux= buscarArbolDNI(abbu->getDer(), s_dni);	//subarbol derecho
				}
			}
		}
	}
	return aux;
}
