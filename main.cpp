/*
  Archivo: Main.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2017-08-11
  Fecha C:ltima modificaciC3n: 2017-08-31
  VersiC3n: 0.1
  Licencia: GPL
*/

//Utilidad: DemostraciC3n arreglo de objetos

#include <iostream>
#include <stdio.h>
#include <string>
#include "Grupo.h"

using namespace std;


int main()
{
   Grupo ipoo;
   
   Estudiante estudianteUno("Pepito", 14, 30);
   
   if(ipoo.agregarEstudiante(estudianteUno)){
       cout << endl << "Estudiante agregado con éxito";
   } else {
       cout << endl << "Ocurrió un error";
   }
   
   
   Estudiante estudianteDos("Juanito", 10, 25);
   
   if(ipoo.agregarEstudiante(estudianteDos)){
       cout << endl << "Estudiante agregado con éxito";
   } else {
       cout << endl << "Ocurrió un error";
   }
   
   cout << endl;
   ipoo.listarEstuditantes();
   
   
}
