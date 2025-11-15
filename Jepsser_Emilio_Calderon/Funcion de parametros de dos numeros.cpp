#include <iostream>
using namespace std;
int restoDivision(int num1, int num2) {
    int mayor = (num1 > num2) ? num1 : num2;
    int menor = (num1 > num2) ? num2 : num1;

    while (mayor >= menor) {
        mayor -= menor;
    }

    return mayor; 
}

int main() {
    int a, b;

    cout << "Ingresa dos numeros enteros positivos"<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
	cin >> a;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>> b;

    int resto = restoDivision(a, b);

    cout << "El resto de dividir el mayor entre el menor es: " << resto << endl;
    return 0;
}
