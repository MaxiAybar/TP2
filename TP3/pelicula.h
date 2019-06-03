#ifndef _PELICULAS_H_INCLUDED
#define _PELICULAS_H_INCLUDED

#include <string>
#include "lista.h"
using namespace std;

class Pelicula{
	private:
		string nombre;
		string genero;
		int valoracion;
		string director;
		Lista<string> *reparto;

	public:
		//Setters
		void asignarNombre(string nombre);
		void asignarGenero(string genero);
		void asignarValoracion(int valoracion);
		void asignarDirector(string director);
		void asignarActor(string *actor);
		//Getters
		string obtenerNombre();
		string obtenerGenero();
		int obtenerValoracion();
		string obtenerDirector();
		/*
		* Devuelve un string con los datos del objeto
		* PRE: ---
		* POST: Devuelve un string con los datos del objeto
		*/
		string aCadena();
		//Destructor
		~Pelicula();
};

#endif
