#pragma once
#ifndef PELICULA_H
#define PELICULA_H


#include <sstream>
#include <iostream>

using namespace std;

class Pelicula {

private:
	string id;
	string anno;
	string nombre;
	string duracion;
	string sinapsis;
	string estudio_cinema;
public:
	Pelicula();
	Pelicula(string id, string anno, string nombre, string duracion, string sinapsis, string estudio_cinema);
	~Pelicula();

	//sets y gets
	void setId(string id);
	string getId();
	void setAnno(string anno);
	string getAnno();
	void setNombre(string nombre);
	string getNombre();
	void setDuracion(string duracion);
	string getDuracion();
	void setSinapsis(string sinapsis);
	string getSinapsis();
	void setEstudio_cinema(string cinema);
	string getEstudio_cinema();
	string toString();
};




#endif

