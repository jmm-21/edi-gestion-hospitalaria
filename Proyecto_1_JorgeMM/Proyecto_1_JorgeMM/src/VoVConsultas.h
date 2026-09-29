/*
 * VoVConsultas.h
 *
 *  Created on: 20 feb. 2023
 *      Author: alumno
 */

#ifndef VOVCONSULTAS_H_
#define VOVCONSULTAS_H_
#include "Consulta.h"
const int  MaxElementos= 100;

class VoV_Consultas {
private:
	Consulta* vovConsultas[MaxElementos]; 	// Vector para un máximo de MAX punteros a paciente

	int ocupacion;							// Elementos útiles actualmente en el vector;
											// también indica la primera posción libre en el vector
public:

	// PRE: ---
	// DES: Constructor por defecto (ocupadas = 0)
	// COM: O(1)
	VoV_Consultas();

	// PRE: ---
	// DES: Devuelve this->ocupadas
	// COM: O(1)
	int getOcupacion();

	// PRE: ---
	// DES: Devuelve true si this->ocupadas = MaxElementos; false en caso contrario
	// COM: O(1)
	bool estaVacio();

	// PRE: ---
	// DES: Devuelve true si this->ocupadas = MaxElementos; false en caso contrario
	// COM: O(1)
	bool estaLleno();

	// PRE: this->ocupadas < MaxElementos (el vector no está lleno)
	// DES: Inserta el puntero a consulta c al final de this->vovConsultas; incrementa ocupadas en 1
	// COM: O(1)
	void insertar (Consulta*c);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve vovConsultas [pos]
	// COM: O(1)
	void borrar (int pos);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve vovConsultas [pos]
	// COM: O(1)
	void getPosicion(int pos, Consulta*&c);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve this->vovConsultas [pos]
	// COM: O(1)
	Consulta* getPosicion(int pos);

	// PRE: this->ocupadas < MaxElementos (el vector no está lleno)
	// DES: Inserta por orden el puntero a consulta c dentro de this->vovConsultas; incrementa ocupadas en 1
	// COM: O(1)
	void insertarEnOrden(Consulta*c);

	// PRE: 0 <= pos < this->ocupadas.
	// DES: Devuelve vovConsultas [pos]; decrementa ocupadas en 1
	// COM: O(1)
	void borrarConOrden(int pos);


	~VoV_Consultas();
};

#endif /* VOVCONSULTAS_H_ */
