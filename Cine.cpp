#include "Cine.h"
Cine::Cine() {
	tam = 30;
	can = 0;
	//	cout << "Digite el tamaño del vector" << endl;
	//	cin >> tam;

	// declararlo con tam fijo de 30;

	//vector = new Pelicula * [tam];

	for (int i = 0; i < tam; i++) {
		vector[i] = NULL;
	}
	cout << "Cine creado" << endl;
}
Cine::~Cine() {

	for (int i = 0; i < can; i++) {
		delete vector[i];
	}
	//delete[]vector;

}

bool Cine::Modificar_Peliculas(string x, Pelicula* p) {
	//llamar al buscar_Pelicula() 

	//tambien buscar como hacerlo para modificar algo en especifico, con un switch, por ejemplo:
	//digite la opcion que desea realizar:
	//1- Nombre 2- Id 3- Sinapsis 4- Todo... etc.

	bool bandera = false;

	int pos = buscar_Pelicula(x);

	if (pos == -1) {
		cout << "Pelicula no encontrada " << endl;
		return false;
	}
	else {

		for (int i = 0; i < can; i++) {
			if (vector[i]->getId() == x) {
				//bandera = true;
				delete vector[pos];
				vector[pos] = p;
				return true;
			}
		}
		//probar eliminar for e if o cambiar condiciones

	}

}

void Cine::insertar_peliculas(Pelicula* p)
{
	if (can < tam) {
		vector[can] = p;
		can++;
		cout << "Pelicula ingresada!" << endl;
	}

}

int Cine::buscar_Pelicula(string id) {

	// si lo encuentra retorna la posicion en que se encuentra
	for (int i = 0; i < can; i++)
	{
		if (id == vector[i]->getId())
		{
			return i;
		}
	}

	return -1; // si no lo encuentra retorna -1

}


void Cine::Eliminar_Peliculas(string id) {

	bool bandera = false;

	if (vector[can - 1]->getId() == id) { // si fuera el ultimo
		bandera = true;
		delete vector[can - 1];
		//vector[can-1] = p;
	}

	else {	// si estuviera en otra posicion

		int pos = buscar_Pelicula(id);

		if (pos != -1)
		{
			bandera = true;
			delete vector[pos];
			//vector[pos] = p;
			for (int j = pos; j < can - 1; j++)// hacemos el recorrido
			{
				vector[j] = vector[j + 1];
			}
		}

	}
	if (bandera == true)
	{
		vector[can - 1] = NULL;
		can--;
	}

}
void Cine::setTam(int tam)
{
	this->tam = tam;
}
int Cine::getTam()
{
	return tam;
}
void Cine::setCan(int can)
{
	this->can = can;
}
int Cine::getCan()
{
	return can;

}


Pelicula Cine::Devolver_Pelicula(string id) {

	Pelicula* aux = new Pelicula();

	for (int i = 0; i < can; i++) {
		if (id == vector[i]->getId()) {
			aux = vector[i];
		}
	}
	return *aux;

}

//variable Pelicula de la clase horario en el main: Pelicula *p = c->DevolverPelicula(); Luego se inserta junto con las demas variables

string Cine::mostrar_peliculas_disponibles() {

	stringstream x;
	x << endl;

	for (int i = 0; i < can; i++) {
		x << "----------------------------------" << endl;
		x << "Pelicula [" << i + 1 << "] :" << endl;
		x << "ID: " << vector[i]->getId() << endl;
		x << "Anno: " << vector[i]->getAnno() << endl;
		x << "Nombre: " << vector[i]->getNombre() << endl;
		x << "Duracion: " << vector[i]->getDuracion() << endl;
		x << "Sinapsis: " << vector[i]->getSinapsis() << endl;
		x << "Estudio: " << vector[i]->getEstudio_cinema() << endl;
		x << "----------------------------------" << endl;
	}
	x << endl;
	return x.str();
}