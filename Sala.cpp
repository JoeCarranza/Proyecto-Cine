#include "Sala.h"
Sala::Sala() {
	//	fil = 0;
	//	col = 0;
	m = new string * [fil];

	for (int i = 0; i < fil; i++) {
		m[i] = new string[col];
	}

	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			//estado = 'D';
			// m[i][j].setEstado(estado); // revisar
			m[i][j] = "0";
		}
	}

}

Sala::Sala(string id, int opc) {

	fil = 0; col = 0;


	if (opc == 1) {

		this->fil = 6;
		this->col = 10;
		this->tipoSala = "VIP";
		this->id = id;

		m = new string * [fil];

		for (int i = 0; i < fil; i++) {
			m[i] = new string[col];
		}

		for (int i = 0; i < fil; i++) {
			for (int j = 0; j < col; j++) {
				m[i][j] = "0";
			}
		}
	}

	if (opc == 2) {
		this->fil = 6;
		this->col = 30;
		this->tipoSala = "IMAX";
		this->id = id;

		m = new string * [fil];

		for (int i = 0; i < fil; i++) {
			m[i] = new string[col];
		}

		for (int i = 0; i < fil; i++) {
			for (int j = 0; j < col; j++) {
				m[i][j] = "0";
			}
		}
	}

	if (opc == 3) {
		this->fil = 10;
		this->col = 30;
		this->tipoSala = "REGULAR";
		this->id = id;

		m = new string * [fil];

		for (int i = 0; i < fil; i++) {
			m[i] = new string[col];
		}

		for (int i = 0; i < fil; i++) {
			for (int j = 0; j < col; j++) {
				m[i][j] = "0";
			}
		}
	}

	if (opc == 4) {
		this->fil = 6;
		this->col = 20;
		this->tipoSala = "4DX";
		this->id = id;

		m = new string * [fil];

		for (int i = 0; i < fil; i++) {
			m[i] = new string[col];
		}

		for (int i = 0; i < fil; i++) {
			for (int j = 0; j < col; j++) {
				m[i][j] = "0";
			}
		}
	}
}

Sala::~Sala() {
	for (int i = 0; i < fil; i++) {
		delete[] m[i];
	}
	delete[] m;
}

void Sala::setID(string id) {
	this->id = id;
}

void Sala::setTipoSala(string tipoSala) {
	this->tipoSala = tipoSala;
}

//void Sala::setEstado (char estado) {
//	this->estado = estado;
//}

string Sala::getID() {
	return id;
}

string Sala::getTipoSala() {
	return tipoSala;
}

//char Sala::getEstado ( ) {
//	return estado;
//}

string Sala::toString() {

	stringstream s;

	s << endl;
	s << "ID: " << getID() << endl;
	s << "Tipo de Sala: " << getTipoSala() << endl;
	s << "Asientos de la matriz: " <<endl;

	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < col; j++) {
			s << m[i][j] << "  ";
		}
		
	}

	return s.str();
}
