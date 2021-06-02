
#include "Horarios.h"

Horarios::Horarios() {
	id = "";
	fecha = "";
	horaInicio ="";
	s = new SalaContenedora();
	p = new Pelicula();
	sa = new Sala();

}

Horarios::Horarios(string id, string fecha, string horaInicio, Pelicula* p, Sala* sa) {
	this->id = id;
	this->fecha = fecha;
	this->horaInicio = horaInicio;
	this->p = p;
	this->sa = sa;

}
Horarios::~Horarios() {
	delete p;
	delete sa;
}

void Horarios::setId(string id) {
	this->id = id;
}

void Horarios::setFecha(string fecha) {
	this->fecha = fecha;
}


void Horarios::setHoraInicio(string horaInicio) {
	this->horaInicio = horaInicio;
}


void Horarios::setSalaContenedora(SalaContenedora* s) {
	this->s = s;
}

string Horarios::getId() {
	return id;
}

string Horarios::getFecha() {
	return fecha;
}


string Horarios::getHoraInicio() {
	return horaInicio;
}


SalaContenedora* Horarios::getSalaContenedora() {

	return s;
}


void Horarios::mostrarInfoHorarios() {
	// Deberá contar con un método que despliegue la información del horario,
	//que consiste en una lista que tendrá un encabezado con la información del horario:
	//la película, sala, horario, además del nombre de las personas que han comprado boletos en ese horario, incluyendo: 
	//nombre, identificación y número de asiento asignado.

	//vector en la clase usuario

}


//RecibirComprador(Usuario *u){ 
//	string usuarios = "";
//	
//	usuarios += u->getNombre() + " , ";
//}


void Horarios::setPelicula(Pelicula* p) {
	this->p = p;
}

void Horarios::setSala(Sala* sa) {
	this->sa = sa;
}

Pelicula* Horarios::getPelicula() {
	return p;
}

Sala* Horarios::getSala() {
	return sa;
}