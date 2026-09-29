/*
 * paciente.cpp
 *
 *  Created on: 6 feb. 2023
 *      Author: alumno
 */

#include "paciente.h"
#include <iostream>
#include <string>

using namespace std;

Paciente::Paciente() {
	this->DNI ="";
	this->nombre="";
	this->apellidos="";
	this->edad= -1;
	genero= Hombre;
	this->puntuacion= 0;
}


//constructor parametrizado
Paciente::Paciente(string DNI, string nombre){
		this->nombre= nombre;
		this ->apellidos= "";
		this ->DNI= DNI;
		this ->edad = edad;
		genero= Hombre;
		this->puntuacion= 0;
}

Paciente::Paciente(string nombre, int edad) {
	this->nombre= nombre;
	this->edad= edad;
	this->apellidos= "";
	this->genero=Hombre;
	this->puntuacion= 0;
}

//constructor copia
Paciente::Paciente(const Paciente &p) {
	this->nombre=p.nombre;
	this ->apellidos= p.apellidos;
	this ->DNI= p.DNI;
	this ->edad = p.edad;
	this ->genero= p.genero;
	this->puntuacion= 0;
}

Paciente::Paciente(string DNI, string nombre, string apellidos, Genero genero, int edad) {
	this->DNI=DNI;
	this->nombre=nombre;
	this->apellidos=apellidos;
	this->genero=genero;
	this->edad=edad;
	this->puntuacion= 0;
}
//Getters
string Paciente:: getNombre() {
	return nombre;
}

string Paciente:: getApellidos() {
	return apellidos;
}
string Paciente:: getDNI() {
	return DNI;
}
Genero Paciente:: getGenero() {
	return genero;
}
int Paciente:: getEdad() {
	return edad;
}

int Paciente:: getPuntuacion(){
	return puntuacion;
}


//Setters
void Paciente:: setNombre(string nombre) {
	this->nombre= nombre;
}

void Paciente:: setApellidos(string apellidos) {
	this->apellidos= apellidos;
}
void Paciente:: setDNI(string DNI) {
	this->DNI= DNI;
}
void Paciente:: setGenero(Genero genero) {
	this->genero= genero;
}
void Paciente:: setEdad(int edad){
	this->edad= edad;
}
void Paciente:: setPuntuacion(int punt){
	this->puntuacion= punt;
}
void Paciente:: mostrar(){
cout<<getNombre()<< "; "<< getApellidos()<<"; ";
	if (getEdad()== -1){
		cout<< "Edad no especificada ;";
	}
	cout<<getDNI()<<"; ";
		if(getGenero()==0){
			cout<<"Hombre";
		}
		if(getGenero()==1){
				cout<<"Mujer";
		}
		if(getGenero()==2){
				cout<<"No definido";
		}
	cout <<"; "<< endl;

}

	//destructor
	Paciente::~Paciente() {
}

void Paciente::mostrarMP() {
	cout<< getNombre()<< " "<< getApellidos()<< " : "<<getDNI()<<" [";
	if(getGenero()==0){
				cout<<"Hombre";
			}
			if(getGenero()==1){
					cout<<"Mujer";
			}
			if(getGenero()==2){
					cout<<"No definido";
			}
			cout <<"] "<<" *" <<getPuntuacion()<<"* "<<endl;
}

int Paciente::incrementarP(int punt) {
	this->puntuacion= puntuacion+ punt;
	return puntuacion;
}
