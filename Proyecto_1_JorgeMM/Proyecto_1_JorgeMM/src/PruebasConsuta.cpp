/*
 * PruebasConsuta.cpp
 *
 *  Created on: 24 feb. 2023
 *      Author: alumno
 */

#include "PruebasConsuta.h"
using namespace std;

// Caso 1
void pruebaCasoConsulta1(){
	Paciente*ptrP1;
	ptrP1= new Paciente ();
	ptrP1->setNombre("Pepito");
	ptrP1->setApellidos("Martínez");
	ptrP1->setDNI("12347907P");

	Medico*m1;
	m1= new Medico ();
	m1->setNombre("Dolores");
	m1->setApellidos("Fuertes");
	m1->setEspecialidad("Tuerce tripas");

	Consulta*ptrC1= new Consulta(ptrP1);
	ptrC1->asignarMedico(m1);
	ptrC1->mostrar();

	delete ptrP1;
	delete m1;
	delete ptrC1;
}

// Caso 2
void pruebaCasoConsulta2(){
	Paciente*ptrP1;
	ptrP1= new Paciente ();
	ptrP1->setNombre("Pepito");
	ptrP1->setApellidos("Martínez");
	ptrP1->setDNI("12347907P");

	Medico*m1;
	m1= new Medico ();
	m1->setNombre("Dolores");
	m1->setApellidos("Fuertes");
	m1->setEspecialidad("Tuerce tripas");

	Consulta *ptrC2= new Consulta(ptrP1, m1);
	FechaYHora fh("12/06/2023, 23:00");
	ptrC2->agendarFecha(fh);
	ptrC2->setInforme("tiene un estrónglito en el píloro");
	ptrC2->adjuntarInforme(", aparte de piedras en los riñones");
	ptrC2->darDeAlta(ptrC2);
	ptrC2->mostrar();

	delete ptrP1;
	delete m1;
	delete ptrC2;
}


void pruebasConsulta(){
cout<< "-----------------------------------";
cout<< "Inicio Pruebas de las Consultas";
cout<< "------------------------------------"<< endl;
	pruebaCasoConsulta1();
	pruebaCasoConsulta2();
cout<< "-----------------------------------";
cout<< "Fin de las Pruebas de las Consultas";
cout<< "------------------------------------"<< endl;
}


