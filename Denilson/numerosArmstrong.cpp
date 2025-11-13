// Nombre del estudiante: Brandy Denilson Vásquez Mérida
// Ejercicio #: 2
// Nombre del ejercicio: Números Armstrong de tres cifras
// Descripción: Este programa muestra todos los números de tres cifras que son iguales a la suma de los cubos de sus cifras.
// Entrada esperada: No requiere entrada del usuario.
// Salida esperada: Lista de todos los números Armstrong de tres cifras.

#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int cifraUno, cifraDos, cifraTres, sumaDeCubos;
    int cuboCifraUno, cuboCifraDos, cuboCifraTres;
    int limiteInferior = 100;
    int limiteSuperior = 999;

    cout << "Números Armstrong de tres cifras:\n";

    for (int indice = limiteInferior; indice <= limiteSuperior; indice++) {
        string numero = to_string(indice);

        cifraUno = stoi(numero.substr(0, 1));
        cifraDos = stoi(numero.substr(1, 1));
        cifraTres = stoi(numero.substr(2, 1));

        cuboCifraUno = pow(cifraUno, 3);
        cuboCifraDos = pow(cifraDos, 3);
        cuboCifraTres = pow(cifraTres, 3);

        sumaDeCubos = cuboCifraUno + cuboCifraDos + cuboCifraTres;

        if (sumaDeCubos == indice) {
            cout << "El número: " << indice << " es un número Armstrong." << endl;
        }
    }

    return 0;
}
