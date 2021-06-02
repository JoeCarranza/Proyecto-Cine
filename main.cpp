// Cine2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "Administrador.h"
#include "Cine.h"
#include <Windows.h>
#include <sstream>
#include <string>
#include "SalaContenedora.h"
#include "ContenedoraHorario.h"


int main() {

	string id = ""; string ano; string nombre = ""; string duracion = ""; string sinapsis = "";
	string password = ""; string nombre_admin = ""; string estudio_cinema = "";

	Administrador ad;
	Cine* c = new Cine();
	Pelicula* p = new Pelicula();
	SalaContenedora* s = new SalaContenedora();
	Sala* sala = new Sala();
	ContenedoraHorario* con = new ContenedoraHorario();
	Horarios* h = new Horarios();
	Pelicula* p1 = new Pelicula("s1", "2000", "Avengers", "2 horas y media", "Accion y ciencia ficcion", "MARVEL");
	Pelicula* p2 = new Pelicula("s2", "1998", "Lilo y stich", "1 horas y media", "Comedia", "Disney");
	Pelicula* p3 = new Pelicula("s3", "2014", "Son como niños", "2 horas", "Comedia y para la familia", "Warner");
	Pelicula* p4 = new Pelicula("s4", "2000", "Naruto Shipuden", "1 hora y media", "Anime, acccion", "FilmsoX");
	c->insertar_peliculas(p1);
	c->insertar_peliculas(p2);
	c->insertar_peliculas(p3);
	c->insertar_peliculas(p4);
	int opcion;



	do {
		system("cls");
		cout << "------------------Bienvenido------------------- \n"
			<< "-------------------CineMax-----------------\n"
			<< "Digite una de las siguiente opciones: \n"
			<< "1-Ingresar como Administrador. \n"
			<< "2-Ingresar como Usuario. \n"
			<< "3-Cerrar programa. \n";
		cin >> opcion;
		switch (opcion) {
		case 1: {
			system("cls");
			cout << "Bienvenido administrador, por favor digite la siguiente informacion:" << endl << endl;
			cout << "Nombre: " << endl;
			cin.ignore();
			getline(cin, nombre_admin);
			cout << "Password" << endl;
			cin >> password;

			if (ad.Ingresar(password) == 0) {
				cout << "Contraseña incorrecta, por favor intentelo de nuevo" << endl;
			}
			else if (ad.Ingresar(password) == 1) {
				int opc2;
					system("cls"); //LIMPIA LA PANTALLA
					cout << "Bienvenido/a " << nombre_admin << ", digite la opcion que desea realizar" << endl;
					cout << "1. Modulo de gestion de peliculas. \n"
						<< "2. Gestion de salas. \n"
						<< "3. Gestion de horarios. \n"
						<< "4. Salir" << endl;
					cin >> opc2;
					switch (opc2) {
					case 1: { // gestion de peliculas
						system("pause");
							system("cls");

							int opc3;
							cout << "----Modulo de Peliculas----" << endl;
							cout << "Digite la opcion que desea realizar " << endl << endl;
							cout << "1. Insertar peliculas. \n"
								<< "2. Ver peliculas disponibles \n"
								<< "3. Modificar Peliculas \n"
								<< "4. Eliminar Pelicula \n"
								<< "5. Regresar" << endl;
							cin >> opc3;

							switch (opc3) {
							case 1: {
								system("cls");

								cout << "Digite el id de la pelicula \n";
								cin.ignore();
								getline(cin, id);
								cout << "Digite el año de la pelicula \n";
								cin.ignore();
								getline(cin, ano);
								cout << "Digite el nombre de la pelicula \n";
								getline(cin, nombre);
								cout << "Duracion de la pelicula \n";
								getline(cin, duracion);
								cout << "Sinapsis de la pelicula \n";
								getline(cin, sinapsis);
								cout << "Estudio cinematografico \n";
								getline(cin, estudio_cinema);

								Pelicula* p = new Pelicula(id, ano, nombre, duracion, sinapsis, estudio_cinema);
								c->insertar_peliculas(p);

								//cout << c->toString() << endl;

								system("pause");
								break;
							}
							case 2: {

								cout << c->mostrar_peliculas_disponibles();
								system("pause");
								break;
							}
							case 3: {
								string x = "";
								system("cls");
								string id = ""; string ano; string nombre = ""; string duracion = ""; string sinapsis = "";
								string password = ""; string nombre_admin = ""; string estudio_cinema = "";

								cout << c->mostrar_peliculas_disponibles() << endl;

								cout << "Digite el id que desea modificar" << endl;
								cin >> x;

								cout << "Digite los datos de la nueva pelicula" << endl;
								cout << "Digite el id de la pelicula \n";
								cin.ignore();
								getline(cin, id);
								cout << "Digite el año de la pelicula \n";
								cin.ignore();
								getline(cin, ano);
								cout << "Digite el nombre de la pelicula \n";
								cin.ignore();
								getline(cin, nombre);
								cout << "Duracion de la pelicula \n";
								cin.ignore();
								getline(cin, duracion);
								cout << "Sinapsis de la pelicula \n";
								cin.ignore();
								getline(cin, sinapsis);
								cout << "Estudio cinematografico \n";
								cin.ignore();
								getline(cin, estudio_cinema);

								Pelicula* p = new Pelicula(id, ano, nombre, duracion, sinapsis, estudio_cinema);
								c->Modificar_Peliculas(x, p);

								system("pause");
								break;
							}
							case 4: {
								system("cls");
								string id = "";
								cout << c->mostrar_peliculas_disponibles() << endl;

								cout << "Digite el id que desea borrar" << endl;
								cin >> id;

								c->Eliminar_Peliculas(id);

								system("pause");
								break;
							}
							case 5: {
								system("cls");
								cout << "Volviendo..." << endl;
								system("pause");
								break; ////////////////// ERROR DE SALIDA

							}
							default: {
								cout << "opcion incorrecta" << endl;
								system("pause");
								break;
							}

							}//switch PELICULAS chiquito

					
						break;// del primer case 1 de switch de PELICULAS, no borrar
					}//switch PELICULAS GRANDE

					case 2: {//Gestion de salas
							system("cls");

							int opc3;
							cout << "----Modulo de Salas----" << endl;
							cout << "Digite la opcion que desea realizar " << endl << endl;
							cout << "1. Insertar Salas. \n"
								<< "2. Ver Salas disponibles \n"
								<< "3. Modificar Salas \n"
								<< "4. Eliminar Sala \n"
								<< "5. Regresar" << endl;
							cin >> opc3;

							switch (opc3) {
							case 1: {
								system("cls");
								int op = 0;
								string id = "";
								cout << "Digite el tipo de sala que desea insertar " << endl << endl;
								cout << "1. VIP. \n"
									<< "2. IMAX \n"
									<< "3. REGULAR \n"
									<< "4. 4DX \n";
								cin >> op;

								cout << "Digite el ID de la Sala \n";
								cin.ignore();
								getline(cin, id);

								Sala* sala = new Sala(id, op);
								s->agregarSala(sala);

								system("pause");
								break;
							}
							case 2: {
								system("cls");

								cout << s->mostrarSalas() << endl;

								system("pause");
								break;
							}
							case 3: {
								system("cls");

								string id = " ";
								int op = 0;

								cout << s->mostrarSalas() << endl << endl;

								cout << "Digite el id de la sala que desea modificar " << endl;
								cin >> id;

								cout << "Digite el NUEVO tipo de sala " << endl << endl;
								cout << "1. VIP. \n"
									<< "2. IMAX \n"
									<< "3. REGULAR \n"
									<< "4. 4DX \n";
								cin >> op;

								Sala* sala = new Sala(id, op);
								s->modificarSala(id, sala);
								system("pause");
								break;
							}
							case 4: {
								system("cls");
								string id = " ";
								cout << s->mostrarSalas() << endl << endl;
								cout << "Digite el id de la sala que desea eliminar " << endl;
								cin >> id;

								s->eliminarSala(id);


								system("pause");
								break;
							}
							case 5: {
								system("cls");
								cout << "Volviendo..."<<endl;
								break;

							}
							default: {
								cout << "opcion incorrecta" << endl;
								system("pause");
								break;
							}

							}//switch SALAS

						break;// del case 2 de switch de SALAS, no borrar
					}//switch SALAS

					case 3: {//gestion de horarios
						system("cls");

							int opc4 = 0;
							cout << "----Modulo de Horarios----" << endl;
							cout << "Digite la opcion que desea realizar " << endl << endl;
							cout << "1. Insertar Horarios. \n"
								<< "2. Ver Horarios disponibles \n"
								<< "3. Modificar Horario \n"
								<< "4. Eliminar Horario \n"
								<< "5. Regresar" << endl;
							cin >> opc4;

							switch (opc4) {
							case 1: {
								
								string id = ""; string fecha = ""; string hora_inicio ="";
								string id_pelicula = ""; string id_sala = "";


								cout << "Digite el ID del Horario \n";
								cin.ignore();
								getline(cin, id);
								cout << "Digite la fecha del Horario \n";
								getline(cin, fecha);
								cout << "Digite la hora de inicio \n";
								getline(cin, hora_inicio);
								

								cout << "Ahora, las peliculas a elegir para su horario son las siguientes: " << endl;

								cout << c->mostrar_peliculas_disponibles()<<endl;

								cout << "Digite el ID de la pelicula que desea agregar a su horario " << endl;
								getline(cin, id_pelicula);
								

								Pelicula* p1 = new Pelicula();
								*p1 = c->Devolver_Pelicula(id_pelicula);
								

								cout << "Las Salas Disponibles para escoger son: " << endl;
								cout << s->mostrarSalas() <<endl;

								cout << "Digite el ID de la Sala que desea agregar a su horario " << endl;	
								getline(cin, id_sala);	
								

								Sala* s1 = new Sala();
								*s1 = s->Devolver_Sala(id_sala);

								Horarios* h = new Horarios(id, fecha, hora_inicio, p1, s1);
								con->insertar_Horario(h);

								system("pause");
								break;
							}
							case 2: {
								system("cls");

								cout << con->mostrar_Horarios_disponibles() << endl;

								system("pause");
								break;
							}
							case 3: {
								system("cls");

								string id = ""; string fecha = ""; string hora_inicio ="";
								string id_pelicula = ""; string id_sala = "";

								cout << con->mostrar_Horarios_disponibles() << endl;

								cout << "Digite el id del horario que desea modificar " << endl;
								cin >> id;

								cout << "Digite la nueva fecha del Horario \n";
								cin.ignore();
								getline(cin, fecha);
								cout << "Digite la nueva hora de inicio \n";
								getline(cin, hora_inicio);

								cout << "Ahora, las peliculas a elegir para su horario son las siguientes: " << endl << endl;

								cout << c->mostrar_peliculas_disponibles();

								cout << "Digite el ID de la NUEVA pelicula que desea agregar a su horario " << endl;
								cin.ignore();
								getline(cin, id_pelicula);
								cout << endl;

								Pelicula* p1 = new Pelicula();
								*p1 = c->Devolver_Pelicula(id_pelicula);

								cout << "Las Salas Disponibles para escoger son: " << endl;
								cout << s->mostrarSalas() << endl << endl;

								cout << "Digite el nuevo ID de la Sala que desea agregar a su horario " << endl;
								cin.ignore();
								getline(cin, id_sala);
								cout << endl;

								Sala* s1 = new Sala();
								*s1 = s->Devolver_Sala(id_sala);

								Horarios* h = new Horarios(id, fecha, hora_inicio, p1, s1);
								con->Modificar_Horario(id, h);
								system("pause");
								break;
							}
							case 4: {
								system("cls");
								string id = " ";
								cout << con->mostrar_Horarios_disponibles() << endl;
								cout << "Digite el id del horario que desea eliminar " << endl;
								cin >> id;
								con->Eliminar_Horario(id);
								system("pause");
								break;
							}
							case 5: {
								system("cls");
								cout << "Volviendo..."<<endl;

								break;

							}
							default: {
								cout << "opcion incorrecta" << endl;
								system("pause");
								break;
							}

							}//switch SALAS
						break;
					}//switch horarios

					}//SWITCH ADMIN
			}
			break;
		}//case 1 grande ADMINISTRADOR-------------------------------

		//CASE 2 DE INGRESAR COMO USUARIO
		case 2: {
			system("cls");
			int x;
			cout << "Bienvenido usuario!" << endl;
			cout << "Digite 1 para ver las peliculas disponibles" << endl;
			cout << "Digite 2 para ver las salas disponibles" << endl;
			cin >> x;
			if (x==1) {
				cout << c->mostrar_peliculas_disponibles();
			}
			if (x==2) {
				cout << s->mostrarSalas() << endl;
			}


			system("pause");
			break;
		}//case 2 grande USUARIO-------------------------------
		case 3: {
			system("cls");
			cout << "Gracias por utlizar nuestro sistemas, adios ";
			system("pause");
			return 0;
		}//case 3 grande SALIR------------------------------
		default: {
			cout << "Opcion incorrecta, intente de nuevo" << endl; system("pause");
			break;
		}//default grande


		}// switch grande
		}while (opcion != 3);//for infinito grande
		delete c;
		delete p;
		delete s;
		delete sala;
		delete con;
		delete h;
		c->~Cine();
		p->~Pelicula();
		s->~SalaContenedora();
		sala->~Sala();
		con->~ContenedoraHorario();
		h->~Horarios();


		return 0;
}