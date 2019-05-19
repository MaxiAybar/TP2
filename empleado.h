#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "trabajador.h"

const float DESCUENTO_AUSENCIA = 0.33;
const int LLEGADAS_TARDE_MAX = 3;
const float PRESENTISMO = 1.10;

class Empleado : public Trabajador{
	private:
		int sueldo_mensual;
		int llegadas_tarde;
		int ausencias;
		
	public:
		void asignarSueldoMensual(int sueldo_mensual);
		void asignarLlegadasTarde(int llegadas_tarde);
		void asignarAusencias(int ausencias);
		/*int obtenerSueldoMensual();
		int obtenerLlegadasTarde();
		int obtenerAusencias();*/
};

#endif
