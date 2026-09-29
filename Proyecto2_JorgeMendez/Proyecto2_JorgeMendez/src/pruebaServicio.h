/*
 * pruebaServicio.h
 *
 *  Created on: 2 abr. 2023
 *      Author: alumno
 */

#ifndef PRUEBASERVICIO_H_
#define PRUEBASERVICIO_H_
#include "Servicio.h"

/*
 * Diseño de las pruebas:
 *
 * Caso 1: 1.1- Creamos un objeto estático, -const por defecto
 * 		   1.2- Creamos objetos dinámicos de tipo paciente, -const parametrizado
 * 		   1.3- Usamos el insertar
 * 		   1.4- Probamos el está vacía
 * 		   1.5- probamos el contar de cada prioirdad
 * 		   1.6- Prueba supervisada, mostrar
 * 		   1.7- Asignamos un médico al servicio y usamos el módulo procesar
 * 		   1.8- Prueba supervisada, mostrar
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 *
 *	Prueba 1:
 * { Iván; ; ; Hombre;
 *
 * Alfonso; ; ; Hombre;
 *
 * }{ Martín; ; ; Hombre;
 *
 * }{ Elustondo; ; ; Hombre;
 *
 * }{ }{ }Iván; ; ; Hombre;
 * Datos del informe:  se ha generado un informe para el paciente: Iván de prioridad 1
 * Médico del informe: Gonzálo;Guerrero;Cardiólogía;
 *
 * Fecha y hora: 4/4/2023 16:56
 *
 *
 * Alfonso; ; ; Hombre;
 * Datos del informe:  se ha generado un informe para el paciente: Alfonso de prioridad 1
 * Médico del informe: Gonzálo;Guerrero;Cardiólogía;
 *
 * Fecha y hora: 4/4/2023 16:56
 *
 *
 *Martín; ; ; Hombre;
 *Datos del informe:  se ha generado un informe para el paciente: Martín de prioridad 2
 * Médico del informe: Gonzálo;Guerrero;Cardiólogía;
 *
 * Fecha y hora: 4/4/2023 16:56
 *
 *
 * Elustondo; ; ; Hombre;
 * Datos del informe:  se ha generado un informe para el paciente: Elustondo de prioridad 3
 * Médico del informe: Gonzálo;Guerrero;Cardiólogía;
 *
 * Fecha y hora: 4/4/2023 16:56
 *
 *
 *{ }{ }{ }{ }{ }
 * ------------------------------------------------------
 */
void prueba1();

/*
 * Caso 2: 2.1- Creamos un objeto estatico, -const parametrizado
 * 		   2.2- Creamos objetos dinámicos de tipo paciente, -const parametrizado
 * 		   2.3- Usamos el insertar
 * 		   2.4- Probamos el está vacía
 * 		   2.5- probamos el contar de cada prioirdad
 * 		   2.6- Prueba supervisada, mostrar
 * 		   2.7- Asignamos un médico al servicio y usamos el módulo procesar
 * 		   2.8- Prueba supervisada, mostrar
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * Prueba 2:
 * { Iván; ; ; Hombre;
 *
 * Alfonso; ; ; Hombre;
 *
 * }{ Martín; ; ; Hombre;
 *
 * }{ Elustondo; ; ; Hombre;
 *
 * }{ }{ }Iván; ; ; Hombre;
 * Datos del informe:  se ha generado un informe para el paciente: Iván de prioridad 1
 * Médico del informe: Gonzálo;Guerrero;Cardiólogía;
 *
 * Fecha y hora: 4/4/2023 16:56
 *
 *
 * Alfonso; ; ; Hombre;
 * Datos del informe:  se ha generado un informe para el paciente: Alfonso de prioridad 1
 * Médico del informe: Gonzálo;Guerrero;Cardiólogía;
 *
 * Fecha y hora: 4/4/2023 16:56
 *
 *
 * Martín; ; ; Hombre;
 * Datos del informe:  se ha generado un informe para el paciente: Martín de prioridad 2
 * Médico del informe: Gonzálo;Guerrero;Cardiólogía;
 *
 * Fecha y hora: 4/4/2023 16:56
 *
 *
 * Elustondo; ; ; Hombre;
 * Datos del informe:  se ha generado un informe para el paciente: Elustondo de prioridad 3
 * Médico del informe: Gonzálo;Guerrero;Cardiólogía;
 *
 * Fecha y hora: 4/4/2023 16:56
 *
 *
 * { }{ }{ }{ }{ }
 */
void prueba2();

// Invoca todas las pruebas anteriores
void pruebaServicio();

#endif /* PRUEBASERVICIO_H_ */
