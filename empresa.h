#ifndef _EMPRESA_H
#deifne _EMPRESA_H

#include <string>
#include <list>
#include 'trabajador.h'
const string NOMBRE_EMPRESA = "Carre4 SA";

class Empresa{
	private:
		List <Trabajador> trabajadores;
	
	public:
		Empresa();
		cargarTrabajadores();
		existeLegajo();
		eliminarLegajo();
		darAltadeTrab();
		listarEmpleadores();
		sueldoMax();
		sueldoMin();
		sumDeSueldo();
		aCadena();
		terminarApp();
		~Empresa();
};

#endif
