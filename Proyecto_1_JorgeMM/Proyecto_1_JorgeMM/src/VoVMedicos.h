/*
 * VoVMedicos.h
 *
 *  Created on: 24 feb. 2023
 *      Author: alumno
 */

#ifndef VOVMEDICOS_H_
#define VOVMEDICOS_H_
#include "Medico.h"
const int MAX_M = 100;

class VoVMedicos {
private:
	Medico* vovMedicos[MAX_M];	// Vector para un máximo de MAX punteros a paciente

	int ocupacion;				// Elementos útiles actualmente en el vector;
								// también indica la primera posción libre en el vector

public:

	// PRE: ---
	// DES: Constructor por defecto (ocupadas = 0)
	// COM: O(1)
	VoVMedicos();

	// PRE: ---
	// DES: Devuelve this->ocupadas
	// COM: O(1)
	int getOcupacion();

	// PRE: ---
	// DES: Devuelve true si this->ocupadas = MAX_M; false en caso contrario
	// COM: O(1)
	bool estaVacio();

	// PRE: ---
	// DES: Devuelve true si this->ocupadas = MAX_M; false en caso contrario
	// COM: O(1)
	bool estaLleno();

	// PRE: this->ocupadas < MAX_M (el vector no está lleno)
	// DES: Inserta el puntero a medico m al final de this->vovMedico; incrementa ocupadas en 1
	// COM: O(1)
	void insertar (Medico*m);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve vovMedico [pos]
	// COM: O(1)
	void borrar (int pos);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve vovMedico [pos]
	// COM: O(1)
	void getPosicion(int pos, Medico*&m);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve this->vovMedico [pos]
	// COM: O(1)
	Medico* getPosicion(int pos);

	 ~VoVMedicos();
};

#endif /* VOVMEDICOS_H_ */
