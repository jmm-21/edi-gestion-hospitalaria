/*
 * pruebasPilaInformes.h
 *
 *  Created on: 3 abr. 2023
 *      Author: alumno
 */

#ifndef PRUEBASPILAINFORMES_H_
#define PRUEBASPILAINFORMES_H_
#include "PilasInformes.h"


/*
 * Diseño de las pruebas:
 *
 * Caso 1: 1.1- Creamos un objeto estático, -const por defecto
 * 		   1.2- Creamos nuevos informes
 * 		   1.3- Usamos el módulo mostrar
 * 		   1.4- Prueba supervisada, mostrar
 * 		   1.5- Usamos getters a continuación de prueba supervisada del mostrar
 * 		   1.5- Añadimos un nuevo informe
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 *
 * Informes:
 * Datos del informe: Informe 4
 * Fecha y hora: 14/5/2023 10:0
 *
 * Datos del informe: Informe 3
 * Fecha y hora: 4/4/2023 13:15
 *
 * Datos del informe: Informe 2
 * Fecha y hora: 2/3/2023 9:30
 *
 * Datos del informe: Informe 1
 * Fecha y hora: 1/4/2023 10:0
 *
 *
 * Último informe:
 *Datos del informe: Informe 1
 *Fecha y hora: 1/4/2023 10:0
 *
 * Primer informe:
 * Datos del informe: Informe 4
 * Fecha y hora: 14/5/2023 10:0
 *
 * Informes actualizados:
 * Datos del informe: Informe 5
 * Fecha y hora: 23/4/2023 12:15
 *
 * Datos del informe: Informe 4
 * Fecha y hora: 14/5/2023 10:0
 *
 *Datos del informe: Informe 3
 * Fecha y hora: 4/4/2023 13:15
 *
 * Datos del informe: Informe 2
 * Fecha y hora: 2/3/2023 9:30
 *
 * Datos del informe: Informe 1
 * Fecha y hora: 1/4/2023 10:0
 *
 * ------------------------------------------------------
 */
void pruebaPI();

// Invoca la prueba anterior
void pruebasPilaInformes();

#endif /* PRUEBASPILAINFORMES_H_ */
