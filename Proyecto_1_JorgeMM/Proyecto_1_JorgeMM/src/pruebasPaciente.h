/*
 * pruebasPaciente.h
 *
 *  Created on: 15 feb. 2023
 *      Author: alumno
 */

#ifndef PRUEBASPACIENTE_H_
#define PRUEBASPACIENTE_H_
#include "paciente.h"


using namespace std;

/*
 * Diseño de las pruebas:
 *
 * Caso 1: 1.1- Creamos un objeto estático, -const por defecto
 * 		   1.2- Usar setters
 * 		   1.3- Prueba supervisada, mostrar
 * 		   1.4- usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Luis; Pérez; 90789745A; Hombre;
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCaso1();

/*
 * Caso 2: 2.1- Crear objeto estático, -const parametrizado
 * 		   2.2- Usar setters
 * 		   2.3- Prueba supervisada, mostrar
 * 		   2.4- Usar getters
 *------------------------------------------------------
 * Resultados esperado del Caso:
 * Pepe; Muñoz; 70180970L; Hombre;
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCaso2();

/*
 * Caso 3: 3.1-Crear un objeto estático, -const copia
 * 		   3.2-Usar setters
 * 		   3.3-Prueba supervisada, mostrar
 * 		   3.4-Usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Pepe; Muñoz; 70180970L; Hombre;
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCaso3();

/*
 *  Caso 4: 4.1-Crear un objeto dinámico
 *		   4.2-Usar setters
 *		   4.3-Prueba supervisada, mostrar
 *		   4.4-Usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Alejandra; García; 12458910L; No definido;
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCaso4();

//Invoca las anteriores pruebas
void pruebasPaciente();


#endif /* PRUEBASPACIENTE_H_ */
