#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "trabajador.h"

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
