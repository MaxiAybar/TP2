#include "pelicula.h"
#include <string>
using namespace std;

void Pelicula::asignarNombre(string nombre){
	this->nombre = nombre;
}

void Pelicula::asignarGenero(string genero){
	this->genero = genero;
}

void Pelicula::asignarValoracion(int valoracion){
	this->valoracion = valoracion;
}

void Pelicula::asignarDirector(string director){
	this->director = director;
}

void Pelicula::asignarActor(string *actor){

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

Pelicula::~Pelicula(){
}
