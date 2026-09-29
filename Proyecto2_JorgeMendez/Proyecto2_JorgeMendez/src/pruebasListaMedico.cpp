/*
 * pruebasListaMedico.cpp
 *
 *  Created on: 3 abr. 2023
 *      Author: alumno
 */

#include "pruebasListaMedico.h"
#include <iostream>
#include <string>

using namespace std;

void pruebaLM1(){

	cout<<"Prueba 1: "<<endl;

	ListaMedicos lm;


	Medico *m1;
	m1= new Medico();
	m1->setNombre("Iván");
	m1->setApellidos("González");

    Medico *m2;
    m2= new Medico();
    m2->setNombre("Alfonso");
    m2->setApellidos("García");

    Medico *m3;
    m3= new Medico();
    m3->setNombre("Martín");
    m3->setApellidos("Fonseca");

    lm.InsertarOrden(m1);
	lm.InsertarOrden(m2);
	lm.InsertarOrden(m3);

    if(!lm.estaVacia()){

    	lm.mostrar();

       }else{
           cout<<"Error en la prueba 1 de lm: cola vacía "<<endl;
       }
       delete m1;
       delete m2;
       delete m3;
   }
void pruebaLM2(){
	cout<<""<<endl;
	cout<<"Prueba 2: "<<endl;

	ListaMedicos Lm;

	Medico *m1;
	m1= new Medico("Iván", "González");
	Medico *m2;
	m2= new Medico("Alfonso", "García");
	Medico *m3;
	m3= new Medico("Martín","Fonseca");

	Lm.InsertarOrden(m1);
	Lm.InsertarOrden(m2);
	Lm.InsertarOrden(m3);

	 if(!Lm.estaVacia()){

		 Lm.mostrar();

	       }else{
	           cout<<"Error en la prueba 2 de Lm: cola vacía "<<endl;
	       }
	       delete m1;
	       delete m2;
	       delete m3;
}

void pruebaListaMedicos(){
cout<< "---------------------------------------";
cout<< "Inicio Pruebas de la lista de Médicos";
cout<< "------------------------------------"<< endl;
pruebaLM1();
pruebaLM2();
cout<< "---------------------------------------";
cout<< "Fin de las Pruebas de la lista de Médicos";
cout<< "----------------------------------------"<< endl;
}

