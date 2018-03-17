/*
  Archivo: Grupo.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Grupo.h"
#include <iomanip>
#include <iostream>


using namespace std;

Grupo::Grupo()
{
	this-> ultimo = 0;
}

Grupo::~Grupo()
{
	//Método destructor
}

void Grupo::setUltimo(int ultimo){
	this -> ultimo = ultimo;
}

int Grupo::getUltimo(){
	return ultimo;
}

int Grupo::getTamano(){
	return tamano;
}

bool Grupo::codigoRepetido(int codigo)
{
    int tamano = this -> getTamano();
    bool encontrado = false;
    for(int i=0;i<tamano;i++)
    {
        if(codigo == this -> grupo[i].getCodigo())
            encontrado = true;
    }
    return encontrado;
}

bool Grupo::agregarEstudiante(Estudiante estudiante)
{
    int ultimo = this-> getUltimo();
    int tamano = this -> getTamano();

    if (codigoRepetido(estudiante.getCodigo()))
    {
        cout << endl << "Este codigo ya existe";
        return false;
    }
    else if ( ultimo < tamano)
    {
        this -> grupo[ultimo] = estudiante;
        this -> setUltimo(++ultimo);
        cout << endl << "Estudiante agregado con exito";
        return true;
    } else {
        cout << endl << "Ocurrió un error";
        return false;
    }
}

double Grupo::promedioPeso()
{
    double acumuladorPeso = 0;
    int tamano = this->getTamano();
    int cuantosEst = this->getUltimo();

    for (int j = 0; j < cuantosEst; j++) {
        acumuladorPeso += this->grupo[j].getPeso();
    }
    return acumuladorPeso / cuantosEst;
}

double Grupo::promedioEdad()
{
    double acumuladorEdad = 0;
    int tamano = this->getTamano();
    int cuantosEst = this->getUltimo();

    for (int j = 0; j < cuantosEst; j++) {
        acumuladorEdad += this->grupo[j].getEdad();
    }
    return acumuladorEdad / cuantosEst;
}

void Grupo::listarEstuditantes()
{
    int ultimo = this -> getUltimo();
    int longitud = 0;
    string nombre = "";
    cout << "Estudiante" << setw(20) << "Codigo" << setw(15) << "Edad" << setw(15) << "Peso" << endl;
    for(int i = 0 ; i < ultimo; i++){
        nombre = grupo[i].getNombre();
        longitud = nombre.length();
        cout << nombre.append(20-longitud,'.') << " : " <<setw(5) ;
        cout << grupo[i].getCodigo()  <<setw(15) ;
        cout << grupo[i].getEdad()  <<setw(15) ;
        cout << grupo[i].getPeso()  << endl;
    }
}

void  Grupo::personasMayorPeso()
{
    int ultimo = this -> getUltimo();
    int longitud = 0;
    string nombre = "";
    cout << "Estudiante" << endl;

    for(int i = 0 ; i < ultimo ; i++ ){

        if(grupo[i].getPeso() > this -> promedioPeso() ) {
            nombre = grupo[i].getNombre();
            cout << nombre << endl;
        }
    }
}

void  Grupo::personasMayorEdad()
{
    int ultimo = this -> getUltimo();
    int longitud = 0;
    string nombre = "";
    cout << "Estudiante" << endl;

    for(int i = 0 ; i < ultimo ; i++ ){

        if(grupo[i].getEdad() > this -> promedioEdad() ) {
            nombre = grupo[i].getNombre();
            cout << nombre << endl;
        }
    }
}

void Grupo::buscarEstudiante(int codigoEst){
    int ultimo = this -> getUltimo();
    int longitud = 0;
    string nombre = "";

    
    for(int i=0; i<ultimo; i++){
        
        if(grupo[i].getCodigo() == codigoEst){
            nombre = grupo[i].getNombre();
            cout<< "el codigo corresponde al estudiante: ";
            cout<< nombre<<endl;
        }
    }
}


void Grupo::listadoCodigo(){
    
  int tamano = this -> getUltimo();
  int i,j,aux;
  
  for(i=0;i<tamano;i++){
      codigosEstu[i]=grupo[i].getCodigo();
      estudiantes[i]=grupo[i].getNombre();
  }

    for(i=0;i<tamano;i++)
    {
        for(j=i+1;j<tamano;j++)
        {
            if(codigosEstu[i]<codigosEstu[j])
            {
                aux=codigosEstu[i];
                codigosEstu[i]=codigosEstu[j];
                codigosEstu[j]=aux;
            }
        }
    }
    
    cout<<" \nlos codigos ordenados de mayor a menor son: " ;
    for(i=0;i<tamano;i++)
    {
        
        cout<< codigosEstu[i]<<",";
    }

}
