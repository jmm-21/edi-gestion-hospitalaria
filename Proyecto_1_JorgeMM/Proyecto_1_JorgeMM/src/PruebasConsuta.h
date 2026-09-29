/*
 * PruebasConsuta.h
 *
 *  Created on: 24 feb. 2023
 *      Author: alumno
 */

#ifndef PRUEBASCONSUTA_H_
#define PRUEBASCONSUTA_H_
#include "Consulta.h"
#include "paciente.h"
#include "Medico.h"

	/*
	 * Diseño de las pruebas:
	 *
	 * Caso 1: 1.1- Crear un objeto dinámico
	 * 		   1.2- Crear el puntero para el paciente
	 * 		   1.3- Crear el puntero para el medico
	 * 		   1.4- Usar setters para cada objeto
	 * 		   1.5- Crear el puntero para la consulta
	 * 		   1.6- Asignamos un medico a la consulta
	 * 		   1.7- Prueba supervisada, mostrar
	 *
	 * ----------------------------------------------------------------------------------------------------
	 * Resultados esperado del Caso 1:
	 *
	 * Tipo de la consulta: Pendiente
	 * No está de alta
	 * Paciente: Pepito; Martínez; Edad no especificada ;12347907P; Hombre;
	 * Médico: Dolores;Fuertes;Tuerce tripas;
	 * 0/0/0 0:0
	 * Informe:
	 *
	 * En cualquier otro caso se mostrará un mensaje de error
	 * ----------------------------------------------------------------------------------------------------
	 */
	void pruebaCasoConsulta1();

	/*
	 * Caso 2: 2.1- Crear un objeto dinámico
	 *  	   2.2- Crear el puntero para el paciente
	 * 		   2.3- Crear el puntero para el medico
	 * 		   2.4- Usar setters para cada objeto
	 * 		   2.5- Crear el puntero para la consulta, asignandole el puntero paciente y el puntero medico
	 * 		   2.6- Programamos la fecha y hora de la consulta
 	 * 		   2.7- Adjuntamos el informe
 	 * 		   2.8- Damos el alta
 	 * 		   2.9- Prueba supervisada, mostrar
	 * ----------------------------------------------------------------------------------------------------
	 * Resultados esperado del Caso 2:
	 *
	 * Tipo de la consulta: Pendiente
	 * Está de alta
	 * Paciente: Pepito; Martínez; Edad no especificada ;12347907P; Hombre;
	 * Médico: Dolores;Fuertes;Tuerce tripas;
	 * 12/6/2023 23:0
	 * Informe: tiene un estrónglito en el píloro , aparte de piedras en los riñones
	 *
	 * En cualquier otro caso se mostrará un mensaje de error
	 * -----------------------------------------------------------------------------------------------------
	 */
	void pruebaCasoConsulta2();

	// Invoca todas las pruebas anteriores
	void pruebasConsulta();


#endif /* PRUEBASCONSUTA_H_ */
