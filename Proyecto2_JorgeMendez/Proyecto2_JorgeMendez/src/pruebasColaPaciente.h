/*
 * pruebasColaPaciente.h
 *
 *  Created on: 2 abr. 2023
 *      Author: alumno
 */

#ifndef PRUEBASCOLAPACIENTE_H_
#define PRUEBASCOLAPACIENTE_H_
#include "paciente.h"
#include "ColaPaciente.h"

/*
 * Diseño de la prueba:
 *
 * 		   1.1- Creamos un objeto estático, -const por defecto
 * 		   1.2- Creamos unos objetos dinámicos de tipo paciente
 * 		   1.3- Usar setters
 * 		   1.4- Insertamos los pacientes en la cola
 * 		   1.5- Probamos el está vacía
 * 		   1.6- Prueba supervisada, mostrar
 * ------------------------------------------------------
 * Resultados esperado del Caso:
 * { Iván; ; ; Hombre;
 *
 * Alfonso; ; ; Hombre;
 *
 * Martín; ; ; Hombre;
 *
 * }Hay 3 Pacientes en la cola
 * El primer pacienet es: Iván
 *
 * En cualquier otro caso se mostrará un mensaje de error
 * ------------------------------------------------------
 */
void pruebaCp();

//Invoca las anterior prueba
void pruebasColaPaciente();



#endif /* PRUEBASCOLAPACIENTE_H_ */
