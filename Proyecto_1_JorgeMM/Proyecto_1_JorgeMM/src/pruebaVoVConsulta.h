/*
 * pruebaVoVConsulta.h
 *
 *  Created on: 2 mar. 2023
 *      Author: alumno
 */

#ifndef PRUEBAVOVCONSULTA_H_
#define PRUEBAVOVCONSULTA_H_

#include "VoVConsultas.h"
#include "Consulta.h"

// Métodos involucrados: constructor, insertar, borrar, getOcupadas, getPosicion, estaVacia
// Preparación de la prueba:
//	- Se crea un objeto vc de la clase VoV_Consulta (constructor por defecto)
//	- Se insertan 5 punteros a consulta creados con un paciente y medico asignados
//	- Se muestra vc
//		vc = {(Paciente_0, Medico_0), (Paciente_1, Medico_1),
//				(Paciente_2, Medico_2), (Paciente_3, Medico_3), (Paciente_4, Medico_4)}
//		vc.ocupadas = 5
// CASO 1:
//	- eliminar (0)	=> Eliminar al principio
//		vc = {(Paciente_1, Medico_1), (Paciente_2, Medico_2),
//				(Paciente_3, Medico_3), (Paciente_4, Medico_4)}
//		vc.ocupadas = 4
//		Se libera la memoria reservada para la consulta eliminada
//	- eliminar (3)	=> Eliminar al final
//		vc = {(Paciente_1, Medico_1), (Paciente_2, Medico_2),
//				(Paciente_3, Medico_3)}
//		vc.ocupadas = 3
//		Se libera la memoria reservada para la consulta eliminada
//	- eliminar (1) 	=> eliminar en medio
//		vc = {(Paciente_1, Medico_1), (Paciente_3, Medico_3)}
//		vc.ocupadas = 2
//		Se libera la memoria reservada para la consulta eliminada
// Finalización de la prueba:
//	- Se libera la memoria reservada para las dos consulta restantes
//	- Se comprueba que el vector queda vacío.
void probarBorrarC();

// Métodos involucrados: constructor, insertarEnOrden, estaVacio, estaLleno, mostrar
//	- Se crea un objeto vp de la clase VoV_Consulta (constructor por defecto)
//	- estaVacio (vc) = true
//	- estaLLeno (vc) = false
//	- Se insertan ordenadamente en vc punteros a consulta creados con un paciente y medico asignados
//	- Cada uno de estos tendrá una fecha y hora distinta asignada
//	CASO 1:
//	-Se inserta y se muestra la primera consulta con fecha que hay, será la primera dentro del vector.
//	CASO 2:
// 	-Se crea una nueva consulta con una fecha anterior a la creada en el CASO 1,
// 	 esta al insertarse en vc se pone en la posición 0, desplazandose la anterior consulta a la posición 1.
// 	CASO 3:
// 	-Se crea una nueva consulta con la fecha más antigua, al inserarse en vc ocupará la posición 2.
//	CASO 4:
//	-Se crea una nueva consulta la cual tiene una fecha intermedia (no es la primera ni la última),
//	 a la hora de insertarse ocupará la posición 2, desplazando las anteriores consultas una posición atrás.
// 	- Se libera la memoria de todos los objetos consulta creados.
void probarInsertarEnOrden();

// Métodos involucrados: constructor por defecto, getPosicion, estaVacio, estaLleno
// CASO ÚNICO:
//		Se crea un objeto de la clase VoV_Consulta con el
//		constructor por defecto y se comprueba que ocupadas = 0
void pruebaProbarConstructorC();

// Invoca todas las pruebas anteriores
void pruebasVoVConsulta();

#endif /* PRUEBAVOVCONSULTA_H_ */
