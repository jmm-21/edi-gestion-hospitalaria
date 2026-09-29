/*
 * Hospital.cpp
 *
 *  Created on: 27 feb. 2023
 *      Author: alumno
 */

#include "Hospital.h"

Hospital::Hospital(string nombre) {
this->nombre=nombre;



// Creación de vectores:
this->vovMedicos = new VoVMedicos ();
this->cargarMedicos();

this->vovPacientes= new VoVPacientes();
this->cargarPacientes();

this->vovConsultas = new VoV_Consultas ();
this->cargarConsultas();

}

void Hospital::buscarP(string DNI, Paciente *&p) {
	int i=0;
	bool enc;
	enc= false;
	Paciente *aux;
	while (i< this->vovPacientes->getOcupacion() && !enc){
		aux = this->vovPacientes->getPosicion(i);
		if(aux->getDNI()== DNI){
			enc= true;
			p= aux;
		}else{
			i++;

		}
	}

}


void Hospital::buscarM(string apellidos, Medico *&m) {
	int i=0;
		bool enc;
		enc= false;
		while (i< this->vovMedicos->getOcupacion() && !enc){
			m = this->vovMedicos->getPosicion(i);
			if(m->getApellidos()== apellidos){
				enc= true;
			}else{
				i++;

			}
		}
}


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

				this->vovPacientes->insertar(p);
			}
		}
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
				this->vovMedicos->insertar(m);
			}
		}
		ifs.close();
	}

}

void Hospital::cargarConsultas() {
	ifstream ifs;
	string DNI;
	string nombre;
	string apellidos;
	string tipo;
	string fecha;
	Paciente *p = nullptr;
	Medico *m = nullptr;
	Consulta *c= nullptr;
	ifs.open("consultas.csv");
		if (ifs.fail()) {
			cerr << "ERROR: fichero no encontrado." << endl;
} else{
	while (!ifs.eof()) {
		getline(ifs, DNI, ';');
		if (!ifs.eof()) {
			getline(ifs, nombre, ';');
			getline(ifs, apellidos, ';');
			getline(ifs, tipo, ';');
			getline(ifs, fecha, '\n');
			tipoConsulta(atoi(tipo.c_str()));

			buscarP(DNI, p);
			buscarM(apellidos, m);
			if(tipoConsulta()==Pendiente){
				c= new Consulta(p, m);
			}else{
				FechaYHora fh(fecha);
				c= new Consulta (p, m, tipoConsulta(),fh);

			}
			vovConsultas->insertar(c);
			}
		}
	ifs.close();
	}
}

void Hospital::mostrarPacientes() {
	cout<<"Paciente: "<<endl;
	Paciente *p = nullptr;
	int i;
		for (i = 0; i < this->vovPacientes->getOcupacion(); i++) {
			p = this->vovPacientes->getPosicion(i);
			p->mostrar();
		}
}

void Hospital::mostrarMedicos() {
	cout<<"Médicos: "<<endl;
	Medico *m = nullptr;
	int i;
	for (i = 0; i < this->vovMedicos->getOcupacion(); i++) {
	m = this->vovMedicos->getPosicion(i);
	m->mostrar();
	}
}

void Hospital::mostrarConsultas() {
	cout<<"Consulta: "<<endl;
	Consulta *c = nullptr;
	int i;
		for (i = 0; i < this->vovConsultas->getOcupacion(); i++) {
		c = this->vovConsultas->getPosicion(i);
		c->mostrar();
		}
}

void Hospital::mostrarEstadisticas() {
		cout<< "Dentro del hospital hay " << vovPacientes->getOcupacion() <<" pacientes, ";
		cout<< "hay " << vovMedicos->getOcupacion() <<" médicos, ";
		cout<< "hay " << vovConsultas->getOcupacion() <<" consultas"<<endl;
}

void Hospital::guardarConsultas(string DNI) {
	ofstream fsal;
	Consulta *c= nullptr;
	Medico *m= nullptr;
	Paciente *p=nullptr;
	FechaYHora f;
	fsal.open (DNI+".txt");
	int i;
	for (i = 0; i < this->vovConsultas->getOcupacion(); i++) {
		c = this->vovConsultas->getPosicion(i);
		p= c->getPaciente();
		if (p->getDNI() == DNI){
			m= c->getMedico();
			f= c->getFecha();
			fsal << DNI<< "; "<< m->getNombre()<<"; "<< m->getApellidos()<< "; "<< m->getEspecialidad()<< "; "<< f.toString()<< endl;
		}
	}

fsal.close();
}

string Hospital::getNombre() {
	return this->nombre;
}

Hospital::~Hospital() {
	Medico *m = nullptr;
	int i;
	for (i = 0; i < this->vovMedicos->getOcupacion(); i++) {
		m = this->vovMedicos->getPosicion(i);
		delete m;
}
	delete vovMedicos;

	Paciente *p = nullptr;
	for (i = 0; i < this->vovPacientes->getOcupacion(); i++) {
		p = this->vovPacientes->getPosicion(i);
		delete p;
}
	delete vovPacientes;
	Consulta *c = nullptr;
	for (i = 0; i < this->vovConsultas->getOcupacion(); i++) {
		c = this->vovConsultas->getPosicion(i);
		delete c;
	}
	delete vovConsultas;

}

