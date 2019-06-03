#include "lista.h"

template <class T>
Lista<T>::Lista(){
	primer_nodo = NULL;
}

template <class T>
bool Lista<T>::agregarObjeto(T	*obj){
	primer_nodo = new Nodo<T>(obj, primer_nodo);
	return true;
}

template <class T>
Iterador<T>* Lista<T>::obtenerIterador(){
	return new Iterador<T>(primer_nodo);
}

template <class T>
Lista<T>::~Lista(){
	Nodo<T>* pivot = primer_nodo;
	Nodo<T>* aux;
	while(pivot != NULL){
		aux = pivot.obtenerSiguiente();
		delete pivot;
		pivot = aux;
	}
	primer_nodo = NULL;
}
