#include "SalaContenedora.h"
SalaContenedora::SalaContenedora() {
	//sa = new Sala();
	tam = 8;
	can = 0;

	for (int i = 0; i < tam; i++) {
		v_Sala[i] = NULL;
	}
	cout << "Sala creada" << endl;

}

SalaContenedora::~SalaContenedora() {

	for (int i = 0; i < can; i++) {
		delete v_Sala[i];
	}
	//delete[]v_Sala;
}
void SalaContenedora::agregarSala(Sala* s) {

	if (can < tam) {
		v_Sala[can] = s;
		can++;
		cout << "Sala ingresada!" << endl;
	}

}
bool SalaContenedora::modificarSala(string id, Sala* s) {
	//bool bandera = false;

	int pos = buscar_Sala(id);

	if (pos == -1) {
		cout << "Sala no encontrada " << endl;
		return false;

	}
	else {

		for (int i = 0; i < can; i++) {
			if (v_Sala[i]->getID() == id) {
				//bandera = true;
				delete v_Sala[pos];
				v_Sala[pos] = s;
				return true;
			}
		}
		//probar eliminar for e if o cambiar condiciones

	}
}

void SalaContenedora::eliminarSala(string id) {
	bool bandera = false;

	if (v_Sala[can - 1]->getID() == id) { // si fuera el ultimo
		bandera = true;
		delete v_Sala[can - 1];
	}

	else {	// si estuviera en otra posicion

		int pos = buscar_Sala(id);

		if (pos != -1)
		{
			bandera = true;
			delete v_Sala[pos];
			//v_Sala[pos] = p;
			for (int j = pos; j < can - 1; j++)// hacemos el recorrido
			{
				v_Sala[j] = v_Sala[j + 1];
			}
		}

	}
	if (bandera == true)
	{
		v_Sala[can - 1] = NULL;
		can--;
	}
}


string SalaContenedora::mostrarSalas() {

	stringstream s;
	//llamar el id con el objeto de la clase sala: sa->getID()
	//s << "ID de la Sala: " << v_Sala[i]->getID() << endl;
	//s << "Tipo de Sala: " << getTipoSala() << endl;

	for (int i = 0; i < can; i++) {
		s << "Sala [" << i + 1 << "]" << endl << endl;
		s << "ID de la Sala: " << v_Sala[i]->getID() << endl;
		s << "Tipo de Sala: " << v_Sala[i]->getTipoSala() << endl;
		s << v_Sala[i]->toString();
		s << endl << endl;
	}
	return s.str();

}

int SalaContenedora::buscar_Sala(string id) {
	// si lo encuentra retorna la posicion en que se encuentra
	for (int i = 0; i < can; i++)
	{
		if (id == v_Sala[i]->getID())
		{
			return i;
		}
	}

	return -1; // si no lo encuentra retorna -1
}

Sala SalaContenedora::Devolver_Sala(string id) {

	Sala* aux = new Sala();

	for (int i = 0; i < can; i++) {
		if (id == v_Sala[i]->getID()) {
			aux = v_Sala[i];
		}
	}
	return *aux;

}
