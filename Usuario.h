#pragma once
#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <sstream>

using namespace std;

class Usuario {

private:
	string nombre;
	//se le podrian agregar algunas variables necesarias
public:
	Usuario();
	Usuario(string nombre);
	~Usuario();
	void setNombre(string);
	string getNombre();
	void Comprar_Tiquete();
	void tostring_Compra();

	//clase no tan necesaria, por la descripcion del metodo Comprar_Tiquete()

};

#endif
