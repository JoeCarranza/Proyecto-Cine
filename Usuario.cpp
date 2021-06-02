#include "Usuario.h"
Usuario::Usuario() {
	nombre = " ";
}

Usuario::Usuario(string nombre) {
	this->nombre = nombre;
}

Usuario::~Usuario() {
	//DESTRUCTOR
}

void Usuario::Comprar_Tiquete() {
	// clase usuario no tan necesaria
	//este metodo puede ir en la clase contenedora o la clase principal
	//update: clase necesaria, solo que sin los metodos de compra,
	//unicamente para guardar datos de usuario como "nombre" y otra informacion
}

void Usuario::tostring_Compra() {

}

void Usuario::setNombre(string nombre) {
	this->nombre = nombre;
}

string Usuario::getNombre() {
	return nombre;
}

