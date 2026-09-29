//============================================================================
// Name        : Proyecto_1_JorgeMM.cpp
// Author      : Jorge Méndez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "pruebasPaciente.h"
#include "pruebasMedico.h"
#include "PruebasConsuta.h"
#include "Hospital.h"
#include "pruebasVoVPaciente.h"
#include "pruebasVoVMedico.h"
#include "pruebaVoVConsulta.h"

using namespace std;


// Muestra el menu por pantalla y devuelve una opcion elegida.
int menu(string nombre) {

   int opcion;

   do {
      cout << endl;
      cout << "--------  " << nombre << "  --------"  << endl << endl;

      cout << "     1. Mostrar EstadÃ­sticas               " << endl;
      cout << "     2. Mostrar Pacientes                  " << endl;
      cout << "     3. Mostrar Médicos                    " << endl;
      cout << "     4. Mostrar Consultas                  " << endl;
      cout << "     5. Buscar Paciente                    " << endl;
      cout << "     6. Buscar Médico                      " << endl;
      cout << "     7. Guardar consultas programadas      " << endl;
      cout << "     0. Finalizar.                         " << endl;
      cout << "        Elija una opción:  ";

      cin >> opcion;
      cin.ignore();

   } while ((opcion < 0) || (opcion > 7));

   return opcion;
}



int main() {

	//Pruenas de los módulos:

	pruebasPaciente();
	pruebasMedico();
	pruebasConsulta();
	pruebasVoVPaciente();
	pruebasVoVMedico();
	pruebasVoVConsulta();

	// Programa principal:

   Hospital  *hospital  = nullptr;
   bool       fin       = false;
   int        opcion;
   string DNI;
   string apellidos;
   Paciente *p;
   Medico *m;
   p= nullptr;
   m= nullptr;

   hospital= new Hospital("hospital_jorge");

   do {
      opcion = menu(hospital->getNombre());

      switch (opcion) {
         case 1:
            hospital->mostrarEstadisticas();
            break;

         case 2:
            hospital->mostrarPacientes();
            break;

         case 3:
            hospital->mostrarMedicos();
            break;

         case 4:
        	 hospital->mostrarConsultas();
            break;

         case 5:
        	 cout<< "Para buscar al paciente inserte su DNI"<<endl;
        	 getline (cin, DNI, '\n');
        	 hospital->buscarP(DNI, p);
        	 p->mostrar();
         	 break;

         case 6:
        	 cout<< "Para buscar al médico, inserte su médico"<< endl;
        	 getline (cin, apellidos);
        	 hospital->buscarM(apellidos, m);
        	 m->mostrar();
        	 break;

         case 7:
        	 cout<< "Para guardar todas las consultas de un paciente, introduzca su DNI, ";
			 cout<< "se mostrarán los datos de su médico asignado y la fecha de la consulta"<<endl;
        	 getline (cin, DNI);
        	 hospital->guardarConsultas(DNI);
        	 break;

         case 0:
            fin = true;
            break;

         default:
            break;

      }

   } while (!fin);

   delete hospital;

   return 0;
}



