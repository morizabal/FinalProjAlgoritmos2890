// Nombre del estudiante: Carlos André Correa Menzel
// Ejercicio #: 4.4
// Nombre del ejercicio:  Determinar el número menor entre dos enteros
// Descripción: El programa solicita al usuario ingresar dos números enteros y determina cuál de los dos es menor. Si ambos números son iguales, informa que no existe un número menor.
// Entrada esperada: Dos números enteros.
// Salida esperada: Un mensaje indicando cuál número es el menor o si ambos son iguales.

#include <iostream>
using namespace std;

int main() {
	int numero1, numero2;
	cout << "Este programa ayuda a calcular cual de los dos numeros ingresados es menor"<<endl;
	cout << "Ingrese los dos números" <<endl;
	cin >> numero1;
	cin >> numero2;
	if (numero1 == numero2) {
		cout << "Los numeros ingresados son iguales no hay uno menor";
	}else if (numero1 < numero2) {
		cout << "El numero " << numero1 << " Es menor que el numero " << numero2;
	}else {
		cout << "El numero " << numero2 << " Es menor que el numero " << numero1;
	}
	return 0;
