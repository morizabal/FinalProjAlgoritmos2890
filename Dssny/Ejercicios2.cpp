// Nombre del estudiante: Dany
// Ejercicio #: 5.4
// Nombre del ejercicio: Numeros pares del 1 al 50
// Descripción: El programa muestra todos los números pares que existen entre 1 y 50.
// Entrada esperada: Ninguna.
// Salida esperada: Lista de números pares.

#include <iostream>
using namespace std;

int main() {

    cout << "Aqui tienes todos los numeros pares entre 1 y 50:\n\n";

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << "Numero par: " << i << endl;
        }
    }

    return 0;
}
