#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "trabajador.h"
#include <string>
using namespace std;

const float DESCUENTO_AUSENCIA = 0.033; //Cada dia de trabajo equivale 3,3% de su salario mensual
const int MAX_DEMORAS = 3;
const float PRESENTISMO = 1.10;

class Empleado : public Trabajador{
	private:
		int sueldo_mensual;
		int demoras;
		int ausencias;
		
	public:
		void asignarEmpleado(string nombre, int legajo, int sueldo_mensual, int demoras, int ausencias);
		void liquidarSueldo();
		virtual void mostrar();
		virtual char obtenerTipo();
		virtual string obtenerNombre();
		virtual int obtenerLegajo();
		virtual float obtenerSueldo();
};

#endif
