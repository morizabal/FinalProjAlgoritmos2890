 //Nombre del estudiante: José Ernesto Alessandro Morales Pereira
// Ejercicio #: 4.1
// Nombre del ejercicio:  Escribir un programa que introduzca el número de un mes (1 a 12)y el año y visualice el número de días de ese mes
// Descripción:  El programa debe pedir al usuario que ingrese un número de mes (del 1 al 12) y un año, y luego mostrar cuántos días tiene ese mes.
// Entrada esperada: Numeros enteros.
// Salida esperada:

Codigo:

#include <iostream>
using namespace std;

int main() {
    int mes, anio;

    cout << "Ingrese mes (1-12): ";
    cin >> mes;

    cout << "Ingrese anio: ";
    cin >> anio;

    int dias = 0;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        dias = 31;
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } 
    else if (mes == 2) {
        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
            dias = 29;
        else
            dias = 28;
    } 
    else {
        cout << "Mes invalido." << endl;
        return 0;
    }

    cout << "El mes tiene " << dias << " dias." << endl;

    return 0;
}
