/*
 * PruebasEnsayoclinico.cpp
 *
 *  Created on: 10 may. 2023
 *      Author: alumno
 */
#include "PruebasEnsayociclico.h"

#include <iostream>
#include <string>

void pruebaDNI(){
	cout<< "---------------------------------------";
	cout<< "Inicio Pruebas de Mostrar por DNI";
	cout<< "------------------------------------"<< endl<<endl;
	cout<<"Caso esperado: "<< endl;
	cout <<"Pacientes cuyo DNI empieza por la cadena -28-:" << endl;
	cout<<"Adrián Caballero Ramos: 28436484O [NoDefinido] *4921*"<<endl;
	cout<<"Alejandro Nicolas Rodriguez Galan: 28659346N [Mujer] *5078*"<<endl;
	cout<<"David Muñoz San Andrés: 28661130E [NoDefinido] *5108*"<<endl;
	cout<<"Antonio Manuel González Arce: 28925342J [NoDefinido] *5082*"<<endl;
	EnsayoClinico *pr;
	pr = new EnsayoClinico();
	pr->anotar();
	cout<<endl;
	cout<< "Caso resultante:"<<endl;
	cout << "Pacientes cuyo DNI empieza por la cadena -28-:" << endl;
	pr->mostrarPorDNI("28");
	cout << endl;
	cout<< "---------------------------------------";
	cout<< "Fin Pruebas de Mostrar por DNI";
	cout<< "------------------------------------"<<endl;
	delete pr;
}

void pruebaApellidos(){
	cout<< "---------------------------------------";
	cout<< "Inicio Pruebas de Mostrar por Apellido";
	cout<< "------------------------------------"<< endl<<endl;
	cout<<"Caso esperado: "<< endl;
	cout << "Pacientes cuyo apellido contiene la cadena -art-:" << endl;
	cout<<"Francisco Javier Martín Ramírez: 30001766J [Hombre] *5020*"<<endl;
	cout<<"Máximo Luis Bueno Martínez: 43937451Z [Hombre] *5131*"<<endl;
	cout<<"Daniel Sánchez Martín: 50490564M [NoDefinido] *5020*"<<endl;
	cout<<"Arturo Martín Bueno: 55906031V [NoDefinido] *5047*"<<endl;
	cout<<"Jorge Méndez Martínez: 63670540B [NoDefinido] *4946*"<<endl;
	cout<<"Ismael Miguel Martín: 68711824N [Mujer] *4909*"<<endl;
	cout<<"Julio Martín De La Flor: 91942490Q [NoDefinido] *4904*"<<endl;
	cout<<"Álvaro Mendo Martín: 92125171D [NoDefinido] *5030*"<<endl;
	cout<<"Hugo Martín Gabriel: 97773647B [Hombre] *4843*"<<endl;
	EnsayoClinico *pr;
	pr = new EnsayoClinico();
	pr->anotar();
	cout << endl;
	cout<< "Caso resultante:"<<endl;
	cout << "Pacientes cuyo apellido contiene la cadena -art-:" << endl;
	pr->mostrarPorApellido("art");
	cout << endl;
	cout<< "---------------------------------------";
	cout<< "Fin Pruebas de Mostrar por Apellido";
	cout<< "------------------------------------"<<endl;
	delete pr;

}
void pruebaNiveles(){
	cout<< "---------------------------------------";
	cout<< "Inicio Pruebas de Nivel del arbol";
	cout<< "------------------------------------"<< endl<<endl;
	cout<<"Caso esperado: "<< endl;
	cout<<"Niveles del arbol: 8"<<endl;
	EnsayoClinico *pr;
	pr = new EnsayoClinico();
	pr->anotar();
	cout << endl;
	cout<< "Caso resultante:"<<endl;
	cout << "Niveles del arbol: " << pr->numNiveles() << endl << endl;
	cout<< "---------------------------------------";
	cout<< "Fin Pruebas de Nivel del arbol";
	cout<< "------------------------------------"<<endl;
	delete pr;
}

void pruebaErrores(){
	cout<< "---------------------------------------";
	cout<< "Inicio Pruebas de Mostrar Errores";
	cout<< "------------------------------------"<< endl<<endl;
	cout<<"Caso esperado: "<< endl;
	cout << "Errores en pacientes: " << endl;
	cout<<"17281002S"<<endl;
	cout<<"11324230Z"<<endl;
	cout<<"99217882B"<<endl;
	cout<<"99812892J"<<endl;
	cout<<"73092301G"<<endl;
	EnsayoClinico *pr;
	pr = new EnsayoClinico();
	pr->anotar();
	cout << endl;
	cout<< "Caso resultante:"<<endl;
	cout << "Errores en pacientes: " << endl;
	pr->mostrarErrores();
	cout<< "---------------------------------------";
	cout<< "Fin Pruebas de Mostrar Errores";
	cout<< "------------------------------------"<<endl;
	delete pr;
}

void pruebaCuantosHay(){

	cout<< "---------------------------------------";
	cout<< "Inicio Pruebas de Mostrar Cuantos";
	cout<< "------------------------------------"<< endl<<endl;
	cout<<"Caso esperado: "<< endl;
	cout <<"Mostrar 3 pacientes con mayor puntuación: " << endl;
	cout<< "Yahya El Baroudi El Ouazghari: 37761577D [Mujer] *5265*"<<endl;
	cout<< "Jaime Quijada González: 21690145W [Hombre] *5232*"<<endl;
	cout<< "aniel Becerra Benítez: 96761557J [NoDefinido] *5230*"<<endl;
	EnsayoClinico *pr;
	pr = new EnsayoClinico();
	pr->anotar();
	int cuantosMay = 3;
	cout << endl;
	cout<< "Caso resultante:"<<endl;
	cout << "Mostrar 3 pacientes con mayor puntuación: " << endl;
	pr->mostrarMayores(cuantosMay);
	cout<< "---------------------------------------";
	cout<< "Fin Pruebas de get nombre";
	cout<< "------------------------------------"<<endl;
	delete pr;
}
void pruebaGetNombre() {
	cout<< "---------------------------------------";
	cout<< "Inicio Pruebas de get nombre";
	cout<< "------------------------------------"<< endl<<endl;
	cout<<"Caso esperado: "<< endl;
	cout<<"Ensayo de: Jorge Méndez Martínez"<<endl;
	EnsayoClinico *pr;
	pr = new EnsayoClinico();
	cout << endl;
	cout<< "Caso resultante:"<<endl;
	cout << "Ensayo de: " << pr->getNombre() << endl<< endl;
	cout<< "---------------------------------------";
	cout<< "Fin Pruebas de get nombre";
	cout<< "------------------------------------"<<endl;
    delete pr;
}

void pruebaEnsayoClinico(){
cout<< "---------------------------------------";
cout<< "Inicio Pruebas del Ensayo Clinico";
cout<< "------------------------------------"<< endl;
	pruebaGetNombre();
	pruebaCuantosHay();
	pruebaErrores();
	pruebaNiveles();
	pruebaApellidos();
	pruebaDNI();
cout<< "---------------------------------------";
cout<< "Fin de las Pruebas del Ensayo Clinico";
cout<< "----------------------------------------"<< endl;
}
