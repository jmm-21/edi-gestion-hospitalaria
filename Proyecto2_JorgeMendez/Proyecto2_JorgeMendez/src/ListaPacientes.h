/*
 * ListaPacientes.h
 *
 *  Created on: 20 mar. 2023
 *      Author: alumno
 */
#include "ListaDPI.h"
#include "paciente.h"

#ifndef LISTAPACIENTES_H_
#define LISTAPACIENTES_H_

class ListaPacientes {
private:
	ListaDPI <Paciente *> *lPacientes;
	void mostrarR(ListaDPI <Paciente*> *lPacientes);
	int cuantosR(ListaDPI<Paciente*>*l);
public:

	// PRE: ---
	// DES: Constructor por defecto
	// COM: O(1)
	ListaPacientes();

	// PRE: ---
	// DES: Inserta por orden de DNI los pacientes en la lista de pacientes
	// COM: O(n)
	void InsertarOrdenDNI(Paciente *p);

	// PRE: lPacientes no puede estar vacía
	// DES: devuelve true si encuentra un paciente con el DNI dado en la lista, false en caso contrario
	// COM: O(n)
	bool existe (string DNI);

	// PRE: lPacientes no puede estar vacía
	// DES: si encuentra un paciente con el DNI dado dentro de la lista lo devuelve
	// COM: O(n)
	void obtener (string DNI, Paciente *&p);

	// PRE: lPacientes no puede estar vacía
	// DES: devuelve el primer paciente de la lista y lo elimina de la lista
	// COM: O(n)
	void obtenerPrimero (Paciente *p);

	// PRE: lPacientes no puede estar vacía
	// DES: muestra por consola los datos de los pacientes de dentro de la lista
	// COM: O(n)
	void mostrarRec(ListaDPI<Paciente*> *lPacientes);

	// PRE: lPacientes no puede estar vacía
	// DES: muestra por consola los datos de los pacientes de dentro de la lista
	// COM: O(n)
	void mostrar();

	// PRE: ---
	// DES: devuelve true si la lista de pacientes esta vacía y false en caso contrario
	// COM: O(1)
	bool estaVacia();

	// PRE: ---
	// DES: cuenta cuantos pacientes hay dentro de la lista de pacientes
	// COM: O(n)
	int cuantosR();

	 ~ListaPacientes();
};

#endif /* LISTAPACIENTES_H_ */
