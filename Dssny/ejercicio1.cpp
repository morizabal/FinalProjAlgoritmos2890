// Nombre del estudiante: Dany Bernardo Chanax Ajiataz 
// Ejercicio #: 6.14
// Nombre del ejercicio: Calcular MCD y MCM
// Descripción: El programa solicita dos números enteros y calcula
//              su Máximo Común Divisor (MCD) y su Mínimo Común Múltiplo (MCM).
// Entrada esperada: Dos números enteros.
// Salida esperada: MCD y MCM del par ingresado.

#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}

int main() {
    int num1, num2;

    cout << "Calcular el MCD y el MCM.\n\n";
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\n--- RESULTADOS ---\n";
    cout << "El MCD es: " << mcd(num1, num2) << endl;
    cout << "El MCM es: " << mcm(num1, num2) << endl;

    return 0;
}
