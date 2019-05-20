#ifndef _TRABAJADOR_H
#define _TRABAJADOR_H

#include <string>
using namespace std;

class Trabajador{
	protected:
		string nombre;
		int legajo;
		float sueldo;

	public:
		virtual void liquidarSueldo() = 0;
		virtual void asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC) = 0;
		virtual void mostrar() = 0;
		virtual int obtenerLegajo() = 0;
		virtual ~Trabajador() {};
};

#endif
