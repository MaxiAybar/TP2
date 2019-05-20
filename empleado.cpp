#include "empleado.h"
#include "trabajador.h"
#include <string>
#include <iostream>
using namespace std;

void Empleado::asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC = 0){
	tipo = 'E';
	this->nombre = nombre;
	this->legajo = legajo;
	this->sueldo_mensual = atributoA;
	this->demoras = atributoB;
	this->ausencias = atributoC;
}

void Empleado::liquidarSueldo(){
	sueldo = sueldo_mensual;
	
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
	cout<< "Tipo: Empleado"<< endl
	<< "Nombre: "<< nombre<< endl
	<< "N° Legajo: "<< legajo<< endl
	<< "Sueldo mensual: "<< sueldo_mensual<< endl
	<< "Demoras: "<< demoras<< endl
	<< "Ausencias: "<< ausencias<< endl
	<< "Sueldo a cobrar: "<< sueldo<< endl<< endl;
}

int Empleado::obtenerLegajo(){
	return legajo;
}
