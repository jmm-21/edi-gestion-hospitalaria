/*
 * pruebasVoVMedico.cpp
 *
 *  Created on: 1 mar. 2023
 *      Author: alumno
 */
#include "pruebasVoVMedico.h"
#include <cmath>

void mostrar(VoVMedicos vm){

	int i;
	cout << "Vector con " << vm.getOcupacion() << " elementos útiles" << endl;
	for ( i = 0; i < vm.getOcupacion(); i++ ) {
			vm.getPosicion(i)->mostrar( );
		}

}

void probarBorrarM() {
	VoVMedicos vm;	// Constructor por defecto
	Medico *m;
		int i;

		for ( i = 0; i < 5; i++ ) {
			m = new Medico ( "Medico_"+to_string(i), "Apellidos_"+to_string(i), "Especialidad_"+to_string (i));
			vm.insertar ( m );
		}
		mostrar (vm );
		// CASO 1:
			m = vm.getPosicion (0);
			vm.borrar (0);
			delete m;
			cout << "- Tras vm.borrar(0) => ";
			mostrar (vm );
		// CASO 2:
			m = vm.getPosicion (3);
			vm.borrar (3);
			delete m;
			cout << "- Tras vm.borrar(3) => ";
			mostrar (vm );
		// CASO 3:
			m = vm.getPosicion (1);
			vm.borrar (1);
			delete m;
			cout << "- Tras vm.borrar(1) => ";
			mostrar (vm );
			i=0;
		// Finalización de la prueba
			while ( vm.getOcupacion() != 0 ){
				m = vm.getPosicion(i);
				vm.borrar (i);
				delete m;
			}

			if ( !vm.estaVacio ( ) ) {
				cerr << "ERROR: Un vector del que se borran todos los elementos debería quedar vacio" << endl;
			}
}

void probarInsertarM() {
	VoVMedicos vm;
	Medico *m;
	int i;
	if ( vm.estaVacio()==false ) {
			cerr << "ERROR: Un vector recién creado debe estar vacío" << endl;
		}
		if ( vm.estaLleno()== true ) {
			cerr << "ERROR: Un vector recién creado no puede estar lleno" << endl;
		}
		for ( i = 0; i < MAX_M; i++ ) {
				m = new Medico ( "Medico_"+to_string(i), "Apellidos_"+to_string(i), "Especialidad_"+to_string (i));
				vm.insertar(m);
			}
		if ( vm.estaVacio ( ) ) {
				cerr << "ERROR: Un vector en el que se han insertado MAX elementos no puede estar vacío" << endl;
			}
			if ( !vm.estaLleno ( ) ) {
				cerr << "ERROR: Un vector en el que se han insertado MAX elementos debe estar lleno" << endl;
			}
			for ( i = 0; i < MAX_M; i++ ) {
					delete vm.getPosicion(i);
				}
}

void pruebaProbarConstructorM() {
	VoVMedicos vm; // Constructor por defecto
	if (vm.getOcupacion()!=0){
	cerr << "ERROR: Un vector recién creado debe tener ocupadas = 0" << endl;
	}

}

void pruebasVoVMedico() {
cout<< "-----------------------------------";
cout<< "Inicio Pruebas del vector Médico";
cout<< "------------------------------------"<< endl;
	probarBorrarM();
	probarInsertarM();
	pruebaProbarConstructorM();
cout<< "-----------------------------------";
cout<< "Fin de las Pruebas del vector Médico";
cout<< "------------------------------------"<< endl;
}

