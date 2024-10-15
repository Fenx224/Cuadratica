//Colocamos las librerias//
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

//iniciamos el programa//
int main() {
	//Definimos las variables que utilizaremos//
	double a, b, c;
	//Le pedimos al usuario que introduzca los valores//
	cout<<"introduce los valores de A, B y C de la ecuacion que desees solucionar"<<endl;
	//Guardamos los valores en la variable correspondiente//
	cout<<"A:"<<endl;
	cin>>a;
	cout<<"B:"<<endl;
	cin>>b;
	cout<<"C:"<<endl;
	cin>>c;
	//Mostramos el resultado//
	cout<<"El resultado es:"<<endl;
	//Realizamos las operaciones e imprimimos los resultado redondeandolo a 2 decimales//
	cout<<"x1: "<<setprecision(3)<<((b*-1)+sqrt((b*b)-((a*c)*4)))/(a*2)<<endl;
	cout<<"x2: "<<setprecision(3)<<((b*-1)-sqrt((b*b)-((a*c)*4)))/(a*2)<<endl;
}