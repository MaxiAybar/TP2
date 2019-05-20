#include "consultor.h"
#include "trabajador.h"
using namespace std;

void Consultor::asignarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC = 0){
	tipo = 'C';
	this->nombre = nombre;
	this->legajo = legajo;
	this->valor_hora_catedra = atributoA;
	this->horas_catedras = atributoB;
	this->horas_incumplidas = atributoC;
}

void Consultor::liquidarSueldo(){
	sueldo = valor_hora_catedra * (horas_catedras * 4 - horas_incumplidas) / 4;
}

void Jornalero::mostrar(){
	cout<< "Tipo: Consultor"<< endl
	<< "Nombre: "<< nombre<< endl
	<< "N° Legajo: "<< legajo<< endl
	<< "Salario por hora catedra: "<< valor_hora_catedra<< endl
	<< "Horas catedras a cargo: "<< horas catedras<< endl
	<< "Horas sin cumplir: "<< horas incumplidas<< endl
	<< "Sueldo a cobrar: "<< sueldo<< endl<< endl;
}
