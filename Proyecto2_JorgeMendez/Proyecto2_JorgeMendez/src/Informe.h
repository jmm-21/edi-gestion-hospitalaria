/*
 * Informe.h
 *
 *  Created on: 6 mar. 2023
 *      Author: alumno
 */

#ifndef INFORME_H_
#define INFORME_H_
#include "Medico.h"
#include "FechaYHora.h"
#include <string>
#include <iostream>
using namespace std;

class Informe {
private:
	string informe;
	FechaYHora fechaYHora;
	Medico *m;
public:
	// PRE: ---
	// DES: Constructor por defecto
	// COM: O(1)
	Informe();

	// PRE: ---
	// DES: Constructor parametrizado
	// COM: O(1
	Informe(string informe, FechaYHora fechaYHora, Medico *m);

	// PRE: m correctamente inicializada
	// DES: Constructor por copia
	// COM: O(1)
	Informe (const string &informe );

	// PRE: ---
	// DES: devuelve this->informe
	// COM: O(1)
	string getInforme();

	// PRE: ---
	// DES: devuelve this->fechaYHora
	// COM: O(1)
	FechaYHora getFechaYHora();

	// PRE: ---
	// DES: devuelve this->m
	// COM: O(1)
	Medico *getMedico();

	// PRE: ---
	// DES: modifica this->informe = informe
	// COM: O(1)
	void setInforme(string informe);

	// PRE: ---
	// DES: modifica this->fechaYHora = fechaYHora
	// COM: O(1)
	void setFechaYHora(FechaYHora fechaYHora);

	// PRE: ---
	// DES: modifica this->m = m
	// COM: O(1)
	void setMedico(Medico*m);

	// PRE: ---
	// DES: muestra por consola el nombre, los datos del informe, el médico y la fecha y hora
	// COM: O(1)
	void mostrar();

	// PRE: ---
	// DES: Destructor
	// COM: O(1)
	 ~Informe();
};

#endif /* INFORME_H_ */
