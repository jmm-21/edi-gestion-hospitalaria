/*
 * pruebasMedico.cpp
 *
 *  Created on: 15 feb. 2023
 *      Author: alumno
 */

#include "pruebasMedico.h"

//caso 4
void prueaCasoM4(){
	Medico *m4;
	m4= new Medico();
	m4->setNombre("Abril");
	m4->setApellidos("Méndez");
	m4->setEspecialidad("otorrinolaringología");
	m4->mostrar();

	if(m4->getNombre()!= "Abril"){
			cout<< "Error en el nombre del caso 4"<<endl;
		}
		if(m4->getApellidos()!= "Méndez"){
			cout<< "Error en el apellido del caso 4"<<endl;
		}
		if(m4->getEspecialidad()!= "otorrinolaringología"){
			cout<< "Error en la edad del caso 4"<<endl;
		}
		delete m4;

}

//caso 3
void pruebaCasoM3(){
	Medico m2 ("Leonardo", "Cardiologo");
	m2.setApellidos("Toro");
	Medico m3(m2);
	m3.mostrar();

	if(m2.getNombre()!= "Leonardo"){
		cout<< "Error en el nombre del caso 3"<<endl;
	}
	if(m2.getApellidos()!= "Toro"){
		cout<< "Error en el apellido del caso 3"<<endl;
	}
	if(m2.getEspecialidad()!= "Cardiologo"){
		cout<< "Error en la especialidad del caso 3"<<endl;
	}


}

//caso 2
void pruebaCasoM2(){
	Medico m2 ("Leonardo", "Cardiologo");
	m2.setApellidos("Toro");
	m2.mostrar();

	if(m2.getNombre()!= "Leonardo"){
		cout<< "Error en el nombre del caso 2"<<endl;
	}
	if(m2.getApellidos()!= "Toro"){
		cout<< "Error en el apellido del caso 2"<<endl;
	}
	if(m2.getEspecialidad()!= "Cardiologo"){
		cout<< "Error en la especialidad del caso 2"<<endl;
	}
}

//caso 1
void pruebaCasoM1(){
	Medico m;
	m.setNombre("Felipe");
	m.setApellidos("Flamenquín");
	m.setEspecialidad("dermatología");
	m.mostrar();

	if(m.getNombre()!= "Felipe"){
		cout<< "Error en el nombre del caso 1"<<endl;
	}
	if(m.getApellidos()!= "Flamenquín"){
		cout<< "Error en el apellido del caso 1"<<endl;
	}
	if(m.getEspecialidad()!= "dermatología"){
		cout<< "Error en la especialidad del caso 1"<<endl;
	}

}

void pruebasMedico(){
cout<< "-----------------------------------";
cout<< "Inicio Pruebas de los Médicos";
cout<< "------------------------------------"<< endl;
	pruebaCasoM1();
	pruebaCasoM2();
	pruebaCasoM3();
	prueaCasoM4();
cout<< "-----------------------------------";
cout<< "Fin de las Pruebas de los Médicos";
cout<< "------------------------------------"<< endl;
}
