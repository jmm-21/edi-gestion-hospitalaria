/*
 * pruebaListaPacientes.cpp
 *
 *  Created on: 3 abr. 2023
 *      Author: alumno
 */
#include "pruebaListaPacientes.h"
#include <iostream>
#include <string>

using namespace std;

void pruebaLP1(){
	cout<<"Prueba 1: "<<endl;

    ListaPacientes lp;


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

    lp.InsertarOrdenDNI(p1);
    lp.InsertarOrdenDNI(p2);
    lp.InsertarOrdenDNI(p3);

    if(!lp.estaVacia()){

       	lp.mostrar();

       }else{
           cout<<"Error en la prueba 1 de Lp: cola vacía "<<endl;
       }
       delete p1;
       delete p2;
       delete p3;
   }
void pruebaLP2(){
	cout<<""<<endl;
	cout<<"Prueba 2: "<<endl;

	ListaPacientes Lp;

	Paciente *p1;
	p1= new Paciente("Iván", 25);
	Paciente *p2;
	p2= new Paciente("Alfonso", 19);
	Paciente *p3;
	p3= new Paciente("Martín",12);

	Lp.InsertarOrdenDNI(p1);
	Lp.InsertarOrdenDNI(p2);
	Lp.InsertarOrdenDNI(p3);

	 if(!Lp.estaVacia()){

		 Lp.mostrar();

	       }else{
	           cout<<"Error en la prueba 2 de Lp: cola vacía "<<endl;
	       }
	       delete p1;
	       delete p2;
	       delete p3;
}

void pruebaListaPacientes(){
cout<< "---------------------------------------";
cout<< "Inicio Pruebas de la lista de pacientes";
cout<< "------------------------------------"<< endl;
	pruebaLP1();
	pruebaLP2();
cout<< "---------------------------------------";
cout<< "Fin de las Pruebas de la lista de pacientes";
cout<< "----------------------------------------"<< endl;
}


