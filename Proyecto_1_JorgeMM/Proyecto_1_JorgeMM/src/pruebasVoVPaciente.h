/*
 * pruebasVoVPaciente.h
 *
 *  Created on: 1 mar. 2023
 *      Author: alumno
 */

#ifndef PRUEBASVOVPACIENTE_H_
#define PRUEBASVOVPACIENTE_H_
#include "VoVPacientes.h"
#include "paciente.h"

// Métodos involucrados: constructor, insertar, borrar, getOcupadas, getPosicion, estaVacia
// Preparación de la prueba:
//	- Se crea un objeto vp de la clase VoVPacientes (constructor por defecto)
//	- Se insertan 5 punteros a paciente creadoscon nombre Paciente_i, Apellido_i, DNI y género
//	- Se muestra vp
//		vp = {("Paciente_0", "Apellido_0", DNI, género), ("Paciente_1", "Apellido_1", DNI, género),
//				("Paciente_2", "Apellido_2", DNI, género), ("Paciente_3", "Apellido_3", DNI, género),
//				("Paciente_4", "Apellido_4", DNI, género)}
//		ocupadas = 5
// CASO 1:
//	- eliminar (0)	=> Eliminar al principio
//		vp = {("Paciente_1", "Apellido_1", , DNI, género), ("Paciente_2", "Apellido_2", , DNI, género),
//				("Paciente_3", "Apellido_3", DNI, género), ("Paciente_4", "Apellido_4", DNI, género)}
//		vp.ocupadas = 4
//		Se libera la memoria reservada para la paciente eliminada
//	- eliminar (3)	=> Eliminar al final
//		vp = {("Paciente_1", "Apellido_1", DNI, género), ("Paciente_2", "Apellido_2", DNI, género),
//				("Paciente_3", "Apellido_3", DNI, género)}
//		vp.ocupadas = 3
//		Se libera la memoria reservada para la paciente eliminada
//	- eliminar (1) 	=> eliminar en medio
//		vp = {("Paciente_1", "Apellido_1", DNI, género), ("Paciente_3", "Apellido_3", DNI, género)}
//		vp.ocupadas = 2
//		Se libera la memoria reservada para la paciente eliminada
// Finalización de la prueba:
//	- Se libera la memoria reservada para los dos pacientes restantes
//	- Se comprueba que el vector queda vacío.
void probarBorrarP();

// Métodos involucrados: constructor, insertar, estaVacio, estaLleno, getPosicion
//	- Se crea un objeto vp de la clase VoVPacientes (constructor por defecto)
//	- estaVacio (vp) = true
//	- estaLLeno (vp) = false
//	- Se insertan en vp MAX_P punteros a paciente creados con nombre Paciente_i, Apellido_i, DNI y género
//	- Se obtienen, uno a uno, los punteros a paciente almacenados en vp (con getPosicion)
//	  y se comprueba que sus nombres, apellidos, DNI y género son los correctos.
//	- estaVacio (vp) = false
//	- estaLLeno (vp) = true
// 	- Se libera la memoria de todos los objetos paciente creados.
void probarInsertarP();

// Métodos involucrados: constructor por defecto, getPosicion, estaVacio, estaLleno
// CASO ÚNICO:
//		Se crea un objeto de la clase VoVPacientes con el
//		constructor por defecto y se comprueba que ocupadas = 0
void pruebaProbarConstructorP();

// Invoca todas las pruebas anteriores
void pruebasVoVPaciente();

#endif /* PRUEBASVOVPACIENTE_H_ */
