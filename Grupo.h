/*
  Archivo: Grupo.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2018-02-09
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Grupo
// Responsabilidad: Administrar un grupo de estudiantes
// ColaboraciÃ³n: NInguna

#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include "Estudiante.h"

using namespace std;


class Grupo
{
	private:
		int tamano = 10;
		Estudiante grupo[10];
		int ultimo;
	public:
		Grupo();
		~Grupo();
		void setUltimo(int ultimo);
		int getUltimo();
		int getTamano();
		bool agregarEstudiante(Estudiante estudiante);
		void listarEstuditantes();
		bool codigoRepetido(int codigo);
        double promedioPeso();
        double promedioEdad();
        void personasMayorPeso();
        void personasMayorEdad();
	        void buscarEstudiante(int codigoEst);
        int codigosEstu[4];
        string estudiantes[4];
        void listadoCodigo();

};

#endif
