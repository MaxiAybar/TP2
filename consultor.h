#ifndef _CONSULTOR_H
#define _CONSULTOR_H

#include "trabajador.h"

class Consultor : public Trabajador{
	private:
		int valor_hora_catedra;
		int horas_catedras;
		int horas_a_descontar;
		
	public:
		void asignarValorHora(int valor_hora_catedra);
		void asignarHorasCatedras(int horas_catedras);
		void asignarHorasADescontar(int horas_a_descontar);
};

#endif
