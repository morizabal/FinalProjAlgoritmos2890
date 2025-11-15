#include <iostream>
using namespace std;
bool divide(int a, int b) {
    if (a == 0 && b == 0)
        return false;

    if (b != 0 && a % b == 0)
        return true;

    if (a != 0 && b % a == 0)
        return true;

    return false;
}

int main() {
    int a, b;
    cout << "Ingresa dos numeros: ";
    cin >> a >> b;

    if (divide(a, b))
        cout << "Uno divide al otro" << endl;
    else
        cout << "Ninguno divide al otro" << endl;

    return 0;
}
