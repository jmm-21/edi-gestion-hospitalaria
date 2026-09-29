/*
 * PruebasEnsayociclico.h
 *
 *  Created on: 10 may. 2023
 *      Author: alumno
 */

#ifndef PRUEBASENSAYOCICLICO_H_
#define PRUEBASENSAYOCICLICO_H_
#include "ensayoclinico.h"
/*
 * Diseño de las pruebas:
 * Caso pruebaDNI: 	1.1- Mostramos el caso esperado
 * 		 			1.2- Creamos un objeto dinámico, de clase EnsayoClinico
 * 		  			1.3- Usamos el módulo anotar
 * 		 			1.4- Mostramos el caso resultante de la prueba usando módulos creados
 * 		 			1.5- Comprobamos que dan el mismo resultado
 */
void pruebaDNI();

/*
* Caso pruebaApellidos: 	2.1- Mostramos el caso esperado
* 		 					2.2- Creamos un objeto dinámico, de clase EnsayoClinico
* 		  					2.3- Usamos el módulo anotar
* 		 					2.4- Mostramos el caso resultante de la prueba usando módulos creados
* 		 					2.5- Comprobamos que dan el mismo resultado
*/
void pruebaApellidos();

/*
* Caso pruebaNiveles: 	3.1- Mostramos el caso esperado
* 		 				3.2- Creamos un objeto dinámico, de clase EnsayoClinico
* 		  				3.3- Usamos el módulo anotar
* 		 				3.4- Mostramos el caso resultante de la prueba usando módulos creados
* 		 				3.5- Comprobamos que dan el mismo resultado
*/
void pruebaNiveles();

/*
* Caso pruebaErrores: 	4.1- Mostramos el caso esperado
* 		 				4.2- Creamos un objeto dinámico, de clase EnsayoClinico
* 		  				4.3- Usamos el módulo anotar
* 		 				4.4- Mostramos el caso resultante de la prueba usando módulos creados
* 		 				4.5- Comprobamos que dan el mismo resultado
*/
void pruebaErrores();

/*
* Caso pruebaCuantosHay: 	5.1- Mostramos el caso esperado
* 		 					5.2- Creamos un objeto dinámico, de clase EnsayoClinico
* 		  					5.3- Usamos el módulo anotar
* 			 				5.4- Mostramos el caso resultante de la prueba usando módulos creados
*	 		 				5.5- Comprobamos que dan el mismo resultado
*/
void pruebaCuantosHay();

/*
* Caso pruebaGetNombre: 	6.1- Mostramos el caso esperado
* 		 					6.2- Creamos un objeto dinámico, de clase EnsayoClinico
* 		  					6.3- Usamos el módulo anotar
* 			 				6.4- Mostramos el caso resultante de la prueba usando módulos creados
*	 		 				6.5- Comprobamos que dan el mismo resultado
*/
void pruebaGetNombre();

// Invoca todas las pruebas anteriores
void pruebaEnsayoClinico();

#endif /* PRUEBASENSAYOCICLICO_H_ */
