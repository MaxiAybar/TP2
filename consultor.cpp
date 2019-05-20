#include "consultor.h"
#include "trabajador.h"

void Consultor::asignarConsultor(string nombre, int legajo, int valor_hora_catedra, int horas_catedras, int horas_incumplidas){
	tipo = 'C';
	this->nombre = nombre;
	this->legajo = legajo;
	this->valor_hora_catedra = valor_hora_catedra;
	this->horas_catedras = horas_catedras;
	this->horas_incumplidas = horas_incumplidas;
}

void Consultor::liquidarSueldo(){
	sueldo = valor_hora_catedra * (horas_catedras * 4 - horas_incumplidas) / 4;
}

void Jornalero::mostrar(){
	cout<< "Tipo: "<< tipo<< endl
	<< "Nombre: "<< nombre<< endl
	<< "N° Legajo: "<< legajo<< endl
	<< "Salario por hora catedra: "<< valor_hora_catedra<< endl
	<< "Horas catedras a cargo: "<< horas catedras<< endl
	<< "Horas sin cumplir: "<< horas incumplidas<< endl
	<< "Sueldo a cobrar: "<< sueldo<< endl<< endl;
}
