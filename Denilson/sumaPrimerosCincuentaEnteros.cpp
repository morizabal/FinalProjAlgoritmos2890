// Nombre del estudiante: Brandy Denilson Vásquez Mérida
// Ejercicio #: 3
// Nombre del ejercicio: Suma de los primeros 50 números enteros
// Descripción: Este programa calcula la suma de los primeros 50 números enteros positivos.
// Entrada esperada: No requiere entrada del usuario.
// Salida esperada: La suma total de los primeros 50 números enteros (resultado esperado: 1275).

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int resultado = 0;
    int limite = 50;

    for (int i = 1; i <= limite; i++) {
        resultado += i;
    }

    cout << "La suma de los primeros 50 números enteros es: " << resultado << endl;

    return 0;
}
