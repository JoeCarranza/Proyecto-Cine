#pragma once
#ifndef CONTENEDORAHORARIO_H
#define CONTENEDORAHORARIO_H
#include <iostream>
#include <sstream>
#include <string>
#include "Horarios.h"

using namespace std;

class ContenedoraHorario {
public:

	ContenedoraHorario();
	~ContenedoraHorario();

	//METODOS PARA GESTION DE PELICULAS
	void insertar_Horario(Horarios*);
	string mostrar_Horarios_disponibles();
	int buscar_Horario(string);
	bool Modificar_Horario(string x, Horarios*);
	void Eliminar_Horario(string);


private:

	Horarios* v_Horarios[30];
	int tam;
	int can;

};
#endif