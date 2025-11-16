// Nombre del estudiante: Miguel André González Carranza
// Ejercicio #: 5.9
// Nombre del ejercicio: Escribir y ejecutar un programa que invierta los dígitos de un entero positivo leído del teclado
//Descripción: Invierte el orden de los dígitos de un número entero positivo construyendo el número invertido dígito a dígito. (Los ceros a la izquierda del resultado se descartan por la naturaleza numérica.)
//Entrada esperada: Un número entero no negativo (ej.: 4529).
//Salida esperada: El número con sus dígitos en orden inverso (ej.: 9254).


#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Ingrese un numero entero positivo: ";
    
    // Verifica que la entrada sea válida
    if (!(cin >> numero)) {
        cout << "Error: entrada no valida." << endl;
        system("pause");
        return 1;
    }

    while (numero > 0) {
        int resto = numero % 10;      
        invertido = invertido * 10 + resto;
        numero = numero / 10;       
    }

    cout << "Numero invertido: " << invertido << endl;

    system("pause"); 
    return 0;
}

