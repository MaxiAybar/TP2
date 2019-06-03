#ifndef _LISTA_H_INCLUDED
#define _LISTA_H_INCLUDED

#include "nodo.h"
#include "iterador.h"
#include <string>

template <class T>
class Lista{
	private:
		Nodo<T> *primer_nodo;

	public:
		//Constructor
		Lista();
		/*
		* Agrega un objeto a la lista
		* PRE: Requiere un objeto valido
		* POST: Agrega un objeto a la lista
		*/
		bool agregarObjeto(T* obj);
		//Getters
		Iterador<T> *obtenerIterador();
		//Destructor
        ~Lista();
};

#endif
