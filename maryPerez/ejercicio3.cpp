// Nombre del estudiante: Maria perez
// Ejercicio #: 3
// Nombre del ejercicio: Comprobador de Número Primo
// Descripción: Este programa determina si un número entero positivo ingresado por el usuario es un número primo.
// Entrada esperada: Un número entero positivo.
// Salida esperada: Un mensaje indicando si el número es o no es primo.

#include <iostream>
#include <cmath> // Para std::sqrt


bool esPrimo(int n) {
    // 1. Manejar casos base (según la definición de "entero positivo")
    // 0 y 1 no son primos.
    if (n <= 1) {
        return false;
    }

    // 2. El 2 es el único número primo par
    if (n == 2) {
        return true;
    }

    // 3. Descartar otros números pares
    if (n % 2 == 0) {
        return false;
    }

    // 4. Comprobar divisores impares desde 3 hasta la raíz cuadrada de n
    // Solo necesitamos comprobar hasta la raíz cuadrada porque si n tiene un
    // divisor 'a' mayor que su raíz, debe tener otro divisor 'b' menor.
    int limite = static_cast<int>(std::sqrt(n));

    for (int i = 3; i <= limite; i += 2) {
        if (n % i == 0) {
            // Se encontró un divisor
            return false;
        }
    }

    // 5. Si no se encontraron divisores, es primo
    return true;
}

/**
 * Programa principal para probar la función esPrimo.
 */
int main() {
    int num;

    std::cout << "--- Comprobador de Números Primos ---" << std::endl;
    std::cout << "Introduce un número entero positivo: ";
    std::cin >> num;

    if (num < 0) {
        std::cerr << "Error: El número debe ser positivo." << std::endl;
        return 1;
    }

    if (esPrimo(num)) {
        std::cout << "El número " << num << " ES primo." << std::endl;
    } else {
        std::cout << "El número " << num << " NO es primo." << std::endl;
    }

    return 0;
}