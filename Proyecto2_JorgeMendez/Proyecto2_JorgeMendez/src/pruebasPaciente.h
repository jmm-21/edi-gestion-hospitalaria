/*
 * pruebasPaciente.h
 *
 *  Created on: 1 abr. 2023
 *      Author: alumno
 */

#ifndef PRUEBASPACIENTE_H_
#define PRUEBASPACIENTE_H_
#include "paciente.h"
#include "PilasInformes.h"

using namespace std;

/*
 * Diseño de las pruebas:
 *
 * Caso 1: 1.1- Creamos un objeto estático, -const por defecto
 * 		   1.2- Creamos objetos dinámicos de tipo informe
 * 		   1.3- Usar setters
 * 		   1.4- Prueba supervisada, mostrar
 * 		   1.5- usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 *  Luis; Pérez; 90789745A; Hombre;
 *  Datos del informe: Luis tiene piedras en losError en el DNI del caso 1 riñones
 *  Fecha y hora: 0/0/0 0:0
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCaso1();

/*
 * Caso 2: 2.1- Crear objeto estático, -const parametrizado
 *  	   2.2- Creamos un nuevo informe para en paciente y lo añadimos a la pila de informes
 *  	   2.3- Creamos un médico y se lo añadimos al paciente
 * 		   2.4- Usar setters
 * 		   2.5- Prueba supervisada, mostrarFecha y hora: 0/0/0 0:0
 * 		   2.6- Usar getters
 *------------------------------------------------------
 * Resultados esperado del Caso:
 * Pepe; Muñoz; 70180970L; Hombre;
 * Médico del informe: Lucas;González;Traumatología;
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
 * Datos del informe: tiene una fisura en el húmero
 * Fecha y hora: 0/0/0 0:0
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
