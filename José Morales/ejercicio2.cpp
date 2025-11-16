 //Nombre del estudiante: José Ernesto Alessandro Morales Pereira
// Ejercicio #: 4.5
// Nombre del ejercicio: Escribir una sentencia if-else que visualice la palabra “Alta” si el valor de la variable nota es mayor que 100 y “Baja” si el valor de esa nota es menor que 100.
// Descripción:  Escribir una sentencia if–else que evalúe el valor de la variable nota y muestre ALTa o BAJA.
// Entrada esperada: Un número entero que representa el valor de la variable nota.
// Salida esperada: Un mensaje en pantalla que diga: ALTA o BAJA.

Codigo

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int nota;
    cout << "Dame nota: ";
    cin >> nota;

    if (nota < 100)
        cout << "Baja";
    else
        cout << "Alta";

    system("PAUSE");
    return 0;
}
