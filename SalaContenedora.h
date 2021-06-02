#pragma once
#ifndef SALACONTENEDORA_H
#define SALACONTENEDORA_H

#include <iostream>
#include <sstream>
#include <string>
#include "Sala.h"

class SalaContenedora {

public:
	SalaContenedora();
	~SalaContenedora();

	void agregarSala(Sala* s);
	string mostrarSalas();
	bool modificarSala(string id, Sala* s);
	void eliminarSala(string id);
	int buscar_Sala(string);
	Sala Devolver_Sala(string);

	void setSala(Sala* sa);
	Sala* getSala();

	//void asignarAsiento(int, int);  //recibe la posicion exacta en la matriz para cambiar su contenido en la reserva

private:

	Sala* v_Sala[8];
	//Sala *sa;
	int tam;
	int can;

};


#endif



