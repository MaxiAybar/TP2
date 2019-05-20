#include "empresa.h"
#include "trabajador.h"
#include "empleado.h"
#include <string>
#include <iostream>
#include <fstream>

Empresa::Empresa(){
	cout<< "Administracion "<< NOMBRE_EMPRESA<< endl<< endl;
	cargar_trabajadores();
}

void Empresa::cargarTrabajadores(){
	ifstream txt("trabajadores.txt");
	Trabajador* aux;
	string nombre;
	int legajo;
	
	while(!txt.eof()){
		char tipo;
		txt>> tipo;
		if(tipo == 'E'){
			aux = new Empleado;
			int sueldo_mensual;
			int llegadas_tarde;
			int ausencias;
			txt>> legajo>> nombre>> sueldo_mensual>> llegadas_tarde>> ausencias;
			aux.asignarEmpleado(nombre, legajo, sueldo_mensual, demoras, ausencias);
			aux.liquidarSueldo();
			trabajadores.push_back(aux);
			delete aux;
		}
		else if(tipo == 'J'){
			aux = new Jornalero;
			int valor_diario;
			int cant_dias;
			txt>> legajo>> nombre>> valor_diario>> cant_dias;
			aux.asginarJornalero(nombre, legajo, valor_diario, cant_dias);
			aux.liquidarSueldo()
			trabajadores.push_back(aux);
			delete aux;
		}
		else if(tipo == 'C'){
			aux = new Consultor;
			int valor_hora_catedra;
			int horas_catedras;
			int horas_incumplidas;
			txt>> legajo>> nombre>> valor_hora_catedra>> horas_catedras>> horas_a_descontar;
			aux.asignarConsultor(nombre, legajo, valor_hora_catedra, horas_catedras, horas_incumplidas);
			aux.liquidarSueldo();
			trabajadores.push_back(aux);
			delete aux;
		}
	}
	txt.close();
}

void Empresa::mostrarMenu(){
	cout<< "1. Consultar n° legajo"<< endl
	<< "2. Dar de baja un n° legajo"<< endl
	<< "3. Dar de alta un trabjaador"<< endl
	<< "4. Listar trabajadores"<< endl
	<< "5. Sueldo max"<< endl
	<< "6. Sueldo min"<< endl
	<< "7. Total de sueldos a liquidar"<< endl
	<< "8. Actualizar"<< endl
	<< "9. Liquidar sueldos"<< endl
	<< "0. Salir"<< endl<< endl;
}
