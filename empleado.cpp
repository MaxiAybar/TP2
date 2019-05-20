#inlcude "empleado.h"
#inlcude "trabajador.h"
#include <string>
#include <iostream>

void Empleado::asignarEmpleado(string nombre, int legajo, int sueldo_mensual, int demoras, int ausencias){
	tipo = 'E';
	this->nombre = nombre;
	this->legajo = legajo;
	this->sueldo_mensual = sueldo_mensual;
	this->demoras = demoras;
	this->ausencias = ausencias;
}

void Empleado::liquidarSueldo(){
	sueldo = sueldo_mensual
	
	if(ausencias == 0){
		if(demoras <= MAX_DEMORAS){
			sueldo *= PRESENTISMO;
		}
	}
	else{
		sueldo -= sueldo * DESCUENTO_AUSENCIA * ausencias;
	}
}

void Empleado::mostrar(){
	cout<< "Tipo: "<< tipo<< endl
	<< "Nombre: "<< nombre<< endl
	<< "N° Legajo: "<< legajo<< endl
	<< "Sueldo mensual: "<< sueldo_mensual<< endl
	<< "Demoras: "<< demoras<< endl
	<< "Ausencias: "<< ausencias<< endl
	<< "Sueldo a cobrar: "<< sueldo<< endl<< endl;
}
