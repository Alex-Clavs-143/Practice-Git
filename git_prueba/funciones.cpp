//funciones.cpp
#include "operaciones.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void ingreso_num (int &num1,int &num2){
	cout<<"Ingresa el primer numero: "; cin>>num1;
	cout<<"Ingresa el segundo numero: "; cin>>num2;
}

void suma_prueba (int numero_1,int numero_2){
	cout<<"El numero 1 es: "<<numero_1<<endl;
	cout<<"El numero 2 es: "<<numero_2<<endl;
	int suma = numero_1+numero_2;
	cout<<"La suma de los numeros es: "<<suma;
}

