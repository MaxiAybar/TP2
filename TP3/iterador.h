#ifndef _ITERADOR_H
#define _ITERADOR_H

#include "nodo.h"

template <class T>
class Iterador{
	private:
		Nodo<T> *cursor;
	
	public:
		//Constructor
		Iterador(Nodo<T> *obj);
		/*
		* Comprueba si hay mas elementos en la lista
		* PRE: ---
		* POST: Devuelve false si el objeto que apunta el iterador esta vacio, caso contrario devuelve true
		*/
		bool masElementos();
		/*
		* Devuelve el objeto al que apunta el iterador
		* PRE: ---
		* POST: Devuelve el objeto al que apunta el iterador
		*/
		T* obtenerObjeto();
};



#endif
