/*
 * VoVConsultas.cpp
 *
 *  Created on: 20 feb. 2023
 *      Author: alumno
 */

#include "VoVConsultas.h"

#include<iostream>
#include <string>
using namespace std;

VoV_Consultas::VoV_Consultas() {
	this->ocupacion =0;

}
void VoV_Consultas::insertar(Consulta*c){
	if(this->ocupacion < MaxElementos){
		this->vovConsultas[this->ocupacion] = c;
		this->ocupacion++;
	}
}
void VoV_Consultas::borrar(int pos){
	vovConsultas[pos]= vovConsultas[ocupacion-1];
	ocupacion--;
}
void VoV_Consultas::getPosicion(int pos, Consulta*&c){
 c= this->vovConsultas[pos];
}

//getPosicion(20);
//PRE= {pos< getOcupacion() && pos >=20]

Consulta* VoV_Consultas::getPosicion(int pos){
	if((pos < 0)||(pos > ocupacion)){
		cout<<"error"<<endl;
	}
	return this->vovConsultas[pos];
}
int VoV_Consultas::getOcupacion(){
	return (this->ocupacion);
}
bool VoV_Consultas::estaVacio(){
	return(this->ocupacion==0);
}
bool VoV_Consultas::estaLleno(){
	return (this->ocupacion==MaxElementos);
}
void VoV_Consultas::insertarEnOrden(Consulta*c){
	bool enc= false;
	int pos=0;
	int i= 0;
	while ((i< ocupacion) && (!enc)){
		//c = vovConsultas[i];
		if(vovConsultas[i]->getFecha() > c->getFecha() ){
			enc= true;
		}
		else{
			i++;
		}
	}
	pos= i;
	for(i= ocupacion; i > pos; i--){
		vovConsultas[i]= vovConsultas[i-1];

	}
	vovConsultas[pos]= c;
	ocupacion++;
}

void VoV_Consultas::borrarConOrden(int pos) {
	int i;
	for (i=pos; i< ocupacion; i++){
		vovConsultas[i] = vovConsultas[i+1];
	}
	ocupacion--;
}

VoV_Consultas::~VoV_Consultas() {

}

