/*
 * pruebasPilaInformes.cpp
 *
 *  Created on: 3 abr. 2023
 *      Author: alumno
 */
#include "pruebasPilaInformes.h"
#include <iostream>
#include <string>

using namespace std;

void pruebaPI(){
	PilasInformes p;
	Informe* i1= new Informe ("Informe 1", FechaYHora("01/04/2023 10:00"), nullptr);
	Informe* i2= new Informe("Informe 2", FechaYHora("02/03/2023 09:30"), nullptr);
	Informe* i3= new Informe("Informe 3", FechaYHora("04/04/2023 13:15"), nullptr);
	Informe* i4= new Informe("Informe 4", FechaYHora("14/05/2023 10:00"), nullptr);

	p.insertar(i1);
	p.insertar(i2);
	p.insertar(i3);
	p.insertar(i4);

	cout<< "Informes: "<<endl;
	p.mostrar();

	Informe *Ultimo;
	p.getUltimoInforme(Ultimo);
	cout<< "Último informe: "<<endl;
	Ultimo->mostrar();

	Informe *Primero;
	p.getPrimerInforme(Primero);
	cout<< "Primer informe: "<<endl;
	Primero->mostrar();

	Informe* i5= new Informe("Informe 5", FechaYHora("23/04/2023 12:15"), nullptr);
	p.anadirInforme(i5);
	cout<< "Informes actualizados: "<<endl;
	p.mostrar();

// no hace falta hacer el delete de los informes ya que lo hace solo en el ,mostrar informes
// si pusiesemos los delete habría una doble liberación de memoria y ocasionaría problemas
}

void pruebasPilaInformes(){
	cout<< "-----------------------------------";
	cout<< "Inicio Prueba de la Pila de los Informes";
	cout<< "------------------------------------"<< endl;
	pruebaPI();
	cout<< "-----------------------------------";
	cout<< "Fin de las Prueba de la Pila de los Informes";
	cout<< "------------------------------------"<< endl;
}
