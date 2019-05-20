#ifndef _TRABAJADOR_H
#define _TRABAJADOR_H

#include <string>
using namespace std;

class Trabajador{
	protected:
		char tipo;
		std::string nombre;
		int legajo;
		float sueldo;

	public:
		virtual void liquidarSueldo();
		virtual void asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC = 0);
		virtual void mostrar();
		virtual char obtenerTipo();
		virtual string obtenerNombre();
		virtual int obtenerLegajo();
		virtual float obtenerSueldo();
};

#endif
