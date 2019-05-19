#ifndef _EMPRESA_H
#deifne _EMPRESA_H

#include <string>
#include <list>
#include "trabajador.h"
const string NOMBRE_EMPRESA = "Carre4 SA";

class Empresa{
	private:
		List<Trabajador> trabajadores;
	
	public:
		Empresa();
		void mostrarMenu();
		void ejecutarApp();
		void cargarTrabajadores();
		void mostrarTrabajador(Trabajador);
		Trabajador existeLegajo();
		void eliminarLegajo();
		void darAltadeTrab();
		Trabajador listarEmpleadores();
		Trabajador sueldoMax();
		Trabajador sueldoMin();
		void sumDeSueldo();
		void aCadena();
		void terminarApp();
		~Empresa();
};

#endif
