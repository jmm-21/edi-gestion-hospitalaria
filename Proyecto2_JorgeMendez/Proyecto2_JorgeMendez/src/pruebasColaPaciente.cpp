/*
 * pruebasColaPaciente.cpp
 *
 *  Created on: 2 abr. 2023
 *      Author: alumno
 */
#include "pruebasColaPaciente.h"
#include <iostream>
#include <string>

using namespace std;

void pruebaCp(){
	ColaPaciente colaPPrueba;
	Paciente *p1;
	p1= new Paciente();
	p1->setNombre("Iván");
	p1->setEdad(25);
	Paciente *p2;
	p2= new Paciente();
	p2->setNombre("Alfonso");
	p2->setEdad(19);
	Paciente *p3;
	p3= new Paciente();
	p3->setNombre("Martín");
	p3->setEdad(12);

	colaPPrueba.insertar(p1);
	colaPPrueba.insertar(p2);
	colaPPrueba.insertar(p3);

	if(!colaPPrueba.estaVacia()){

		colaPPrueba.mostrar();

		cout<< "Hay "<< colaPPrueba.contar()<< " Pacientes en la cola"<<endl;

		Paciente *primero= nullptr;
		primero = colaPPrueba.obtener();
		cout<< "El primer pacienet es: "<< primero->getNombre() << endl;

	}else{
		cout<<"Error: cola vacía "<<endl;
	}
	delete p1;
	delete p2;
	delete p3;
}

void pruebasColaPaciente(){
	cout<< "-----------------------------------";
	cout<< "Inicio Pruebas de la Cola Paciente";
	cout<< "------------------------------------"<< endl;
	pruebaCp();

	cout<< "-----------------------------------";
	cout<< "Fin de las Pruebas de la Cola Paciente";
	cout<< "------------------------------------"<< endl;
}

