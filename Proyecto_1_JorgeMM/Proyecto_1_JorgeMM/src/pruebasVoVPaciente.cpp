/*
 * pruebasVoVPaciente.cpp
 *
 *  Created on: 1 mar. 2023
 *      Author: alumno
 */
#include "pruebasVoVPaciente.h"
#include <cmath>

void mostrar(VoVPacientes vp){
	int i;
		cout << "Vector con " << vp.getOcupacion() << " elementos útiles" << endl;
		for ( i = 0; i < vp.getOcupacion(); i++ ) {
			vp.getPosicion(i)->mostrar( );
		}

}

void probarBorrarP(){
	VoVPacientes vp;	// Constructor por defecto
		Paciente *p;
		int i;

		for ( i = 0; i < 5; i++ ) {
			p = new Paciente ( to_string(30000+rand()%50000) ,"Paciente_"+to_string(i), "Apellido_"+to_string(i), Genero(i%2), i+17 );
			vp.insertar ( p );
		}
		mostrar (vp );
		// CASO 1:
			p = vp.getPosicion (0);
			vp.borrar (0);
			delete p;
			cout << "- Tras vp.borrar(0) => ";
			mostrar (vp );

		// CASO 2:
			p = vp.getPosicion (3);
			vp.borrar (3);
			delete p;
			cout << "- Tras vp.borrar(3) => ";
			mostrar (vp );

		// CASO 3:
			p = vp.getPosicion (1);
			vp.borrar (1);
			delete p;
			cout << "- Tras vp.borrar(1) => ";
			mostrar (vp );
			i=0;
		// Finalización de la prueba
			while ( vp.getOcupacion() != 0 ){
				p = vp.getPosicion(i);
				vp.borrar(i);
				delete p;
			}

			if ( !vp.estaVacio ( ) ) {
				cerr << "ERROR: Un vector del que se borran todos los elementos debería quedar vacio" << endl;
			}
	}

void probarInsertarP() {
	VoVPacientes vp;
	Paciente *p;
	int i;
	if ( vp.estaVacio()!=true ) {
			cerr << "ERROR: Un vector recién creado debe estar vacío" << endl;
		}
		if ( vp.estaLleno()!= false ) {
			cerr << "ERROR: Un vector recién creado no puede estar lleno" << endl;
		}
		for ( i = 0; i < MAX_P; i++ ) {
				p = new Paciente ( "Persona_"+i, i );
				vp.insertar(p);
			}
		if ( vp.estaVacio ( ) ) {
				cerr << "ERROR: Un vector en el que se han insertado MAX elementos no puede estar vacío" << endl;
			}
			if ( !vp.estaLleno ( ) ) {
				cerr << "ERROR: Un vector en el que se han insertado MAX elementos debe estar lleno" << endl;
			}
			for ( i = 0; i < MAX_P; i++ ) {
					delete vp.getPosicion(i);
				}
}

void pruebaProbarConstructorP(){
	VoVPacientes vp; // Constructor por defecto
	if (vp.getOcupacion()!=0){
		cerr << "ERROR: Un vector recién creado debe tener ocupadas = 0" << endl;
	}

}


void pruebasVoVPaciente(){
cout<< "-----------------------------------";
cout<< "Inicio Pruebas del vector Paciente";
cout<< "------------------------------------"<< endl;
	pruebaProbarConstructorP();
	probarInsertarP();
	probarBorrarP();
cout<< "-----------------------------------";
cout<< "Fin de las Pruebas del vector Paciente";
cout<< "------------------------------------"<< endl;
}



