//Nombre del estudiante: José Ernesto Alessandro Morales Pereira
// Ejercicio #: 4.8
// Nombre del ejercicio:  Escribir un programa que introduzca el número de un mes (1 a 12)y el año y visualice el número de días de ese mes
// Descripción:  El programa debe pedir al usuario un año y determinar si es bisiesto o no bisiesto. Un año es bisiesto si cumple estas reglas: Es múltiplo de 4. Excepto los que son múltiplos de 100, que solo son bisiestos si también son múltiplos de 400.
// Entrada esperada:  Un número entero que representa el año.
// Salida esperada: Un mensaje indicando si el año es bisiesto o no bisiesto.

codigo

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x;
    bool bisiesto;

    cout << "Introduzca un año entero: ";
    cin >> x;

    if (x % 400 == 0)
        bisiesto = true;
    else if (x % 100 == 0)
        bisiesto = false;
    else
        bisiesto = (x % 4 == 0);

    if (bisiesto)
        cout << x << " es bisiesto\n";
    else
        cout << x << " no es un año bisiesto\n";

    system("PAUSE");
    return EXIT_SUCCESS;
}



