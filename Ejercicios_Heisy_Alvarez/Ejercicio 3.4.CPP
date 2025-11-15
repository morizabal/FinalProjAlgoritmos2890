// Heisy Julissa Alvarez Monteros
// Ejercicio #: 3.4 
// Nombre del ejecicio: Operaciones y expreciones.
// Descripcion: Arroja el resultado de la constasnte gravitacional. 
// Entrada esperada: Introdusca la masa de dos cuerpos en gramos, 4567 5267
// Introdusca la distancia entre ellos en centimetros (3 cm).  
// Salida esperada: Fuerza en dinas: 0.17835

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
const float G = 6.673e-8;
float masa1, masa2, distancia, fuerza;
cout << " Introduzca la masa de los dos cuerpos en gramos:\n ";
cin >> masa1 >> masa2;
cout<<" Introduzca la distancia entre ellos en centimetros:\n ";
cin >> distancia;
if (( masa1 <= 0 ) || ( masa2 <= 0) || ( distancia <= 0 ))
cout << " no solucion\n";
else
{
fuerza = G * masa1 * masa2 / (distancia * distancia);
cout << " la solucion es: \n";
cout << " Fuerza en dinas = "<< fuerza << endl;
}
system("PAUSE");
return EXIT_SUCCESS;
} 

