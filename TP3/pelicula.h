#ifndef _PELICULAS_H
#define _PELICULAS_H

#include <string>
using namespace std;

class Pelicula{
	private:
		string nombre;
		string genero;
		int valoracion;
		string director;
		string* reparto;
		
	public:
		//Setters
		void asignarPelicula(string nombre, string genero, int valoracion, string director, string* reparto);
		
		//Getters
		string obtenerNombre();
		string obtenerGenero();
		int obtenerValoracion();
		string obtenerDirector();
		string obtenerReparto();
		
		//Destructor
		~Pelicula();
};

#endif
