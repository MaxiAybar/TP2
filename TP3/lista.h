#ifndef _LISTA_H
#define _LISTA_H

#include "nodo.h"
#include "iterador.h"

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
		virtual ~Lista();
};



#endif
