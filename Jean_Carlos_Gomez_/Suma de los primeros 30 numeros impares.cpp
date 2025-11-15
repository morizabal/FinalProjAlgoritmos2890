#include <iostream>

// Función que suma los 30 primeros números impares
int sumaImpares() {
    int suma = 0;
    int numero = 1;   // Primer número impar
    int contador = 0; // Contador de impares sumados

    while (contador < 30) {
        suma += numero;   // Sumar el número impar actual
        numero += 2;      // Pasar al siguiente impar
        contador++;       // Incrementar el contador
    }

    return suma;
}

int main() {
    std::cout << "La suma de los 30 primeros números impares es: "
              << sumaImpares() << std::endl;
    return 0;
}
