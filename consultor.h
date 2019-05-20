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
		void asignarConsultor(string nombre, int legajo, int valor_hora_catedra, int horas_catedras, int horas_incumplidas);
};

#endif
