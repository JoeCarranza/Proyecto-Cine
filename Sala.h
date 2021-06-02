#pragma once
#ifndef SALA_H
#define SALA_H
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Sala {
public:

	Sala();


	Sala(string, int);
	~Sala();

	void setID(string);
	void setTipoSala(string);
	//void setEstado(char);

	string getID();
	string getTipoSala();
	//char getEstado();

	string toString();

private:

	string id;
	string tipoSala;
	int fil;
	int col;

	//char estado;
	string** m;


	//vector lleno de objetos Sala que contienen las matrices de asientos
	//Sala **s_vect;
	//Sala ***s_matriz;

	//clase sala y clase contenedora sala que tenga el vector con matrices
};

#endif
