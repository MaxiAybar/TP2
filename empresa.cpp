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
			break;			
		case 3:
			darAltadeTrab();
			break;		
		case 4:
			listarTrabajadores();
			break;	
		case 5:
			sueldoMax();
			break;
		case 6:
			sueldoMin();
			break;
		case 7:
			sumDeSueldo();
			break;
		case 8:
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
		
		if((*laburador).obtenerTipo() == 1){
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
	cargarTrabajadores();
}

void Empresa::darAltadeTrab(){
	ofstream txt ("trabajadores.txt", ios_base::app);
	char tipo;
	int legajo;
	string nombre;
	cout<< "Ingrese E.Empleado C.Consultor J.Jornalero : ";
	cin>> tipo;
	cout<< "ingrese legajo : ";
	cin>> legajo;
	cout<< "Ingrese nombre y apellido separado por _(guion bajo) : ";
	cin>>nombre;
	if(tipo == 'E'){
		int sueldo_mensual;
		cout<< "Ingrese sueldo mensual : ";
		cin>> sueldo_mensual;
		txt<< tipo<< " "<< legajo<< " "<< nombre<< " "<< sueldo_mensual<< " 0 0"<< endl;
	}
	else if(tipo == 'C'){
		int valor_hora_catedra;
		int horas_catedras;
		cout<< "Ingrese salario por hora catedra : ";
		cin>> valor_hora_catedra;
		cout<< "ingrese horas catedras asignadas : ";
		cin>> horas_catedras;
		txt<< tipo<< " "<< legajo<< " "<< nombre<< " "<< valor_hora_catedra<< " "<< horas_catedras<< " 0"<<endl;
	}
	else if(tipo == 'J'){
		int valor_diario;
		cout<< "Ingrese salario por dia : ";
		cin>> valor_diario;
		txt<< tipo<< " "<< legajo<< " "<< nombre<< " "<< valor_diario<< " 0"<< endl;
	}
	txt.close();
	cargarTrabajadores();
}

void Empresa::listarTrabajadores(){
	int contador = trabajadores.size();
	for(int i = 0; i < contador; i++){
		Trabajador* laburador = new Empleado;
		laburador = trabajadores.back();
		
		if((*laburador).obtenerTipo() == 1){
			Trabajador* auxT = new Empleado;
			auxT = trabajadores.back();
			(*auxT).mostrar();
		}
		else if((*laburador).obtenerTipo() == 2){
			Trabajador* auxT = new Consultor;
			auxT = trabajadores.back();
			(*auxT).mostrar();
		}
		else if((*laburador).obtenerTipo() == 3){
			Trabajador* auxT = new Jornalero;
			auxT = trabajadores.back();
			(*auxT).mostrar();
		}
		trabajadores.pop_back();
	}
	cargarTrabajadores();
}

void Empresa::sueldoMax(){
	float sueldo_max = 0;
	string nombre;
	int contador = trabajadores.size();
	for(int i = 0; i < contador; i++){
		Trabajador* laburador = new Empleado;
		laburador = trabajadores.back();
		
		if((*laburador).obtenerTipo() == 1){
			Trabajador* auxT = new Empleado;
			auxT = trabajadores.back();
			if(sueldo_max < (*auxT).obtenerSueldo()){
				sueldo_max = (*auxT).obtenerSueldo();
				nombre = (*auxT).obtenerNombre();
			}
		}
		else if((*laburador).obtenerTipo() == 2){
			Trabajador* auxT = new Consultor;
			auxT = trabajadores.back();
			if(sueldo_max < (*auxT).obtenerSueldo()){
				sueldo_max = (*auxT).obtenerSueldo();
				nombre = (*auxT).obtenerNombre();
			}
		}
		else if((*laburador).obtenerTipo() == 3){
			Trabajador* auxT = new Jornalero;
			auxT = trabajadores.back();
			if(sueldo_max < (*auxT).obtenerSueldo()){
				sueldo_max = (*auxT).obtenerSueldo();
				nombre = (*auxT).obtenerNombre();
			}
		}
		trabajadores.pop_back();
	}
	cargarTrabajadores();
	cout<< "Nombre: "<< nombre<< endl<< "Sueldo: "<< sueldo_max<< endl<< endl;
}

void Empresa::sueldoMin(){
	float sueldo_min;
	string nombre;
	int contador = trabajadores.size();
	for(int i = 0; i < contador; i++){
		Trabajador* laburador = new Empleado;
		laburador = trabajadores.back();
		if(i == 0)
			sueldo_min = (*laburador).obtenerSueldo();

		if((*laburador).obtenerTipo() == 1){
			Trabajador* auxT = new Empleado;
			auxT = trabajadores.back();
			if(sueldo_min >= (*auxT).obtenerSueldo()){
				sueldo_min = (*auxT).obtenerSueldo();
				nombre = (*auxT).obtenerNombre();
			}
		}
		else if((*laburador).obtenerTipo() == 2){
			Trabajador* auxT = new Consultor;
			auxT = trabajadores.back();
			if(sueldo_min >= (*auxT).obtenerSueldo()){
				sueldo_min = (*auxT).obtenerSueldo();
				nombre = (*auxT).obtenerNombre();
			}
		}
		else if((*laburador).obtenerTipo() == 3){
			Trabajador* auxT = new Jornalero;
			auxT = trabajadores.back();
			if(sueldo_min >= (*auxT).obtenerSueldo()){
				sueldo_min = (*auxT).obtenerSueldo();
				nombre = (*auxT).obtenerNombre();
			}
		}
		trabajadores.pop_back();
	}
	cargarTrabajadores();
	cout<< "Nombre: "<< nombre<< endl<< "Sueldo: "<< sueldo_min<< endl<< endl;
}

void Empresa::sumDeSueldo(){
	float suma_sueldos;
	int contador = trabajadores.size();
	for(int i = 0; i < contador; i++){
		Trabajador* laburador = new Empleado;
		laburador = trabajadores.back();
		
		if((*laburador).obtenerTipo() == 1){
			Trabajador* auxT = new Empleado;
			auxT = trabajadores.back();
			suma_sueldos += (*auxT).obtenerSueldo();
		}
		else if((*laburador).obtenerTipo() == 2){
			Trabajador* auxT = new Consultor;
			auxT = trabajadores.back();
			suma_sueldos += (*auxT).obtenerSueldo();
		}
		else if((*laburador).obtenerTipo() == 3){
			Trabajador* auxT = new Jornalero;
			auxT = trabajadores.back();
			suma_sueldos += (*auxT).obtenerSueldo();
		}
		trabajadores.pop_back();
	}
	cargarTrabajadores();
	cout<< "Suma de sueldo: "<< suma_sueldos<< endl<< endl;
}
