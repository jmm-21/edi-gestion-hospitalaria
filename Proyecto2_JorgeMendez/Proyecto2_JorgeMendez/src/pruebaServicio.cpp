/*
 * pruebaServicio.cpp
 *
 *  Created on: 2 abr. 2023
 *      Author: alumno
 */
#include "pruebaServicio.h"
#include <iostream>
#include <string>

using namespace std;

void prueba1(){
	cout<< "Prueba 1: "<<endl;
	Servicio ss;
	if(!ss.estaVacia()){
		cout<<"Error caso 1: la cola devería estar vacía"<<endl;
	}
	Paciente *p1;
	p1= new Paciente("Iván", 25);
	Paciente *p2;
	p2= new Paciente("Alfonso", 19);
	Paciente *p3;
	p3= new Paciente("Martín",12);
	Paciente *p4;
	p4= new Paciente("Elustondo", 33);

	ss.insertar(1, p1);
	ss.insertar(1, p2);
	ss.insertar(2, p3);
	ss.insertar(3, p4);

	if(ss.estaVacia()){
		cout<<"Error caso 1: la cola no devería estar vacía"<<endl;
	}
	if(ss.contarPrioridad(1)!=2){
		cout<<"Error caso 1: al contar la cola de pacientes de la prioridad 1"<<endl;
	}
	if(ss.contarPrioridad(2)!=1){
		cout<<"Error caso 1: al contar la cola de pacientes de la prioridad 2"<<endl;
	}
	if(ss.contarPrioridad(3)!=1){
		cout<<"Error caso 1: al contar la cola de pacientes de la prioridad 3"<<endl;
	}

	ss.mostrar();
	Medico* m1= new Medico("Gonzálo", "Guerrero", "Cardiólogía");
	ss.asignarMedico(m1);
	ss.procesar();
	ss.mostrar();

	delete p1;
	delete p2;
	delete p3;
	delete p4;
}

void prueba2(){
	cout<< "Prueba 2: "<<endl;
	Servicio Ss("Cardiólogía");
	if(!Ss.estaVacia()){
		cout<<"Error caso 2: la cola devería estar vacía"<<endl;
	}
	Paciente *p1;
	p1= new Paciente("Iván", 25);
	Paciente *p2;
	p2= new Paciente("Alfonso", 19);
	Paciente *p3;
	p3= new Paciente("Martín",12);
	Paciente *p4;
	p4= new Paciente("Elustondo", 33);

	Ss.insertar(1, p1);
	Ss.insertar(1, p2);			Ss.insertar(2, p3);
	Ss.insertar(3, p4);

	if(Ss.estaVacia()){
		cout<<"Error caso 1: la cola no devería estar vacía"<<endl;
	}
	if(Ss.contarPrioridad(1)!=2){
		cout<<"Error caso 1: al contar la cola de pacientes de la prioridad 1"<<endl;
		}
	if(Ss.contarPrioridad(2)!=1){
		cout<<"Error caso 1: al contar la cola de pacientes de la prioridad 2"<<endl;
	}
	if(Ss.contarPrioridad(3)!=1){
		cout<<"Error caso 1: al contar la cola de pacientes de la prioridad 3"<<endl;
	}
	Ss.mostrar();
	Medico* m1= new Medico("Gonzálo", "Guerrero", "Cardiólogía");
	Ss.asignarMedico(m1);
	Ss.procesar();
	Ss.mostrar();

	delete p1;
	delete p2;
	delete p3;
	delete p4;

}
void pruebaServicio(){
	cout<< "-----------------------------------";
	cout<< "Inicio Pruebas del servicio";
	cout<< "------------------------------------"<< endl;
	prueba1();
	prueba2();
	cout<< "-----------------------------------";
	cout<< "Fin de las Pruebas del servicio";
	cout<< "------------------------------------"<< endl;
}

