#include "jornalero.h"
#include "trabjaador.h"
using namespace std;

void asginarTrabajador(string nombre, int legajo, int atributoA, int atributoB, int atributoC = 0){
	tipo = 'J';
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
	<< "N� Legajo: "<< legajo<< endl
	<< "Valor por dia: "<< valor_diario<< endl
	<< "Dias trabajados: "<< cant_dias<< endl
	<< "Sueldo a cobrar: "<< sueldo<< endl<< endl;
}
