
// Heisy Julissa Alvarez Monteros
// Ejercicio #: 3.3 
// Nombre del ejecicio: Prioridad y asociatividad
// Descripcion: Sistema lineal de dos ecuaciones con dos incógnitas 5 tiene solución única si y solamente si a * e – b * d es distinto de cero, 
// Entrada esperada: Introduce el valor de a, b, y de c (2, 3, 5) introduce el valor de D, E y de F (1, 6, 7) 
// Salida esperada: x = 1 y = 1 

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
float a, b, c, d, e, f, denominador, x, y;
cout << " Introduzca el valor de a de b y de c ";
cin >> a >> b >> c;
cout << " Introduzca el valor de d de e y de f " ;
cin >> d >> e >> f;
denominador = a * e - b * d;
if (denominador == 0)
cout << " no solucion\n";
else
{
x = (c * e - b * f) / denominador;
y = (a * f - c * d) / denominador;
cout << " la solucion del sistema es\n";
cout << " x = " << x << " y = " << y << endl;
}
system("PAUSE");
return EXIT_SUCCESS;
}
