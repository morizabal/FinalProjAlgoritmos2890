// Nombre del estudiante: Carlos André Correa Menzel
// Ejercicio #:4.6
// Nombre del ejercicio:  Comprobar si tres números están en orden de una manera no estricta
// Descripción:El programa lee tres números enteros y determina si están en orden, Si la condición no se cumple, indica que no están en orden.
// Entrada esperada: Tres números enteros.
// Salida esperada: Un mensaje diciendo si están o no en orden

#include <iostream>
using namespace std;

int main() {
    cout << "Este programa lee tres enteros y verifica si están ordenados numéricamente" << endl;
    int num1, num2, num3;
    cout << "Ingrese los tres numeros enteros: "<<endl;
    cin >> num1 >> num2 >> num3;
    if (num1 <= num2 && num1 <= num3) {
        cout << "Están ordenados númericamente";
    }
    else {
        cout << "No están ordenados númericamente";
    }
}
