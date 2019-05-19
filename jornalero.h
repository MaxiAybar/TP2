#ifndef _JORNALERO_H
#define _JORNALERO_H

#include "trabajador.h"

class Jornalero : public Trabajador{
	private:
		int valor_diario;
		int cant_dias;
	
	public:
		void asignarValorDiario(int valor_diario);
		void asignarCantDias(int cant_dias);
};

#endif