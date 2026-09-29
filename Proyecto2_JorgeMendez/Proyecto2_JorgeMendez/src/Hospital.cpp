/*
 * Hospital.cpp
 *
 *  Created on: 20 mar. 2023
 *      Author: alumno
 */

#include "Hospital.h"

void Hospital::cargarPacientes() {
	ifstream ifs;
	string nombre;
	string apellidos;
	string DNI;
	string genero;
	string edad;
	int iedad;
	Paciente *p = nullptr;
	ifs.open("pacientes.csv");
	if (ifs.fail()){
		cerr << "ERROR: fichero no encontrado." << endl;
	} else{
		while(!ifs.eof()){
			getline(ifs, DNI, ';');
			if(!ifs.eof()){
				getline(ifs, nombre, ';');
				getline(ifs, apellidos, ';');
				getline(ifs, genero, ';');
				getline(ifs , edad, '\n');
				iedad= atoi(edad.c_str());
				p = new Paciente(DNI, nombre, apellidos, Genero (atoi(genero.c_str())), iedad);
				int prioridad= 1+ rand()%5;
				s->insertar(prioridad, p);
				this->lp->InsertarOrdenDNI(p);
			}
		}
		ifs.close();
	}

}

void Hospital::cargarMedicos() {
	ifstream ifs;
	string nombre;
	string apellidos;
	string especialidad;
	Medico *m = nullptr;
	ifs.open("medicos.csv");
	if (ifs.fail()) {
		cerr << "ERROR: fichero no encontrado." << endl;
	} else {
		while (!ifs.eof()) {
			getline(ifs, nombre, ';');
			if (!ifs.eof()) {
				getline(ifs, apellidos, ';');
				getline(ifs, especialidad, '\n');
				m = new Medico(nombre, apellidos, especialidad);
				this->lm->InsertarOrden(m);
			}
		}
		ifs.close();
	}

}

void Hospital::cargarInformes() {
	ifstream ifs;
	string DNI;
	string texto;
	string Apellidos;
	string FechayHora;
	Paciente*p=nullptr;
	Medico* m= nullptr;
	Informe* inf= nullptr;
	ifs.open("informes.csv");
	if(ifs.fail()){
		cerr<<"ERROR: fichero no encontrado." << endl;
	} else{
		while (!ifs.eof()) {
			getline (ifs, DNI, ';');
			if (!ifs.eof()) {
				getline(ifs, texto,';');
				getline(ifs, Apellidos, ';');
				getline(ifs, FechayHora, '\n');
				if(lm->existe(Apellidos)){
					lm->obtener(Apellidos, m);
					if(lp->existe(DNI)){
						lp->obtener(DNI, p);
						FechaYHora fh(FechayHora);
						inf= new Informe(texto,fh ,m);
						p->anadirInforme(inf);
					}
				}
			}
		}
		ifs.close();
	}
}

Hospital::Hospital() {
	this->nombre= nombre;
	lp=new ListaPacientes();
	lm= new ListaMedicos();
	s= new Servicio("Traumatología");

	cargarPacientes();
	cargarMedicos();
	cargarInformes();
}

Hospital::Hospital(string nombre) {
	this->nombre= nombre;
	lp=new ListaPacientes();
	lm= new ListaMedicos();
	s= new Servicio("Traumatología");

	cargarPacientes();
	cargarMedicos();
	cargarInformes();
}

void Hospital::mostrarPacientes() {
	lp->mostrar();
}

void Hospital::mostrarMedicos() {
	lm->mostrar();
}
void Hospital::mostrarPenEspera() {
	for(int i= 1; i<=MAX_PRIORIDAD ; i++){
			cout<< "---------------------Pacientes en espera de la prioridad "<< i << "---------------------"<<endl;
			 s->mostrarPrioridad(i);
		}
}

void Hospital::mostrarEstadisticas() {
	cout<< "Hay "<< lp->cuantosR()<< " pacientes"<<endl;
	cout<< "Hay "<< lm->cuantosR()<< " médicos"<<endl;
	for(int i= 1; i<=MAX_PRIORIDAD ; i++){
		cout<< "En la prioridad "<< i << " hay "<< s->contarPrioridad(i)<< " pacientes"<<endl;
	}
}


void Hospital::obtenerPaciente(string DNI) {
	Paciente*p=nullptr;
	lp->obtener(DNI, p);
}

void Hospital::obtenerMedico(string Apellidos) {
	Medico*m=nullptr;
	lm->obtener(Apellidos, m);

}

bool Hospital::buscarP(string DNI, Paciente *&p) {
	bool exist= false;
	if(lp->existe(DNI)){
		exist=true;
		lp->obtener(DNI, p);
	}
	return exist;
}

bool Hospital::buscarM(string Apellidos, Medico *&m) {
	bool existe= false;
	if(lm->existe(Apellidos)){
		existe= true;
		lm->obtener(Apellidos, m);
	}
	return existe;
}

string Hospital::getNombre() {
	return this->nombre;
}

void Hospital::asignarMedico() {
	string especialidad;
	Medico*m=nullptr;
	especialidad= s->getEspecialidad();
	lm->buscarEsp(especialidad, m);
	if(m->getEspecialidad()== s->getEspecialidad()){
		s->asignarMedico(m);
	}else{
		cout<< "no hemos encontrado ningún médico con dicha especialidad"<<endl;
	}
}

void Hospital::procesar() {
	if(s->getMedico()!= nullptr){
		s->procesar();
	}else{
		cout<< "el servicio no tiene médico asignado"<<endl;
	}

}

Hospital::~Hospital() {
	Paciente*p;
	p=nullptr;
	while(!lp->estaVacia()){
		lp->obtenerPrimero(p);
		delete p;
	}
	delete lp;

	Medico*m;
	m=nullptr;
	while(!lm->estaVacia()){
		lm->obtenerPrimero(m);
		delete m;
	}
	delete lm;
}

