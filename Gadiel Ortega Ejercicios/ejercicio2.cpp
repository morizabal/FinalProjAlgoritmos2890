// Nombre del estudiante: Gadiel René Ortega López
// Ejercicio #: 2
/*Nombre del Ejercicio:Contador de numeros positivos, negativos y ceros.*/
//Descripción: Este programa solicita ingresar 10 numeros y contar cuantos son positivos y cuantos son negativos y ceros .
// Entrada esperada: ingresar 10 numeros ya sean negativos positivos o cero que sean enteros.
// Salida esperada: Un mensaje mostrando cuantos numeros son positivos, negativos y ceros.

#include <iostream>
using namespace std;

int main() {
    int numer0;         
    int positivos = 0; 
    int negativos = 0; 
	int ceros = 0; 
    int i = 1;         

    cout << "Programa que cuenta cuantos numeros son positivos y cuantos son negativos y ceros en 10 numeros ." << endl;

    // Bucle para leer llos 10 números
    while (i <= 10) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numer0;

        if (numer0 > 0){
		
            positivos++;
        }
        else if (numer0 < 0){
            negativos++;
        }
        else {
        	ceros++;
		}

        i++;
    }

    cout << "Total de numeros positivos: " << positivos << endl;
    cout << "Total de numeros negativos: " << negativos << endl;
    cout << "Total de numeros ceros: " << ceros << endl;

    return 0;
}

	
	
