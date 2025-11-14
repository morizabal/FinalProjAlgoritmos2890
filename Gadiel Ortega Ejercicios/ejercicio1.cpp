// Nombre del estudiante: Gadiel René Ortega López
// Ejercicio #: 1
// Nombre del ejercicio: identificador de numeros positivos, negativos y ceros.
//Descripción: Este programa solicita ingresar tres numeros por el teclado y determina si son positivos, negativos o igual a cero
// Entrada esperada:tres numeros enteros introducidos por el usuario.
// Salida esperada: Un mensaje indicando si son números  positivos, negativos o cero.

#include <iostream>
using namespace std; 
int main() {
	
	int numer1 , numer2, numer3;
	// ingresar los numeros por separado 
	cout << "ingrese los tres numeros"<<endl;
	cin >> numer1 >> numer2 >>  numer3;
	
	if(numer1 > 0){
	
		cout << "El primer numero es positivo" <<endl;
		}
		else if ( numer1 == 0){
		
		
		cout << "El primer numero es 0" << endl;}
		else {
		
		cout << "El primer numero es negativo" << endl; }
	
		if(numer2 > 0){
		
		cout << "El  sgundo numero  es positivo" <<endl;}
		else if ( numer2 == 0){
		
		cout << "El segundo numero es 0" << endl;}
		 
		else {
		
		cout << "El segundo numero es negativo" << endl; }
	
		if(numer3 > 0){
		
		cout << "El tercer numero es positivo" <<endl;}
		else if ( numer3 == 0){
		
		cout << "El tercer numero es 0" << endl;
		 }
		else {
		cout << "El tercer numero es negativo" << endl; }
	

	
	return 0;
}