// Nombre del estudiante: Miguel André González Carranza
// Ejercicio #: 4.8
// Nombre del ejercicio: Calculadora simple
//Descripción: Realiza una operación aritmética básica entre dos números enteros según el operador ingresado (+, -, *, /, %). Valida operador inválido y evita división/modo por cero.
//Entrada esperada: Dos números enteros y un caracter que indique el operador (por ejemplo: 5 3 +).
//Salida esperada: Resultado de la operación (o un mensaje de error si el operador es inválido o hay división/modo por cero).

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;

    cout << "Ingrese un operador (+, -, *, /, %): ";
    cin >> op;

    int resultado;

    switch (op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: division entre cero no permitida." << endl;
                return 1;
            }
            resultado = num1 / num2;
            break;
        case '%':
            if (num2 == 0) {
                cout << "Error: modulo entre cero no permitido." << endl;
                return 1;
            }
            resultado = num1 % num2;
            break;
        default:
            cout << "Operador no valido." << endl;
            return 1;
    }

    cout << "Resultado: " << resultado << endl;

    system("PAUSE");
    return 0;
}
