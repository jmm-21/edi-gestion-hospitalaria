/*
 * pruebasListaMedico.h
 *
 *  Created on: 3 abr. 2023
 *      Author: alumno
 */

#ifndef PRUEBASLISTAMEDICO_H_
#define PRUEBASLISTAMEDICO_H_

#include "ListaMedicos.h"

/*
 * Diseño de las pruebas:
 *
 * Caso 1: 1.1- Creamos un objeto estático, -const por defecto
 * 		   1.2- Creamos objetos dinámicos de tipo Medico, -const por defecto
 * 		   1.3- Usamos setters
 * 		   1.4- Usamos insertar
 * 		   1.5- Probamos el está vacía
 * 		   1.6- Prueba supervisada, mostrar
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Prueba 1:
 * Martín;Fonseca;;
 * Alfonso;García;;
 * Iván;González;;
 *
 * En otro caso mostrará un mensaje de error
 */
void pruebaLM1();

/*
 * Caso 2: 2.1- Creamos un objeto estático, -const por defecto
 * 		   2.2- Creamos objetos dinámicos de tipo Medico, -const parametrizado
 * 		   2.3- Usamos insertar
 * 		   2.4- Probamos el está vacía
 * 		   2.5- Prueba supervisada, mostrar
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Prueba 2:
 * Iván;;González;
 * Alfonso;;García;
 * Martín;;Fonseca;
 *
 * En otro caso mostrará un mensaje de error
 */
void pruebaLM2();

// Invoca todas las pruebas anteriores
void pruebaListaMedicos();



#endif /* PRUEBASLISTAMEDICO_H_ */
