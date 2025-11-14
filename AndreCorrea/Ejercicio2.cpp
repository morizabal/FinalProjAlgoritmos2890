// Nombre del estudiante: Carlos André Correa Menzel
// Ejercicio #: 5.11
// Nombre del ejercicio: Calcular el número mayor, menor y la media de N valores
// Descripción:El programa pide al usuario ingresar la cantidad de números a procesar (N > 0) luego solicita los N números y calcula el número mayor, el número menor la media  de todos los números
// Entrada esperada: Un entero N mayor que 0. N cantidad de números
// Salida esperada: El valor mayor, el menor y la media aritmética.
#include <iostream>
using namespace std;

int main() {
    cout << "Este programa calcula el numero mayor, menor y la media de varios numeros" << endl;

    int totalnumeros;
    cout << "Ingrese la cantidad de numeros: " << endl;
    cin >> totalnumeros;

    if (totalnumeros <= 0) {
        cout << "Ingrese un valor mayor que cero" << endl;
        return 0;
    }

    float numero, mayor, menor, suma = 0.0f;

    cout << "Ingrese los numeros:" << endl;
    cin >> numero;

    mayor = numero;
    menor = numero;
    suma = numero;

    for (int i = 1; i < totalnumeros; i++) {
        cin >> numero;
        suma += numero;

        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "La media es: " << (suma / totalnumeros) << endl;

    return 0;
}
