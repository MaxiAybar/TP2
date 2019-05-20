#include "empresa.h"
#include "trabajador.h"
#include "empleado.h"
#include "jornalero.h"
#include "consultor.h"
#include <string>
#include <iostream>
#include <fstream>
#include <list>
using namespace std;

Empresa::Empresa(){
	cout<< "Administracion "<< NOMBRE_EMPRESA<< endl<< endl;
	cargarTrabajadores();
}

void Empresa::cargarTrabajadores(){
	ifstream txt("trabajadores.txt");
	string nombre;
	int legajo;
	
	while(!txt.eof()){
		char tipo;
		txt>> tipo;
		if(tipo == 'E'){
			Trabajador *aux = new Empleado;
			int sueldo_mensual;
			int demoras;
			int ausencias;
			txt>> legajo>> nombre>> sueldo_mensual>> demoras>> ausencias;
			(*aux).asignarTrabajador(nombre, legajo, sueldo_mensual, demoras, ausencias);
			(*aux).liquidarSueldo();
			trabajadores.push_back(aux);
			delete aux;
		}
		else if(tipo == 'J'){
			Trabajador *aux = new Jornalero;
			int valor_diario;
			int cant_dias;
			txt>> legajo>> nombre>> valor_diario>> cant_dias;
			(*aux).asignarTrabajador(nombre, legajo, valor_diario, cant_dias, 0);
			(*aux).liquidarSueldo();
			trabajadores.push_back(aux);
			delete aux;
		}
		else if(tipo == 'C'){
			Trabajador *aux = new Consultor;
			int valor_hora_catedra;
			int horas_catedras;
			int horas_incumplidas;
			txt>> legajo>> nombre>> valor_hora_catedra>> horas_catedras>> horas_incumplidas;
			(*aux).asignarTrabajador(nombre, legajo, valor_hora_catedra, horas_catedras, horas_incumplidas);
			(*aux).liquidarSueldo();
			trabajadores.push_back(aux);
			delete aux;
		}
	}
	txt.close();
}

void Empresa::mostrarMenu(){
	cout<< "1. Consultar legajo"<< endl
	<< "2. Dar de baja un legajo"<< endl
	<< "3. Dar de alta un trabjador"<< endl
	<< "4. Listar trabajadores"<< endl
	<< "5. Sueldo max"<< endl
	<< "6. Sueldo min"<< endl
	<< "7. Total de sueldos a liquidar"<< endl
	<< "8. Actualizar"<< endl
	<< "0. Salir"<< endl<< endl;
}

void Empresa::ejecutarApp(){
	int opcion = -1;
	while(opcion != 0){
		mostrarMenu();
		cin>> opcion;
		ejecutarOpcion(opcion);
	}
}

void Empresa::ejecutarOpcion(int opcion){
	switch(opcion){
		case 0:
			break;
			
		case 1:
			buscarLegajo();
			break;
			
		default:
			cout<< "Opcion no valida"<< endl<< endl;
			cin.get();	
	}
}

void Empresa::buscarLegajo(){
	int legajo;
	cout<< "Ingrese  Legajo a buscar: ";
	cin>> legajo;
	list<Trabajador*>::iterator it = trabajadores.begin();
	for(; it != trabajadores.end(); it++){
		if((**it).obtenerLegajo() == legajo){
			(**it).mostrar();
		}
	}
}
