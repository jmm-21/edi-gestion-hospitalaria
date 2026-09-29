/*
 * ColaPaciente.h
 *
 *  Created on: 13 mar. 2023
 *      Author: alumno
 */

#ifndef COLAPACIENTE_H_
#define COLAPACIENTE_H_
#include "paciente.h"
#include "Cola.h"

class ColaPaciente {
	Cola <Paciente *> *cP;
public:

	/*DESCRIPCION: Constructor
	 * PRE:
	 * POST:
	 * COMPLEJIDAD: O(1)
	 */
	ColaPaciente();

	/*DESCRIPCION: Destructor
	 * PRE: {cp!= NULL}
	 * POST:
	 * COMPLEJIDAD: O(1)
	*/
	 ~ColaPaciente();
	 /* DESCRIPCION: Añade un nuevo proceso a la cola
 	 * PRE: (cp!= NULL)
 	 * POST:
 	 * COMPLEJIDAD:
 	 */
	 void insertar(Paciente *p);
	/*DESCRIPCION: Recupera el primer paciente y lo elimina de la cola
	 * PRE: {cp!= NULL}
	 * POST:
	 * COMPLEJIDAD:
	 */
	 void obtener (Paciente *&p);
	/*DESCRIPCION: Recupera el primer paciente y lo elimina de la cola
	 * PRE: {cp!= NULL}
	 * POST:
	 * COMPLEJIDAD: O(1)
	 */
	 Paciente* obtener();

	 /*DESCRIPCION: devuelve true o false en función de si la cola está vacía o no
	 * PRE: {cp!= NULL}
	 * POST: {true si esta vacía, false si no lo está}
 	 * COMPLEJIDAD: O(n)
 	 */
	 bool estaVacia();

	 /*DESCRIPCION: muestra por consola los pacientes de la cola
	 * PRE: {cp!= NULL}
	 * POST:
 	 * COMPLEJIDAD: O(n)
 	 */
	 void mostrar();

	 /*DESCRIPCION: cuenta cuantos pacientes hay dentro de la cola
	 * PRE: {cp!= NULL}
	 * POST: {devuelve el número de pacienetes de la cola}
 	 * COMPLEJIDAD: O(n)
 	 */
	 int contar();

};

#endif /* COLAPACIENTE_H_ */
