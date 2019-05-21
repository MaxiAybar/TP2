#include "consultor.h"
#include "trabajador.h"
#include <iostream>
#include <string>
using namespace std;

void Consultor::asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC){
	tipo = 2;
	this->nombre = nombre;
	this->legajo = legajo;
	this->valor_hora_catedra = atributoA;
	this->horas_catedras = atributoB;
	this->horas_incumplidas = atributoC;
}

void Consultor::liquidarSueldo(){
	sueldo = valor_hora_catedra * (horas_catedras * 4 - horas_incumplidas) / 4;
}

void Consultor::mostrar(){
	cout<< "Tipo: Consultor"<< endl
	<< "Nombre: "<< nombre<< endl
	<< " Legajo: "<< legajo<< endl
	<< "Salario por hora catedra: "<< valor_hora_catedra<< endl
	<< "Horas catedras a cargo: "<< horas_catedras<< endl
	<< "Horas sin cumplir: "<< horas_incumplidas<< endl
	<< "Sueldo a cobrar: "<< sueldo<< endl<< endl;
}

int Consultor::obtenerLegajo(){
	return legajo;
}

int Consultor::obtenerTipo(){
	return tipo;
}

Consultor::~Consultor(){
}
