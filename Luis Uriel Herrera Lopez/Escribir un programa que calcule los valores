// Nombre del estudiante: Luis Herrera Lopéz
// Ejercicio #: 3
/* Nombre del ejercicio:Escribir un programa que calcule los valores de la función definida de la siguiente forma:
 funciony(0)฀=฀0,
 funciony(1)฀=฀1
 funciony(2)฀=฀2
 funciony(n)฀=฀funciony(n฀–฀3)฀+฀3฀*฀funciony(n฀–฀2)฀–฀funcionx(n฀–฀1)฀si฀n฀>฀2*/
/*Descripción: El programa solicita al usuario un valor entero n y calcula el resultado de la función 
funciony(n), definida mediante una relación de recurrencia*/ 
// Entrada esperada: Un número entero n ingresado por el usuario
// Salida esperada: El valor calculado de la función funciony(n) según la relación de recurrencia


#include<iostream>
using namespace std;

int funciony(int n){
	
	if( n==0 ) return 0;
	if( n==1 ) return 1;
	if( n==2 ) return 2;
	
	return funciony(n - 3) + 3 * funciony(n - 2) - funciony(n - 1);
}

int main(){
	
	int n;
	cout<<"ingrese el valor n: ";
	cin>> n;
	
	cout<<"funciony("<< n <<") = "<<funciony(n)<<endl;
	
	return 0;
	
}
