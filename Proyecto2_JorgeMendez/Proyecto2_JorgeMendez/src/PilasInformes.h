/*
 * PilasInformes.h
 *
 *  Created on: 6 mar. 2023
 *      Author: alumno
 */

#ifndef PILASINFORMES_H_
#define PILASINFORMES_H_
#include "Pila.h"
#include "Informe.h"
#include "PilasInformes.h"

class PilasInformes {
private:
	Pila< Informe*>*pInformes;

public:

	/*DESCRIPCION: Constructor
	 * PRE:
	 * POST:
	 * COMPLEJIDAD: O(1)
	 */
	PilasInformes();

	/*DESCRIPCION: Destructor
	 * PRE: {pInformes!= NULL}
	 * POST:
	 * COMPLEJIDAD: O(1)
	*/
	 ~PilasInformes();

	 /* DESCRIPCION: Inserta un nuevo informe a la cola
 	 * PRE: (pInformes!= NULL)
 	 * POST:
	 * COMPLEJIDAD: O(1)
	  */
	void insertar(Informe *i);

	 /*DESCRIPCION: muestra por consola los informes de la pila
	 * PRE: {pInformes!= NULL}
	 * POST:
	 * COMPLEJIDAD: O(n)
	 */
	void mostrar();

	 /*DESCRIPCION: muestra por consola el primer último de la pila
	 * PRE: {pInformes!= NULL}
	 * POST:
	 * COMPLEJIDAD: O(1)
	 */
	void getUltimoInforme(Informe *&i);

	 /*DESCRIPCION: muestra por consola el primer informe de la pila
	 * PRE: {pInformes!= NULL}
	 * POST:
	 * COMPLEJIDAD: O(1)
	 */
	void getPrimerInforme(Informe *&inf);

	 /*DESCRIPCION: añade un informe extra
	 * PRE: {pInformes!= NULL}
	 * POST:
	 * COMPLEJIDAD: O(1)
	 */
	void anadirInforme(Informe *inf);
};

#endif /* PILASINFORMES_H_ */
