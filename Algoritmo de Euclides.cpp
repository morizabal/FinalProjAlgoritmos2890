/* Nombre: Jesús Emanuel Orozco Batres
Ejercicio: Algoritmo de Euclides
Descripción: Es un programa que implementa el algoritmo de euclides para encontrar el maximo comun divisor entre dos numeros enteros y positivos
Entrada esperada: dos enteros positivos
Entrada de salida: el Maximo comun divisor de esos dos enteros
*/
#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int residuo = a % b;
        a = b;
        b = residuo;
    }
    return a; 
}

int main() {
    int n1, n2;

    cout << "Ingrese el primer numero: " <<endl;
    cin >> n1;

    cout << "Ingrese el segundo numero: " <<endl;
    cin >> n2;

    int resultado = mcd(n1, n2);

    cout << "El MCD es: " << resultado << endl;

    return 0;
}
