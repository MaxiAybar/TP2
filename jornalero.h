#ifndef _JORNALERO_H
#define _JORNALERO_H

#include "trabajador.h"
#include <string>
using namespace std;

class Jornalero : public Trabajador{
	private:
		int valor_diario;
		int cant_dias;
	
	public:
		void asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC = 0);
		void liquidarSueldo();
		void mostrar();
		int obtenerLegajo();
		int obtenerTipo();
		float obtenerSueldo();
		string obtenerNombre();
		~Jornalero();
};

#endif
