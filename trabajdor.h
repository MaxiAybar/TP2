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
		virtual float calcularSueldo();
		virtual void asignarTrabajador(char tipo, string nombre, int legajo, float sueldo);
		virtual char obtenerTipo();
		virtual string obtenerNombre();
		virtual int obtenerLegajo();
		virtual float obenerSueldo();
};

#endif
