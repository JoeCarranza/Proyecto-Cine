#include "Pelicula.h"
Pelicula::Pelicula() {

	id = "";
	anno = "";
	nombre = "";
	duracion = "";
	sinapsis = "";
	estudio_cinema = "";

}

Pelicula::Pelicula(string id, string anno, string nombre, string duracion, string sinapsis, string estudio_cinema) {
	this->id = id;
	this->anno = anno;
	this->nombre = nombre;
	this->duracion = duracion;
	this->sinapsis = sinapsis;
	this->estudio_cinema = estudio_cinema;
}

Pelicula::~Pelicula() {
	//DESTRUCTOR
}
//METODOS SETS Y GETS
void Pelicula::setId(string id) {
	this->id = id;
}

string Pelicula::getId() {
	return id;
}

void Pelicula::setAnno(string anno) {
	this->anno = anno;
}

string Pelicula::getAnno() {
	return anno;
}

void Pelicula::setNombre(string nombre) {
	this->nombre = nombre;
}

string Pelicula::getNombre() {
	return nombre;
}

void Pelicula::setDuracion(string duracion) {
	this->duracion = duracion;
}

string Pelicula::getDuracion() {
	return duracion;
}

void Pelicula::setSinapsis(string sinapsis) {
	this->sinapsis = sinapsis;

}

string Pelicula::getSinapsis() {
	return sinapsis;
}

void Pelicula::setEstudio_cinema(string cinema) {
	this->estudio_cinema = estudio_cinema;
}

string Pelicula::getEstudio_cinema() {
	return estudio_cinema;
}
string Pelicula::toString() {
	stringstream s;
	s << "----------Datos de la pelicula-----------" << endl << endl;
	s << "Identificacion: " << id << endl;
	s << "Anno: " << anno << endl;
	s << "Nombre: " << nombre << endl;
	s << "Duracion: " << duracion << endl;
	s << "Sinapsis: " << sinapsis << endl;
	s << "Estudio cinematografico: " << estudio_cinema << endl;
	s << "-----------------------------------------" << endl << endl;
	return s.str();
}