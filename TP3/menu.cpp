#include "menu.h"
#include "nodo.h"
#include "iterador.h"
#include "pelicula.h"
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

void Menu::cargarPeliculasVistas(){
	ifstream txt("peliculas_vistas.txt");

	while(!txt.eof()){
		Pelicula aux;
		char buffer = 0;
		string buffer_s = 0;

		while(buffer != '\n'){
			txt.get(buffer);
			buffer_s += buffer;
			aux.asignarNombre(buffer_s);
		} buffer_s.clear();

		while(buffer != '\n'){
			txt.get(buffer);
			buffer_s += buffer;
			aux.asignarGenero(buffer_s);
		} buffer_s.clear();

		while(buffer != '\n'){
			txt.get(buffer);
			buffer_s += buffer;
			aux.asignarValoracion(atoi(buffer_s.c_str()));
		} buffer_s.clear();

		while(buffer != '\n'){

		}
	}
}
