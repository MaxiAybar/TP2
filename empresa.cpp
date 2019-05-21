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
			Trabajador *laburador = new Empleado;
			int sueldo_mensual;
			int demoras;
			int ausencias;
			txt>> legajo>> nombre>> sueldo_mensual>> demoras>> ausencias;
			(*laburador).asignarTrabajador(nombre, legajo, sueldo_mensual, demoras, ausencias);
			(*laburador).liquidarSueldo();
			trabajadores.push_back(laburador);
		}
		else if(tipo == 'J'){
			Trabajador *laburador = new Jornalero;
			int valor_diario;
			int cant_dias;
			txt>> legajo>> nombre>> valor_diario>> cant_dias;
			(*laburador).asignarTrabajador(nombre, legajo, valor_diario, cant_dias, 0);
			(*laburador).liquidarSueldo();
			trabajadores.push_back(laburador);
		}
		else if(tipo == 'C'){
			Trabajador *laburador = new Consultor;
			int valor_hora_catedra;
			int horas_catedras;
			int horas_incumplidas;
			txt>> legajo>> nombre>> valor_hora_catedra>> horas_catedras>> horas_incumplidas;
			(*laburador).asignarTrabajador(nombre, legajo, valor_hora_catedra, horas_catedras, horas_incumplidas);
			(*laburador).liquidarSueldo();
			trabajadores.push_back(laburador);
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
			cout<< "Adios"<< endl;
			break;
			
		case 1:
			buscarLegajo();
			cargarTrabajadores();
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
	int contador = trabajadores.size();
	for(int i = 0; i < contador; i++){
		Trabajador* laburador = new Empleado;
		laburador = trabajadores.back();
		
		if((int)laburador->obtenerTipo() == 1){
			Trabajador* auxT = new Empleado;
			auxT = trabajadores.back();
			if((*auxT).obtenerLegajo() == legajo){
				(*auxT).mostrar();
			}
		}
		else if((*laburador).obtenerTipo() == 2){
			Trabajador* auxT = new Consultor;
			auxT = trabajadores.back();
			if((*auxT).obtenerLegajo() == legajo){
				(*auxT).mostrar();
			}
		}
		else if((*laburador).obtenerTipo() == 3){
			Trabajador* auxT = new Jornalero;
			auxT = trabajadores.back();
			if((*auxT).obtenerLegajo() == legajo){
				(*auxT).mostrar();
			}
		}
		trabajadores.pop_back();
	}
}

void Empresa::eliminarLegajo(){
	
}
