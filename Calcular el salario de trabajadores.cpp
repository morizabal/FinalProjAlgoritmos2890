/* Nombre: Jesús Emanuel Orozco Batres
Ejercicio: Calcular salario de trabajadores
Descripción: Se desea calcular el salario neto semanal de los trabajadores de una empresa de acuerdo a las siguientes normas:
Horas semana les trabajadas < = 38, a una tasa dada.
Horas extras (38 o más), a una tasa 50 por 100 superior a la ordinaria.
Impuestos 0 por 100, si el salario bruto es menor o igual a 300 euros.
Impuestos 10 por 100, si el salario bruto es mayor de euros
Entrada esperada: Horas trabajadas y tasa
salida esperada: El salario Bruto y el salario neto 
*/
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
float Horas, Extras, Tasa, SalarioBruto, SalarioNeto;
cout << " introduzca las horas trabajadas" << endl;
cin >> Horas;
if ( Horas <= 38 )
Extras = 0;
else
{
Horas = 38;
Extras = Horas - 38;
}
cout <<"introduzca Tasa" << endl;
cin >> Tasa;
SalarioBruto = Horas * Tasa + Extras * Tasa * 1.5;
if (SalarioBruto < 300)
SalarioNeto = SalarioBruto;
else
SalarioNeto = SalarioBruto * 0.9;
cout <<" Salario bruto " << SalarioBruto << endl;
cout <<" Salario neto "<< SalarioNeto << endl ;
return 0;
}