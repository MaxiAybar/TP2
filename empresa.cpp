#include "empresa.h"
#include "trabajador.h"
#include <string>
#include <iostream>
#include <fstream>

Empresa::Empresa(){
	cout<< "Administracion "<< NOMBRE_EMPRESA<< endl<< endl;
	cargar_trabajadores();
}

void Empresa::cargarTrabajadores(){
	ifstream txt("trabajadores.txt");
	
}
