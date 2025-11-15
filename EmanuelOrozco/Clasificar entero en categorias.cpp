/* Nombre: Jesús Emanuel Orozco Batres
Ejercicio: clasificar enteros en categorías
Descripción: El usuario ingresa un Número y el programa clasifica si el número es menor a 0, mayor a 100 o está entre 0 y 100
Entrada esperada: un entero
Entrada de salida: si el entero en menor a 0 = 0<x, si el entero esta en entre 0 y 100 = 0<= x <=100 o si es mayor a 100 = x > 100
*/
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int x;
cout << " Escriba un nmero entero: ";
cin >> x;
if (x < 0)
cout << "es negativo\n";
else if (x <= 100)
cout << "0 <= x <= 100";
else
cout << " x > 100";
return  0;
}