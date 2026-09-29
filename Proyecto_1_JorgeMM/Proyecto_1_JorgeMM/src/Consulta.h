/*
 * Consulta.h
 *
 *  Created on: 15 feb. 2023
 *      Author: alumno
 */

#ifndef CONSULTA_H_
#define CONSULTA_H_
#include <iostream>
#include <string>
#include "paciente.h"
#include "FechaYHora.h"
#include "Medico.h"
#include "FechaYHora.h"

using namespace std;

enum tipoConsulta {Pendiente, Urgente, Externa};

class Consulta {
private:
	Medico * medico;
	Paciente *paciente;
	bool alta;
	string informe;
	FechaYHora fechayhora;
	tipoConsulta tipo;
public:

	// PRE: ---
	// DES: Constructor por defecto
	// COM: O(1)
	Consulta();

	// PRE: p correctamente inicializada
	// DES: Constructor parametrizado
	// COM: O(1)
	Consulta(Paciente *p);

	// PRE: p correctamente inicializada
	// DES: Constructor parametrizado
	// COM: O(1)
	Consulta(Paciente *p, Medico *m);

	// PRE: p correctamente inicializada
	// DES: Constructor parametrizado
	// COM: O(1)
	Consulta(Paciente *p, Medico *m, tipoConsulta tipo, const FechaYHora &f);
	 ~Consulta();

	// Setters
	 // PRE: ---
	 // DES: modifica this->tipo= tipo
	 // COM: O(1)
	 void setTipo(tipoConsulta tipo);

	 // PRE: ---
	 // DES: modifica this->informe= informe
	 // COM: O(1)
	 void setInforme(string informe);

	 // PRE: ---
	 // DES: modifica this->alta= alta
	 // COM: O(1)
	 void setAlta(bool alta);

	// Getters
	 // PRE: ---
	 // DES: devuelve this->alta
	 // COM: O(1)
	 bool getAlta();

	 // PRE: ---
	 // DES: devuelve this->fechayhora
	 // COM: O(1)
	 FechaYHora getFecha();

	 // PRE: ---
	 // DES: devuelve this->tipo
	 // COM: O(1)
	 tipoConsulta getTipo();

	 // PRE: ---
	 // DES: modifica this->medico= *medico
	 // COM: O(1)
	 void asignarMedico(Medico *medico);

	 // PRE: ---
	 // DES: devuelve medico
	 // COM: O(1)
	 Medico *getMedico();

	 // PRE: ---
	 // DES: devuelve paciente
	 // COM: O(1)
	 Paciente *getPaciente();

	 // PRE: ---
	 // DES: modifica this->alta= true
	 // COM: O(1)
	 bool darDeAlta( bool alta);

	// PRE: ---
	// DES: modifica this->edad = this->informe += informe
	// COM: O(1)
	 void adjuntarInforme(string informe);

	// PRE: ---
	// DES: modifica this->edad = this->fechayhora= fh
	// COM: O(1)
	 void agendarFecha(FechaYHora fh);

	// PRE: ---
	// DES: muestra por consola el tipo de consulta, si está de alta o no el paciente, el paciente, el médico,
	// 		la fecha y la hora y el informe
	// COM: O(1)
	 void mostrar();


};

#endif /* CONSULTA_H_ */
