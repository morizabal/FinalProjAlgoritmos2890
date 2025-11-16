// Nombre del estudiante: Luis Herrera Lopéz
// Ejercicio #: 1
// Nombre del ejercicio: Escriba un programa que calcule y visualice 1+2+3+...+(n-1)+n
/*Descripción: Este programa solicita al usuario un número entero positivo n y calcula la suma de 
todos los números desde 1 hasta n utilizando un ciclo for*/ 
// Entrada esperada: Un número entero positivo n ingresado por el usuario
// Salida esperada: La suma de todos los números desde 1 hasta n




#include<iostream>
using namespace std;

int main(){
	int n, suma = 0;
	
	cout<<"ingrese un numero positivo: "<<endl;
	cin>>n;
	
	if(n > 0){
		for (int a = 1; a <= n; a++){
			suma = suma+a;
		}
	 cout<<"la suma de hasta "<< n << " es de: "<<suma<<endl;
	}
	else{
		cout<<"n no es un numero positivo:"<<endl;
	}
	
	return 0;
}
	
}
