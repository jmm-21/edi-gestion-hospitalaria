/*
 * VoVPacientes.h
 *
 *  Created on: 24 feb. 2023
 *      Author: alumno
 */

#ifndef VOVPACIENTES_H_
#define VOVPACIENTES_H_
const int MAX_P = 220;
#include "paciente.h"

class VoVPacientes {
private:
	Paciente* vovPaciente[MAX_P];	// Vector para un máximo de MAX punteros a paciente

	int ocupacion;					// Elementos útiles actualmente en el vector;
									// también indica la primera posción libre en el vector

public:

	// PRE: ---
	// DES: Constructor por defecto (ocupadas = 0)
	// COM: O(1)
	VoVPacientes();

	// PRE: ---
	// DES: Devuelve this->ocupadas
	// COM: O(1)
	int getOcupacion();

	// PRE: ---
	// DES: Devuelve true si this->ocupadas = MAX_P; false en caso contrario
	// COM: O(1)
	bool estaVacio();

	// PRE: ---
	// DES: Devuelve true si this->ocupadas = MAX_P; false en caso contrario
	// COM: O(1)
	bool estaLleno();

	// PRE: this->ocupadas < MAX_P (el vector no está lleno)
	// DES: Inserta el puntero a paciente p al final de this->vovPaciente; incrementa ocupadas en 1
	// COM: O(1)
	void insertar (Paciente*p);

	// PRE: 0 <= pos < this->ocupadas; this->ocupadas > 0 (el vector no está vacío)
	// DES: Elimina de this->vovPaciente el puntero a paciente de la posición pos y decrementa ocupadas en 1
	// COM: O(n) - Tamaño del problema = this->ocupadas
	void borrar (int pos);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve vovPaciente [pos]
	// COM: O(1)
	void getPosicion(int pos, Paciente*&p);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve this->vovPaciente [pos]
	// COM: O(1)
	Paciente* getPosicion(int pos);

	 ~VoVPacientes();
};

#endif /* VOVPACIENTES_H_ */
