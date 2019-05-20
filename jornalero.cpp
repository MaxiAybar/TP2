#include "jornalero.h"
#include "trabjaador.h"
using namespace std;

void asignarJornalero(string nombre, int legajo, int valor_diario, int cant_dias){
	tipo = 'J';
	this->nombre = nombre;
	this->legajo = legajo;
	this->valor_diario = valor_diario;
	this->cant_dias = cant_dias
}

void Jornalero::liquidarSueldo(){
	sueldo = valor_diario * cant_dias;
}

void Jornalero::mostrar(){
	cout<< "Tipo: Jornalero"<< endl
	<< "Nombre: "<< nombre<< endl
	<< "N° Legajo: "<< legajo<< endl
	<< "Valor por dia: "<< valor_diario<< endl
	<< "Dias trabajados: "<< cant_dias<< endl
	<< "Sueldo a cobrar: "<< sueldo<< endl<< endl;
}
