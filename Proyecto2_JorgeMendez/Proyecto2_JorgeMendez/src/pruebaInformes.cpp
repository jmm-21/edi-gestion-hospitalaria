/*
 * pruebaInformes.cpp
 *
 *  Created on: 2 abr. 2023
 *      Author: alumno
 */
#include "pruebaInformes.h"
#include <iostream>
#include <string>

using namespace std;

void pruebaC3(){
	cout<< "Prueba 3: "<<endl;
	Informe *i= new Informe("Alta hospitalarioa");
	Medico* m =new Medico("José", "Pulido", "Pediatría");
	FechaYHora fh(03, 02, 2023, 20, 45);
	i->setMedico(m);
	i->setFechaYHora(fh);
	i->mostrar();
	if(i->getMedico()!=m){
			cout<< "Error en el médico del caso 2"<<endl;
	}
	delete m;
}

void pruebaC2(){
	cout<< "Prueba 2: "<<endl;
	Medico*m= new Medico("Leo","Toro", "Traumatología");
	FechaYHora fh(03, 03, 2023, 17, 45);
	Informe i("Lesión de ligamento cruzado anterior",fh, m);
	i.mostrar();
	if(i.getInforme()!="Lesión de ligamento cruzado anterior"){
				cout<< "Error en el informe del caso 2"<<endl;
	}
	if(i.getMedico()!=m){
			cout<< "Error en el médico del caso 2"<<endl;
	}
	delete m;
}
void pruebaC1(){
	cout<< "Prueba 1: "<<endl;
	Informe i;
	Medico*m= new Medico("iván","González", "Traumatología");
	i.setInforme("Inflamación rodilla derecha");
	FechaYHora fh(02, 04, 2023, 16, 45);
	i.setFechaYHora(fh);
	i.setMedico(m);
	i.mostrar();
	if(i.getInforme()!="Inflamación rodilla derecha"){
			cout<< "Error en el informe del caso 1"<<endl;
	}
	if(i.getMedico()!=m){
			cout<< "Error en el médico del caso 1"<<endl;
	}
	delete m;
}

void pruebasInforme(){
cout<< "-----------------------------------";
cout<< "Inicio Pruebas de los Informes";
cout<< "------------------------------------"<< endl;
	pruebaC1();
	pruebaC2();
	pruebaC3();
cout<< "-----------------------------------";
cout<< "Fin de las Pruebas de los Informes";
cout<< "------------------------------------"<< endl;
}

