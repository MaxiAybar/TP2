#include "lista.h"
#include "nodo.h"
#include "iterador.h"
#include <iostream>

template <class T>
Lista<T>::Lista(){
	primer_nodo = NULL;
}

template <class T>
bool Lista<T>::agregarObjeto(T*	obj){
	primer_nodo = new Nodo<T>(obj, primer_nodo);
	return true; 
}

template <class T>
Iterador<T> *Lista<T>::obtenerIterador(){
	return new Iterador<T>(primer_nodo);
}

template <class T>
Lista<T>::~Lista(){
	
}
