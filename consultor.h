#ifndef _CONSULTOR_H
#define _CONSULTOR_H

#include "trabajador.h"
#include <string>
using namespace std;

class Consultor : public Trabajador{
	private:
		int valor_hora_catedra;
		int horas_catedras;
		int horas_incumplidas;
		
	public:
		void asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC = 0);
		void liquidarSueldo();
		void mostrar();
		char obtenerTipo();
		string obtenerNombre();
		int obtenerLegajo();
		float obtenerSueldo();
};

#endif
