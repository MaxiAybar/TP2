#include "jornalero.h"
#include "trabajador.h"
#include <iostream>
#include <string>
using namespace std;

void Jornalero::asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC){
	tipo = 3;
	this->nombre = nombre;
	this->legajo = legajo;
	this->valor_diario = atributoA;
	this->cant_dias = atributoB;
}

void Jornalero::liquidarSueldo(){
	sueldo = valor_diario * cant_dias;
}

void Jornalero::mostrar(){
	cout<< "Tipo: Jornalero"<< endl
	<< "Nombre: "<< nombre<< endl
	<< " Legajo: "<< legajo<< endl
	<< "Valor por dia: "<< valor_diario<< endl
	<< "Dias trabajados: "<< cant_dias<< endl
	<< "Sueldo a cobrar: "<< sueldo<< endl<< endl;
}

int Jornalero::obtenerLegajo(){
	return legajo;
}

int Jornalero::obtenerTipo(){
	return tipo;
}

float Jornalero::obtenerSueldo(){
	return sueldo;
}

string Jornalero::obtenerNombre(){
	return nombre;
}

Jornalero::~Jornalero(){
}
