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
		void asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC = 0);
		void liquidarSueldo();
		void mostrar();
		int obtenerLegajo();
};

#endif
