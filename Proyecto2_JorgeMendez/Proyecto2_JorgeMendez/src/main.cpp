//============================================================================
// Name        : Proyecto2_JorgeMendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Hospital.h"
using namespace std;


// Muestra el menu por pantalla y devuelve una opcion elegida.
int menu(string nombre) {

   int opcion;

   do {
      cout << endl;
      cout << "--------  " << nombre << "  --------"  << endl << endl;

      cout << "     1. Mostrar Estadísticas                       " << endl;
      cout << "     2. Mostrar Pacientes                          " << endl;
      cout << "     3. Mostrar Médicos                            " << endl;
      cout << "     4. Mostrar Pacientes en espera                " << endl;
      cout << "     5. Buscar Paciente                            " << endl;
      cout << "     6. Buscar Médico                              " << endl;
      cout << "     7. Asignar un médico a un servicio            " << endl;
      cout << "     8. Procesar las colas de espera del Servicio  " << endl;
      cout << "     0. Finalizar.                         " << endl;
      cout << "                        Opción:  ";

      cin >> opcion;
      cin.ignore();

   } while ((opcion < 0) || (opcion > 8));

   return opcion;
}



int main() {
	//Juego de pruebas;

	//pruebasPaciente();
	//pruebasMedico();
	//pruebasInforme();
	//pruebasColaPaciente();
	//pruebaServicio();
	//pruebasPilaInformes();
	//pruebaListaPacientes();
	//pruebaListaMedicos();

	// Programa principal:
   Hospital  *hospital  = nullptr;
   bool       salir       = false;
   int        opcion;
   string DNI;
   string Apellidos;
   Paciente*p= nullptr;
   Medico*m= nullptr;
   srand(1992);

   hospital= new Hospital("San Jorge");

   while (!salir) {
      opcion = menu(hospital->getNombre());

      switch (opcion) {
         case 1:
        	 cout<< "------------Estadísticas------------"<< endl;
            hospital->mostrarEstadisticas();
            break;

         case 2:
        	 cout<< "-------------Pacientes-------------"<< endl;
            hospital->mostrarPacientes();
            break;

         case 3:
        	 cout<< "--------------Médicos--------------"<< endl;
            hospital->mostrarMedicos();
            break;
         case 4:
        	 cout<< "---------------------Pacientes en espera---------------------"<<endl;
        	 cout<< " "<<endl;
        	 hospital->mostrarPenEspera();
        	  break;
         case 5:
        	 cout<< "-----------Buscar paciente-----------"<<endl;
        	 cout<< "Inserte su DNI"<<endl;
        	getline (cin, DNI, '\n');
        	 if(hospital->buscarP(DNI, p)){
        		 p->mostrarP();
        	 }else{
        		 cout<< "paciente no encontrado"<<endl;
        	 }
        	 break;
         case 6:
        	 cout<< "-----------Buscar médico-----------"<<endl;
        	 cout<< "Inserte su apellido"<<endl;
        	 getline (cin, Apellidos, '\n');
        	 if(hospital->buscarM(Apellidos, m)){
        		 m->mostrar();
        	 }else{
        		 cout<< "médico no encontrado"<<endl;
        	 }

        	 break;
         case 7:
			 cout<< "----------Asignar un médico a un servicio-----------"<<endl;
			 cout<< "__________servicio de traumatología__________"<<endl;
			 cout<<" "<<endl;
			 hospital->asignarMedico();
			 cout<< "médico asignado"<<endl;
			 cout<<" "<<endl;

        	 break;
         case 8:
        	 cout<< "----------Procesar colas de un servicio-----------"<<endl;
        	 hospital->procesar();

        	 break;
         case 0:
            salir = true;
            break;

         default:
            break;

      }

   }

 delete hospital;


   return 0;
}



