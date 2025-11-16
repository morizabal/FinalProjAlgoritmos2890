// Nombre del estudiante: Miguel André González Carranza
// Ejercicio #: 5.6
// Nombre del ejercicio:  Diseñar un algoritmo que sume los m = 30 primeros números pares
//Descripción: Calcula la suma de los primeros 30 números pares utilizando un ciclo for que genera cada par como 2*i.
//Entrada esperada: Ninguna entrada del usuario (se usa m = 30 por defecto).
//Salida esperada: La suma total de los primeros 30 números pares (valor: 930).

#include <iostream>
using namespace std;

int main() {
    int m;

    cout << "Ingrese la cantidad de numeros pares a sumar (m): ";
    cin >> m;

    if (m <= 0) {
        cout << "Error: m debe ser un numero positivo." << endl;
        system("pause");
        return 1;
    }

    int suma = 0;

    for (int i = 1; i <= m; i++) {
        suma += 2 * i;   // i-siguiente numero par
    }

    cout << "La suma de los primeros " << m 
         << " numeros pares es: " << suma << endl;

    system("pause");
    return 0;
}
