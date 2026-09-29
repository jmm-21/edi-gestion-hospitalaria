/*
 * ListaMedicos.h
 *
 *  Created on: 20 mar. 2023
 *      Author: alumno
 */
#include "ListaDPI.h"
#include "Medico.h"

#ifndef LISTAMEDICOS_H_
#define LISTAMEDICOS_H_

class ListaMedicos {
private:
	ListaDPI <Medico *> *lMedicos;
	void mostrarR(ListaDPI <Medico*> *lMedicos);
	int cuantosR(ListaDPI<Medico*>*l);
public:
	// PRE: ---
	// DES: Constructor por defecto
	// COM: O(1)
	ListaMedicos();

	// PRE: ---
	// DES: Inserta por orden de apellido los médicos en la lista de médicos
	// COM: O(n)
	void InsertarOrden(Medico *m);

	// PRE: lMedico no puede estar vacía
	// DES: devuelve true si encuentra un médico con el apellido dado en la lista, false en caso contrario
	// COM: O(n)
	bool existe (string Apellidos);

	// PRE: lMedico no puede estar vacía
	// DES: si encuentra un médico con la especialidad dada dentro de la lista lo devuelve
	// COM: O(n)
	void buscarEsp (string especialidad, Medico*&m);

	// PRE: lMedico no puede estar vacía
	// DES: si encuentra un médico con el apellido dado dentro de la lista lo devuelve
	// COM: O(n)
	void obtener (string Apellidos, Medico *&m);

	// PRE: lMedico no puede estar vacía
	// DES: devuelve el primer médico de la lista y lo elimina de la lista
	// COM: O(n)
	void obtenerPrimero (Medico *m);

	// PRE: lMedico no puede estar vacía
	// DES: muestra por consola los datos de los médicos de dentro de la lista
	// COM: O(n)
	void mostrarRec(ListaDPI<Medico*> *lMedicos);

	// PRE: lMedico no puede estar vacía
	// DES: muestra por consola los datos de los médicos de dentro de la lista
	// COM: O(n)
	void mostrar();

	// PRE: ---
	// DES: devuelve true si la lista de médicos esta vacía y false en caso contrario
	// COM: O(1)
	bool estaVacia();

	// PRE: ---
	// DES: cuenta cuantos médicos hay dentro de la lista de médicos
	// COM: O(n)
	int cuantosR();

	~ListaMedicos();
};

#endif /* LISTAMEDICOS_H_ */
