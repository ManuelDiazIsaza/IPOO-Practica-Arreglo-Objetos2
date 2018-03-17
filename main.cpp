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
   
   Estudiante estudianteUno("Pepito", 14, 30, 1741652);
   Estudiante estudianteDos("Juanito", 10, 25, 1741623);
   Estudiante estudianteTres("Juanito", 10, 25, 1741628);

   ipoo.agregarEstudiante(estudianteUno);
   ipoo.agregarEstudiante(estudianteDos);
   ipoo.agregarEstudiante(estudianteTres);
   
   cout << endl;
   ipoo.listarEstuditantes();
   cout << endl;
   cout  << ipoo.codigoRepetido(1741628) << endl;
   cout << ipoo.promedioPeso() << endl;
   cout << ipoo.promedioEdad() << endl;
   ipoo.personasMayorPeso();
   ipoo.personasMayorEdad();
     ipoo.buscarEstudiante(1741628);
   ipoo.listadoCodigo();
   
}
