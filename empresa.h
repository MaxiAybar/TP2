#ifndef _EMPRESA_H
#define _EMPRESA_H

#include <string>
#include <list>
#include "trabajador.h"
using namespace std;
const string NOMBRE_EMPRESA = "Carre4 SA";

class Empresa{
	private:
		list<Trabajador*> trabajadores;
	
	public:
		Empresa();
		void mostrarMenu();
		void ejecutarApp();
		void ejecutarOpcion(int opcion);
		void cargarTrabajadores();
		void buscarLegajo();
		void eliminarLegajo();
		void darAltadeTrab();
		void listarEmpleadores();
		void sueldoMax();
		void sueldoMin();
		void sumDeSueldo();
		void aCadena();
};

#endif
