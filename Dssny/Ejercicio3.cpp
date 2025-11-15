// Nombre del estudiante: Dany Bernardo chanax Ajiataz 
// Ejercicio #: 6.1
// Nombre del ejercicio: Verificar si un numero es positivo o no
// Descripción: El programa pide un número al usuario y devuelve:
//              P = positivo
//              N = cero o negativo
// Entrada esperada: Un número entero.
// Salida esperada: Letra P o N.

#include <iostream>
using namespace std;

char verificarNumero(int x) {
    if (x > 0) {
        return 'P';
    } else {
        return 'N';
    }
}

int main() {
    int num;

    cout << "Vamos a verificar tu numero.\n\n";
    cout << "Ingrese un numero cualquiera: ";
    cin >> num;

    cout << "\n--- RESULTADO ---\n";

    if (verificarNumero(num) == 'P') {
        cout << "El numero es POSITIVO (P)" << endl;
    } else {
        cout << "El numero es CERO o NEGATIVO (N)" << endl;
    }

    return 0;
}
