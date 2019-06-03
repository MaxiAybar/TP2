#ifndef _NODO_H_INCLUDED
#define _NODO_H_INCLUDED

template <class T>
class Nodo{
	private:
		T* objeto;
		Nodo<T> *siguiente;

	public:
		//Constructor
		Nodo(T* obj, Nodo<T> *sig);
		//Setters
		virtual void asignarObjeto(T* obj);
		virtual void asignarSiguiente(Nodo<T> *sig);
		//Getters
		virtual T *obtenerObjeto() const;
		virtual Nodo<T> *obtenerSiguiente() const;
		//Destructor
		virtual ~Nodo();
};



#endif
