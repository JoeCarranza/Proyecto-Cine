#pragma once
#ifndef CINE_H
#define CINE_H

#include <iostream>
#include <sstream>
#include "Pelicula.h"
#include "Sala.h"
#include "Horarios.h"

using namespace std;
class Cine {
private:
	int can;
	int tam;
	Pelicula* vector[30];
public:
	Cine();
	~Cine();
	void setTam(int tam);
	int getTam();

	void setCan(int can);
	int getCan();



	//METODOS PARA GESTION DE PELICULAs
	void insertar_peliculas(Pelicula* p);
	string mostrar_peliculas_disponibles();
	int buscar_Pelicula(string);
	bool Modificar_Peliculas(string x, Pelicula* p);
	void Eliminar_Peliculas(string);
	Pelicula Devolver_Pelicula(string);


	//PROBAR METODOS EN EL MAIN /////////////////////////////////////////
};

#endif