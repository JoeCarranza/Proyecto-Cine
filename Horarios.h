#pragma once
#ifndef HORARIOS_H
#define HORARIOS_H
#include <iostream>
#include "Cine.h"
#include "SalaContenedora.h"
#include "Pelicula.h"
#include "Sala.h"

using namespace std;

class Horarios {

public:
	Horarios();
	Horarios(string id, string fecha, string horaInicio, Pelicula* p, Sala* sa);
	~Horarios();
	void mostrarInfoHorarios();

	void setId(string id);
	void setFecha(string fecha);
	void setHoraInicio(string horaInicio);
	void setSalaContenedora(SalaContenedora* s);
	void setPelicula(Pelicula* p);
	void setSala(Sala* sa);

	string getId();
	string getFecha();
	string getHoraInicio();
	SalaContenedora* getSalaContenedora();
	Pelicula* getPelicula();
	Sala* getSala();



private:

	string id;
	string fecha;
	string horaInicio;
	SalaContenedora* s;
	Pelicula* p;
	Sala* sa;

	//Hacer un metodo en clase Cine y Sala Contenedora que devuelva un objeto
	//esta clase debe estar asociada a la clase Sala y Pelicula. 
	//a la hora de pedir esas variables para insertar el objeto Horario, cuando se pide Pelicula y Sala
	//se muestran los contenidos de los vectores creados, por ejemplo, c->toString() y s->toString()
	//

};

#endif

