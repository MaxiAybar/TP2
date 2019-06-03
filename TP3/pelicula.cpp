#include "pelicula.h"
#include <string>
using namespace std;

void Pelicula::asignarPelicula(string nombre, string genero, int valoracion, string director, string* reparto){
	this->nombre = nombre;
	this->genero = genero;
	this->valoracion = valoracion;
	this->director = director;
	
	for(int i = 0; i < (*reparto).size(); i++){
		this->reparto[i] = reparto[i];
	}
}

string Pelicula::obtenerNombre(){
	return nombre;
}

string Pelicula::obtenerGenero(){
	return genero;
}

int Pelicula::obtenerValoracion(){
	return valoracion;
}

string Pelicula::obtenerDirector(){
	return director;
}

string Pelicula::obtenerReparto(){
	return *reparto;
}

Pelicula::~Pelicula(){
	delete [] reparto;
}
