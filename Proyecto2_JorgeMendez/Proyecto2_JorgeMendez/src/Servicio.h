/*
 * Servicio.h
 *
 *  Created on: 13 mar. 2023
 *      Author: alumno
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_
#include "ColaPaciente.h"
#include <iostream>
#include <ctime>
using namespace std;
const int MAX_PRIORIDAD = 5;
class Servicio {
	string especialidad;
	ColaPaciente *colaPP [MAX_PRIORIDAD];
	Medico*m;
public:

	 /* DESCRIPCION: Constructor por defecto
	  * PRE: {colaPP != nullptr}
	  * POST: {}
	  * COMPLEJIDAD: O(n)
	  */
	Servicio();

	 /* DESCRIPCION: Constructor parametrizado
	  * PRE: {colaPP != nullptr}
	  * POST: {}
	  * COMPLEJIDAD: O(n)
	  */
	Servicio(string especialidad);

	 /* DESCRIPCION: Destructor
	  * PRE: {}
	  * POST: {}
	  * COMPLEJIDAD: O(n)
	  */
	 ~Servicio();

	 /* DESCRIPCION: Devuelce true si todas las colas estan vacías
	  * PRE: {colaPP[1]->vacia(), i>0 && i<= MAX_PRIORIDAD}
	  * POST: {}
	  * COMPLEJIDAD: O(n)
	  */
	 bool estaVacia();

	 /* DESCRIPCION: Devuelce true si la cola de la prioridad indicada está vacía
	  * PRE: {prioridad >0 && i <= MAX_PRIORIDAD}
	  * POST: {}
 	  * COMPLEJIDAD: O(1)
 	  */
	 bool estaVaciaPrioridad(int prioridad);

	 /* DESCRIPCION: Inserta en la cola con la prioridad indicada un nuevo paciente
	  * PRE: {}
	  * POST: {}
	  * COMPLEJIDAD: O(1)
	  */
	 void insertar (int prioridad, Paciente *p);

	 /* DESCRIPCION: Muestra los datos datos de los pacientes de la prioridad indicada
	  * PRE: {colaPP != nullptr && prioridad >0 && i <= MAX_PRIORIDAD}
	  * POST: {}
	  * COMPLEJIDAD: O(1)
	  */
	 void mostrarPrioridad(int prioridad);

	 /* DESCRIPCION: Cuenta cuantos pacientes hay en la cola de la prioridad indicada
	  * PRE: {prioridad >0 && i <= MAX_PRIORIDAD}
	  * POST: {}
	  * COMPLEJIDAD: O(1)
	  */
	 int contarPrioridad(int prioridad);

	 /* DESCRIPCION: Muestra los datos de los pacientes de la cola en cada una de las prioridades
	  * PRE: {colaPP != nullptr && prioridad >0 && i <= MAX_PRIORIDAD}
	  * POST: {}
	  * COMPLEJIDAD:
	  */
	 void mostrar();

	 /* DESCRIPCION: Devuelve this->especialidad
	  * PRE: {colaPP != nullptr}
	  * POST: {}
	  * COMPLEJIDAD: O(1)
	 */
	 string getEspecialidad();

	 /* DESCRIPCION: Devuelve this->m
	  * PRE: {colaPP != nullptr}
	  * POST: {}
	  * COMPLEJIDAD: O(1)
	 */
	 Medico*getMedico();

	 /* DESCRIPCION: Modifica this->m= m
	  * PRE: {colaPP != nullptr}
	  * POST: {}
	  * COMPLEJIDAD: O(1)
	 */
	 void asignarMedico(Medico*m);

	 /* DESCRIPCION: A cada paciente de cada prioridad se le genera un informe
	  * que se añade a su historia médica y acaba mostrando todos sus datos
	  * PRE: {colaPP != nullptr}
	  * POST: {}
	  * COMPLEJIDAD: O(n)
	 */
	 void procesar();

};

#endif /* SERVICIO_H_ */
