#include <iostream>
using namespace std;
bool sonAmigos(int a, int b) {
    int sumaA = 0;
    int sumaB = 0;

    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0)
            sumaA += i;
    }

    for (int i = 1; i <= b / 2; i++) {
        if (b % i == 0)
            sumaB += i;
    }

    return (sumaA == b && sumaB == a);
}

int main() {
    int x, y;

    cout << "Ingresa dos numeros enteros positivos"<<endl;
    cout<<"Ingrese el primer numero: ";
    cin >> x;
    cout<<"Ingrese el segundo numero: "<<endl;
	cin>> y;

    if (sonAmigos(x, y))
        cout << x << " y " << y << " son numeros amigos." << endl;
    else
        cout << x << " y " << y << " NO son numeros amigos." << endl;

    return 0;
}
