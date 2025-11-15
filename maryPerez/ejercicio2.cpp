// Nombre del estudiante: Maria perez
// Ejercicio #: 2
// Nombre del ejercicio: Comprobador de Número Capicúa
// Descripción: Este programa determina si un número entero ingresado por el usuario es capicúa (se lee igual al derecho y al revés).
// Entrada esperada: Un número entero.
// Salida esperada: Un mensaje indicando si el número es o no es capicúa.

#include <iostream>
#include <cmath> // Para std::abs


bool esCapicua(int numero) {
    // Tratar el número como positivo para la comprobación
    long long n = std::abs(static_cast<long long>(numero));
    long long original = n;
    long long reverso = 0;

    // Invertir el número
    while (n > 0) {
        int digito = n % 10;
        reverso = reverso * 10 + digito;
        n = n / 10;
    }

    // Comprobar si el original y el reverso son iguales
    return original == reverso;
}

/**
 * Programa principal para probar la función esCapicua.
 */
int main() {
    int num;

    std::cout << "--- Comprobador de Números Capicúa (Palíndromo) ---" << std::endl;
    std::cout << "Introduce un número entero: ";
    std::cin >> num;

    if (esCapicua(num)) {
        std::cout << "El número " << num << " ES capicúa." << std::endl;
    } else {
        std::cout << "El número " << num << " NO es capicúa." << std::endl;
    }

    return 0;
}