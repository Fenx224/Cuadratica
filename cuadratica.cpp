//Este es un programa basico en c++ que utilizaremos para resolver ecuaciones cuadraticas por//
//medio de la formula general//
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	double a, b, c;
	cout << "introduce los valores de A, B y C de la ecuacion que desees solucionar" << endl;
	cout << "A:" << endl;
	cin >> a;
	cout << "B:" << endl;
	cin >> b;
	cout << "C:" << endl;
	cin >> c;
	cout << "El resultado es:" << endl;
	cout << "x1: "<< setprecision(3) << ((b*-1)+sqrt((b*b)-((a*c)*4)))/(a*2) << endl;
	cout << "x2: "<< setprecision(3) << ((b*-1)-sqrt((b*b)-((a*c)*4)))/(a*2) << endl;
}