/*
 * pruebaVoVConsulta.cpp
 *
 *  Created on: 2 mar. 2023
 *      Author: alumno
 */

#include "pruebaVoVConsulta.h"

#include <cmath>

void mostrar(VoV_Consultas vc){

	int i;
	cout << "Vector con " << vc.getOcupacion() << " elementos útiles" << endl;
	for ( i = 0; i < vc.getOcupacion(); i++ ) {
			vc.getPosicion(i)->mostrar( );
		}

}

void probarBorrarC() {
	VoV_Consultas vc;	// Constructor por defecto
	Paciente *p;
	Medico *m;
	Consulta *c;
		int i;

		for ( i = 0; i < 5; i++ ) {
			p = new Paciente ( to_string(30000+rand()%50000) ,"Paciente_"+to_string(i), "Apellido_"+to_string(i), Genero(i%2), i+17 );
			m = new Medico ( "Medico_"+to_string(i), "Apellidos_"+to_string(i), "Especialidad_"+to_string (i));
			c = new Consulta (p, m); //no necesitamos la hora ni la fecha para esta prueba

			vc.insertar ( c );
		}
		mostrar (vc);
		// CASO 1:
			c = vc.getPosicion (0);
			vc.borrarConOrden (0);
			delete c;
			cout << "- Tras vm.borrar(0) => ";
			mostrar (vc );
		// CASO 2:
			c = vc.getPosicion (3);
			vc.borrarConOrden (3);
			delete c;
			cout << "- Tras vm.borrar(3) => ";
			mostrar (vc );
		// CASO 3:
			c = vc.getPosicion (1);
			vc.borrarConOrden (1);
			delete c;
			cout << "- Tras vm.borrar(1) => ";
			mostrar (vc );
			i=0;
		// Finalización de la prueba
			while ( vc.getOcupacion() != 0 ){
				c = vc.getPosicion(i);
				vc.borrarConOrden (i);
				delete c;
			}

			if ( !vc.estaVacio ( ) ) {
				cerr << "ERROR: Un vector del que se borran todos los elementos debería quedar vacio" << endl;
			}
}

void probarInsertarEnOrden() {
	VoV_Consultas vc;
	Paciente *p;
	Medico *m;
	Consulta *c;
	if ( vc.estaVacio()==false ) {
		cerr << "ERROR: Un vector recién creado debe estar vacío" << endl;
	}
	if ( vc.estaLleno()== true ) {
		cerr << "ERROR: Un vector recién creado no puede estar lleno" << endl;
	}
	p = new Paciente ( to_string(30000+rand()%50000) ,"Paciente_prueba", "Apellido", Genero(2%2), 17+rand()%20 );
	m = new Medico ("Medico_prueba", "Apellido", "Especialidad");
	//CASO 1
	//Es la primera consulta con fecha que hay, será la primera dentro del vector.
	FechaYHora a (12, 12, 2023, 14, 30);
	c= new Consulta (p, m, Externa, a);
	vc.insertarEnOrden(c);
	mostrar(vc);

	//CASO 2
	//Ahora habrá dos consultas en el vector, esta segunda ocupará la primera posición
	//la anterior consulta pasará a la segunda posición.
	FechaYHora b (12, 12, 2021, 14, 30);
	c= new Consulta (p, m, Externa, b);
	vc.insertarEnOrden(c);
	mostrar(vc);

	//CASO 3
	//Tres consultas en el vector, la última insertada pasa a ser la última del vector.
	FechaYHora c_(12, 12, 2024, 14, 30);
	c= new Consulta (p, m, Externa, c_);
	vc.insertarEnOrden(c);
	mostrar(vc);


	//CASO 4
	//Cuatro consultas en el vector, esta última se inserta en la segunda posición.
	FechaYHora d (12, 12, 2022, 14, 30);
	c= new Consulta (p, m, Externa, d);
	vc.insertarEnOrden(c);
	mostrar(vc);


	delete p;
	delete m;
	delete c;

}


void pruebaProbarConstructorC() {
	VoV_Consultas vc; // Constructor por defecto
	if (vc.getOcupacion()!=0){
	cerr << "ERROR: Un vector recién creado debe tener ocupadas = 0" << endl;
	}

}


void pruebasVoVConsulta() {
cout<< "-----------------------------------";
cout<< "Inicio Pruebas del vector Consulta";
cout<< "------------------------------------"<< endl;
	probarBorrarC();
	pruebaProbarConstructorC();
	probarInsertarEnOrden();
cout<< "---------------------------------------";
cout<< "Fin de las Pruebas del vector Consulta";
cout<< "---------------------------------------"<< endl;
}


