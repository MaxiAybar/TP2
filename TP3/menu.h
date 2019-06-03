#ifndef _MENU_H_INCLUDED
#define _MENU_H_INCLUDED

#include "nodo.h"
#include "iterador.h"
#include "lista.h"
#include "pelicula.h"

class Menu{
	private:
		Lista<Pelicula>* peliculas_vistas;
		Lista<Pelicula>* peliculas_no_vistas;
		Lista<Pelicula>* peliculas_recomendadas;

	public:
		/*
		* Carga la lista de peliculas vistas
		* PRE: Requiere el archivo peliculas_vistas.txt este creado y sea valido
		* POST: La lista esta cargada
		*/
		void cargarPeliculasVistas();
		/*
		* Carga la lista de peliculas no vistas
		* PRE: Requiere el archivo peliculas_no_vistas.txt este creado y sea valido
		* POST: La lista esta cargada
		*/
		void cargarPeliculasNoVistas();
		void cargarPeliculasRecomendadas();
		void ejecutarMenu();
};

#endif
