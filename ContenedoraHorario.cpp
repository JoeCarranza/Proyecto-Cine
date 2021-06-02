#include "ContenedoraHorario.h"
ContenedoraHorario::ContenedoraHorario() {
	tam = 30;
	can = 0;

	for (int i = 0; i < tam; i++) {
		v_Horarios[i] = NULL;
	}
	cout << "Horario creado" << endl;

}


ContenedoraHorario::~ContenedoraHorario() {

	for (int i = 0; i < can; i++) {
		delete v_Horarios[i];
	}

}


void ContenedoraHorario::insertar_Horario(Horarios* h) {
	if (can < tam) {
		v_Horarios[can] = h;
		can++;
		cout << "Horario ingresada!" << endl;
	}
}

string ContenedoraHorario::mostrar_Horarios_disponibles() {

	stringstream s;

	for (int i = 0; i < can; i++) {

		s << "ID del Horario: " << v_Horarios[i]->getId() << endl;
		s << "Fecha del Horario: " << v_Horarios[i]->getFecha() << endl;
		s << "Hora de Inicio: " << v_Horarios[i]->getHoraInicio() << endl;

		s << "Pelicula asignada: " << v_Horarios[i]->getPelicula()->toString() << endl;
		s << "Sala asignada: " << v_Horarios[i]->getSala()->toString() << endl;
		//s << v_Horarios[i]->toString();
	}
	return s.str();
}

int ContenedoraHorario::buscar_Horario(string id) {

	for (int i = 0; i < can; i++)
	{
		if (id == v_Horarios[i]->getId())
		{
			return i;
		}
	}

	return -1;
}

bool ContenedoraHorario::Modificar_Horario(string x, Horarios* h) {

	int pos = buscar_Horario(x);

	if (pos == -1) {
		cout << "Horario no encontrado " << endl;
		return false;

	}
	else {

		for (int i = 0; i < can; i++) {
			if (v_Horarios[i]->getId() == x) {
				//bandera = true;
				delete v_Horarios[pos];
				v_Horarios[pos] = h;
				return true;
			}
		}
		//probar eliminar for e if o cambiar condiciones

	}

}

void ContenedoraHorario::Eliminar_Horario(string id) {

	bool bandera = false;

	if (v_Horarios[can - 1]->getId() == id) { // si fuera el ultimo
		bandera = true;
		delete v_Horarios[can - 1];
	}

	else {	// si estuviera en otra posicion

		int pos = buscar_Horario(id);

		if (pos != -1)
		{
			bandera = true;
			delete v_Horarios[pos];
			//v_Sala[pos] = p;
			for (int j = pos; j < can - 1; j++)// hacemos el recorrido
			{
				v_Horarios[j] = v_Horarios[j + 1];
			}
		}

	}
	if (bandera == true)
	{
		v_Horarios[can - 1] = NULL;
		can--;
	}

}