/*
 * pruebasMedico.h
 *
 *  Created on: 1 abr. 2023
 *      Author: alumno
 */

#ifndef PRUEBASMEDICO_H_
#define PRUEBASMEDICO_H_
#include "Medico.h"

/*
 * Diseño de las pruebas:
 *
 * Caso 1: 1.1- Creamos un objeto estático, -const por defecto
 * 		   1.2- Usar setters
 * 		   1.3- Prueba supervisada, mostrar
 * 		   1.4- usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Felipe;Flamenquín;dermatología;
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCasoM1();

/*
 * Caso 2: 2.1- Crear objeto estático, -const parametrizado
 * 		   2.2- Usar setters
 * 		   2.3- Prueba supervisada, mostrar
 * 		   2.4- Usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Leonardo;Toro;Cardiologo;
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCasoM2();

/*
 * Caso 3: 3.1-Crear un objeto estático, -const copia
 * 		   3.2-Usar setters
 * 		   3.3-Prueba supervisada, mostrar
 * 		   3.4-Usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Leonardo;Toro;Cardiologo;
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCasoM3();

/*
 * Caso 4: 4.1-Crear un objeto dinámico
 *		   4.2-Usar setters
 *		   4.3-Prueba supervisada, mostrar
 *		   4.4-Usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Abril;Méndez;otorrinolaringología;
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCasoM4();

// Invoca todas las pruebas anteriores
void pruebasMedico();

#endif /* PRUEBASMEDICO_H_ */
