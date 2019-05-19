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
			aux.asignarSueldoMensual(sueldo_mensual);
			aux.asignarLlegadasTarde(llegadas_tarde);
			aux.asignarAusencias(ausencias);
			aux.asignarTrabajador(tipo, nombre, legajo, aux.calcularSueldo());
			trabajadores.push_back(aux);
			delete aux;
		}
		else if(tipo == 'J'){
			aux = new Jornalero;
			int valor_diario;
			int cant_dias;
			txt>> legajo>> nombre>> valor_diario>> cant_dias;
			aux.asignarValorDiario(valor_diario);
			aux.asignarCantDias(cant_dias);
			aux.asignarTrabajador(tipo, nombre, legajo, aux.calcularSueldo());
			trabajadores.push_back(aux);
			delte aux;
		}
		else if(tipo == 'C'){
			aux = new Consultor;
			int valor_hora_catedra;
			int horas_catedras;
			int horas_a_descontar;
			txt>> legajo>> nombre>> valor_hora_catedra>> horas_catedras>> horas_a_descontar;
			aux.asignarValorHora(valor_hora_catedra);
			aux.asignarHorasCatedras(horas_catedras);
			aux.asignarHorasADescontar(horas_a_descontar);
			aux.asignarTrabjador(tipo, nombre, legajo, aux.calcularSueldo());
			delete aux;
		}
	}
	txt.close();
}
