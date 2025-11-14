// Nombre del estudiante: Gadiel René Ortega López
// Ejercicio #: 3
/*Nombre del Ejercicio:Identificador de Edades.*/
//Descripción: Este programa solicita ingresar las edades de tres hijos y mostrar cual es el mayor, el menor y la media de los 3 .
// Entrada esperada: ingresar las edades de los hijos.
// Salida esperada: Un mensaje mostrando quein de los hijos es mayor, el de enmedio y el menor.

#include <iostream> 
using namespace std;
int main () {

int Mario, Carlos, Daniel;

cout << "Ingrese la edad de Mario: " << endl; 
cin >> Mario; 
cout << "Ingrese la edad de Carlos: " << endl; 
cin >> Carlos; 
cout<< "Ingrese la edad de Daniel:" << endl;
cin >> Daniel;

if (Mario >= Carlos && Mario >= Daniel){
cout << "El mayor es Mario" << endl;
if (Carlos >= Daniel) {
cout << "El de enmedio es Carlos" << endl;
cout << "El menor es Daniel"  << endl;
}
 else {
cout << "El de enmedio es Daniel" << endl;
cout << "El menor es Carlos"<< endl;
}

}
else if (Carlos >= Mario && Carlos >= Daniel)
{
cout << "El mayor es Carlos"  << endl;
if (Mario >= Daniel) {
cout << "El de enmedio es Mario" << endl;
cout << "El menor es Daniel" << endl;
}
 else {
cout << "El de enmedio es Daniel" << endl;
cout << "El menor es Mario" << endl;
}
}
else
{
cout << "El mayor es Daniel" << endl;
if (Mario >= Carlos) {
cout << "El de enmedio es Mario" << endl;
cout << "El menor es Carlos" << endl;
} 
else {
cout << "El de enmedio es Carlos " << endl;
cout << "El menor es Mario"  << endl;
}
}
return 0;
}

