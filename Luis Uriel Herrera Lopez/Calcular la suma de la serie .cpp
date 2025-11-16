// Nombre del estudiante: Luis Herrera Lopéz
// Ejercicio #: 2
// Nombre del ejercicio: Calcular la suma de la serie 1/1 + 1/2 + ... + 1/N donde N es unnúmero que se introduce por teclado
/*Descripción: Esta serie disminuye rápido porque el denominador crece exponencialmente mientras el numerador solo crece linealmente. 
Por eso los primeros términos pesan más y luego los términos se vuelven muy pequeños*/ 
// Entrada esperada: un entero n (n ≥ 1)
// Salida esperada: un número real con la precisión deseada

#include <iostream>
#include <vector>
using namespace std;

long long funciony(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    vector<long long> y(n+1);
    y[0] = 0;
    y[1] = 1;
    y[2] = 2;
    for (int i = 3; i <= n; ++i) {
        y[i] = y[i-3] + 3*y[i-2] - y[i-1];
    }
    return y[n];
}

int main() {
    int n;
    cout << "Introduce n: ";
    cin >> n;
    if (n < 0) {
        cout << "n debe ser entero no negativo.\n";
        return 0;
    }
    cout << "y(" << n << ") = " << funciony(n) << "\n";

    // opcional: imprimir todos los términos hasta n
    cout << "Tabla de valores y(0)..y(" << n << "):\n";
    for (int i = 0; i <= n; ++i) {
        cout << "y(" << i << ") = " << funciony(i) << "\n";
    }
    return 0;
}
