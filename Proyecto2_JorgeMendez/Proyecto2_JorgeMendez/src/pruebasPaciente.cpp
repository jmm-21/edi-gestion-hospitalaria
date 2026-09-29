/*
 * pruebasPaciente.cpp
 *
 *  Created on: 1 abr. 2023
 *      Author: alumno
 */
#include "pruebasPaciente.h"
#include <iostream>
#include <string>

using namespace std;

//caso 4
void pruebaCaso4(){
	Paciente *p4;
	p4= new Paciente();

	p4->setNombre("Alejandra");
	p4->setApellidos("García");
	p4->setEdad(64);
	p4->setDNI("12458910L");
	p4->setGenero(No_Definido);
	p4->mostrar();
	if(p4->getNombre()!= "Alejandra"){
		cout<< "Error en el nombre del caso 4"<<endl;
	}
	if(p4->getApellidos()!= "García"){
		cout<< "Error en el apellido del caso 4"<<endl;
	}
	if(p4->getEdad()!= 64){
		cout<< "Error en la edad del caso 4"<<endl;
	}
	if(p4->getGenero()!= No_Definido){
		cout<< "Error en el genero del caso 4"<<endl;
	}
	if(p4->getDNI()!="12458910L"){
		cout<< "Error en el DNI del caso 4"<<endl;
	}
	delete p4;
}

//caso 3
void pruebaCaso3(){
	Paciente p2("70180970L","Pepe");
	p2.setApellidos("Muñoz");
	p2.setEdad(31);
	p2.setGenero(Hombre);

	Paciente p3(p2);
		p3.mostrarP();
		p2.mostrarP();
		if(p2.getNombre()!= p3.getNombre()){
			cout<< "Error en el nombre del caso 3"<<endl;
		}
		if(p2.getApellidos()!= p3.getApellidos()){
			cout<< "Error en el apellido del caso 3"<<endl;
		}
		if(p2.getEdad()!= p3.getEdad()){
			cout<< "Error en la edad del caso 3"<<endl;
		}
		if(p2.getGenero()!= p3.getGenero()){
			cout<< "Error en el genero del caso 3"<<endl;
		}
		if(p2.getDNI()!=p3.getDNI()){
			cout<< "Error en el DNI del caso 3"<<endl;
		}

	}

//caso 2
void pruebaCaso2(){
	Paciente p2("70180970L","Pepe");
	Informe *i= new Informe("tiene una fisura en el húmero");
	Medico* m =new Medico("Lucas", "González", "Traumatología");
	PilasInformes *pi= new PilasInformes();
	i->setMedico(m);
	pi->insertar(i);
	p2.setApellidos("Muñoz");
	p2.setEdad(31);
	p2.setGenero(Hombre);
	p2.mostrar();
	pi->mostrar();
	if(p2.getNombre()!="Pepe"){
		cout<< "Error en el nombre del caso 2"<<endl;
	}
	if(p2.getApellidos()!= "Muñoz"){
		cout<< "Error en el apellido del caso 2"<<endl;
	}
	if(p2.getEdad()!= 31){
		cout<< "Error en la edad del caso 2"<<endl;
	}
	if(p2.getGenero()!= Hombre){
		cout<< "Error en el genero del caso 2"<<endl;
	}
	if(p2.getDNI()!="70180970L"){
		cout<< "Error en el DNI del caso 2"<<endl;
	}
	delete i;
	delete pi;
	delete m;
}


//caso 1
void pruebaCaso1(){
	Paciente p;
	Informe *i= new Informe("Luis tiene piedras en los riñones");
	PilasInformes *pi= new PilasInformes();
	pi->insertar(i);
	p.setNombre("Luis");
	p.setApellidos("Pérez");
	p.setEdad(23);
	p.setGenero(Hombre);
	p.setDNI("90789745A");
	p.mostrar();
	pi->mostrar();

	if(p.getNombre()!= "Luis"){
		cout<< "Error en el nombre del caso 1"<<endl;
	}
	if(p.getApellidos()!= "Pérez"){
		cout<< "Error en el apellido del caso 1"<<endl;
	}
	if(p.getEdad()!= 23){
		cout<< "Error en la edad del caso 1"<<endl;
	}
	if(p.getGenero()!= Hombre){
		cout<< "Error en el genero del caso 1"<<endl;
	}
	if(p.getDNI()!="90789745A"){
		cout<< "Error en el DNI del caso 1"<<endl;
	}
	delete i;
	delete pi;
}

void pruebasPaciente(){
cout<< "-----------------------------------";
cout<< "Inicio Pruebas de los Pacientes";
cout<< "------------------------------------"<< endl;
	pruebaCaso1();
	pruebaCaso2();
	pruebaCaso3();
	pruebaCaso4();
cout<< "-----------------------------------";
cout<< "Fin de las Pruebas de los Pacientes";
cout<< "------------------------------------"<< endl;
}



