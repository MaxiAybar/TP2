#include "nodo.h"

template <class T>
Nodo<T>::Nodo(T* obj, Nodo<T>* sig){
	objeto = obj;
	siguiente = sig;
}

template <class T>
void Nodo<T>::asignarObjeto(T* obj){
	objeto = obj;
}

template <class T>
void Nodo<T>::asignarSiguiente(Nodo<T>* sig){
	siguiente = sig;
}

template <class T>
T *Nodo<T>::obtenerObjeto() const{
	return objeto;
}

template <class T>
Nodo<T> *Nodo<T>::obtenerSiguiente() const{
	return siguiente;
}

template <class T>
Nodo<T>::~Nodo(){
}
