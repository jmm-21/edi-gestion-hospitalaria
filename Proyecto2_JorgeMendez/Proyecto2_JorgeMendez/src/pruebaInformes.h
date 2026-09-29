/*
 * pruebaInformes.h
 *
 *  Created on: 2 abr. 2023
 *      Author: alumno
 */

#ifndef PRUEBAINFORMES_H_
#define PRUEBAINFORMES_H_
#include "Informe.h"

/*
 * Diseño de las pruebas:
 *
 * Caso 1: 1.1- Creamos un objeto estático, -const por defecto
 * 		   1.2- Usar setters
 * 		   1.3- Prueba supervisada, mostrar
 * 		   1.4- usar getters
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 *  Prueba 1:
 * Datos del informe: Inflamación rodilla derecha
 * Médico del informe: iván;González;Traumatología;
 *
 * Fecha y hora: 2/4/2023 16:45
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaC1();

/* Caso 2: 2.1- Creamos un objeto estático, -const por parametrizado
* 		   2.2- Usar setters
* 		   2.3- Prueba supervisada, mostrar
* 		   2.4- Usar getters
* ------------------------------------------------------
* Resultados esperado del Caso:
*  Prueba 2:
* Datos del informe: Lesión de ligamento cruzado anterior
* Médico del informe: Leo;Toro;Traumatología;
*
* Fecha y hora: 3/3/2023 17:45
* ------------------------------------------------------
*/
void pruebaC2();

/* Caso 3: 3.1- Creamos un objeto dinámico, -const por parametrizado
* 		   3.2- Usar setters
* 		   3.3- Prueba supervisada, mostrar
* 		   3.4- Usar getters
* ------------------------------------------------------
* Resultados esperado del Caso:
*  Prueba 3:
* Datos del informe: Alta hospitalarioa
* Médico del informe: José;Pulido;Pediatría;
*
* Fecha y hora: 3/2/2023 20:45
* ------------------------------------------------------
*/
void pruebaC3();

// Invoca todas las pruebas anteriores
void pruebasInforme();

#endif /* PRUEBAINFORMES_H_ */
