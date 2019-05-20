#ifndef _TRABAJADOR_H
#define _TRABAJADOR_H

#include <string>

class Trabajador{
	protected:
		char tipo;
		string nombre;
		int legajo;
		float sueldo;

	public:
		virtual float liquidarSueldo();
		virtual void mostrar();
		virtual char obtenerTipo();
		virtual string obtenerNombre();
		virtual int obtenerLegajo();
		virtual float obtenerSueldo();
};

#endif
