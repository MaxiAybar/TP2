#include "iterador.h"
#include "nodo.h"
#include <iostream>

template <class T>
Iterador<T>::Iterador(Nodo<T>* obj){
	cursor = obj;
}

template <class T>
bool Iterador<T>::masElementos(){
	return (cursor != NULL);
}

template <class T>
T* Iterador<T>::obtenerObjeto(){
	T* aux;
	if(masElementos()){
		aux = cursor.obtenerObjeto();
		cursor = cursor.obtenerSiguiente();
		return aux;
	}
	return NULL;
}
