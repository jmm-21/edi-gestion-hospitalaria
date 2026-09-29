/*
 * prueasVoVMedico.h
 *
 *  Created on: 1 mar. 2023
 *      Author: alumno
 */

#ifndef PRUEBASVOVMEDICO_H_
#define PRUEBASVOVMEDICO_H_
#include "VoVMedicos.h"
#include "Medico.h"

// Métodos involucrados: constructor, insertar, borrar, getOcupadas, getPosicion, estaVacia
// Preparación de la prueba:
//	- Se crea un objeto vm de la clase VoVMedico (constructor por defecto)
//	- Se insertan 5 punteros a medico creadoscon nombre Medico_i, Apellidos_i y Especialidad_i
//	- Se muestra vm
//		vm = {("Paciente_0", "Apellido_0",  "Especialidad_0"), ("Paciente_1", "Apellido_1",  "Especialidad_1"),
//				("Paciente_2", "Apellido_2", "Especialidad_2"), ("Paciente_3", "Apellido_3", "Especialidad_3"),
//				("Paciente_4", "Apellido_4", "Especialidad_4")}
//		ocupadas = 5
// CASO 1:
//	- eliminar (0)	=> Eliminar al principio
//		vm = {("Paciente_1", "Apellido_1", "Especialidad_1"), ("Paciente_2", "Apellido_2","Especialidad_2"),
//				("Paciente_3", "Apellido_3", "Especialidad_3"), ("Paciente_4", "Apellido_4", "Especialidad_4")}
//		vm.ocupadas = 4
//		Se libera la memoria reservada para la medico eliminada
//	- eliminar (3)	=> Eliminar al final
//		vm = {("Paciente_1", "Apellido_1", "Especialidad_1"), ("Paciente_2", "Apellido_2", "Especialidad_2"),
//				("Paciente_3", "Apellido_3", "Especialidad_3")}
//		vm.ocupadas = 3
//		Se libera la memoria reservada para la medico eliminada
//	- eliminar (1) 	=> eliminar en medio
//		vm = {("Paciente_1", "Apellido_1", "Especialidad_1"), ("Paciente_3", "Apellido_3", "Especialidad_3")}
//		vm.ocupadas = 2
//		Se libera la memoria reservada para la medico eliminada
// Finalización de la prueba:
//	- Se libera la memoria reservada para los dos medicos restantes
//	- Se comprueba que el vector queda vacío.
void probarBorrarM();

// Métodos involucrados: constructor, insertar, estaVacio, estaLleno, getPosicion
//	- Se crea un objeto vp de la clase VoVMedico (constructor por defecto)
//	- estaVacio (vm) = true
//	- estaLLeno (vm) = false
//	- Se insertan en vm MAX_M punteros a medico creados con nombre Medico_i, Apellidos_i y Especialidad_i
//	- Se obtienen, uno a uno, los punteros a medico almacenados en vm (con getPosicion)
//	  y se comprueba que sus nombres, apellidos y especialidades son los correctos.
//	- estaVacio (vm) = false
//	- estaLLeno (vm) = true
// 	- Se libera la memoria de todos los objetos medico creados.
void probarInsertarM();

// Métodos involucrados: constructor por defecto, getPosicion, estaVacio, estaLleno
// CASO ÚNICO:
//		Se crea un objeto de la clase VoVMedico con el
//		constructor por defecto y se comprueba que ocupadas = 0
void pruebaProbarConstructorM();

// Invoca todas las pruebas anteriores
void pruebasVoVMedico();



#endif /* PRUEBASVOVMEDICO_H_ */
