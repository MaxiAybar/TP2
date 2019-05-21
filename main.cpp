#include "empresa.h"
#include "trabajador.h"
#include "empleado.h"
#include "jornalero.h"
#include "consultor.h"
#include <string>
#include <iostream>
#include <list>
using namespace std;

int main(){
	/*list<Trabajador*> pepe;
	Trabajador* hola = new Empleado;
	Trabajador* chau = new Jornalero;
	int abc = 0;
	string n = "pedro";
	string a = "juan";
	int i = 190;
	int s = 9990;
	int o = 123;
	int p = 870;
	int j = 740;
	(*hola).asignarTrabajador(n,i,s,p,j);
	(*hola).liquidarSueldo();
	pepe.push_back(hola);
	(*chau).asignarTrabajador(a,s,s,p,0);
	(*chau).liquidarSueldo();
	pepe.push_back(chau);
	cout<< abc++<<endl;
	int contador = pepe.size();
	for(int i = 0; i < contador; i++){
		cout<< "chau"<<endl;
		Trabajador* aux = new Empleado;
		aux = pepe.front();
		cout<< abc++<<endl;
		if((*aux).obtenerTipo() == 1){
			Trabajador* auxT = new Empleado;
			auxT = pepe.front();
			cout<< abc++<<endl;
			cout<<(*auxT).obtenerLegajo()<<endl;
			if((*auxT).obtenerLegajo() == 190){
				(*auxT).mostrar();
				cout<<"alo"<<endl;
			}
			cout<< abc++<<endl;
			cout<<"hola"<<endl;
		}
		else if((*aux).obtenerTipo() == 2){
			cout<< abc++<<endl;
			Trabajador* auxT = new Consultor;
			auxT = pepe.front();
			cout<<(*auxT).obtenerLegajo()<<endl;
			if((*auxT).obtenerLegajo() == 190){
				(*auxT).mostrar();
			}
		}
		else if((*aux).obtenerTipo() == 3){
			Trabajador* auxT = new Jornalero;
			auxT = pepe.front();
			cout<< abc++<<endl;
			cout<<(*auxT).obtenerLegajo()<<endl;
			if((*auxT).obtenerLegajo() == 9990){
				(*auxT).mostrar();
				cout<<"alo"<<endl;
			}
		}
		pepe.pop_front();
	}
	delete hola;
	delete chau;*/
	Empresa empresa;
	
	empresa.ejecutarApp();
	
	return 0;
}
