<<<<<<< HEAD
# Ejercicio de Práctica Final - Algoritmos 2890

Este repositorio contiene los ejercicios de práctica final del curso **Algoritmos 2890** de la Universidad Mariano Gálvez.

## 📌 Instrucciones Generales

Cada estudiante debe:

- Subir **tres ejercicios distintos** en C++.
- Asegurarse de que los ejercicios **no estén repetidos**.
- Debe crear una carpeta donde estará otro archivo Readme.md con la descripción de cada archivo y los archivos de código cpp.
- Incluir una **descripción clara** en cada archivo.
- Enviar una **solicitud de commit (pull request)** con los tres archivos y una descripción detallada.

## 📁 Estructura de los Archivos

Cada archivo debe incluir:

- Nombre del estudiante
- Número y título del ejercicio
- Descripción del problema
- Entrada esperada
- Salida esperada
- Código funcional en C++

## 📊 Ponderación del Ejercicio Final (15 puntos)

| Criterio                                      | Puntos |
|----------------------------------------------|--------|
| Originalidad de los ejercicios               | 5 pts  |
| Correcta implementación y funcionalidad      | 5 pts  |
| Solicitud de commit clara y bien documentada | 3 pts  |
| Organización y formato del código            | 2 pts  |

## 📅 Fecha Límite

La fecha de entrega será: 15-11-2025. No se aceptarán entregas fuera de plazo sin justificación válida.

## Ejemplo de Entrega de ejercicios:

```cpp
// Nombre del estudiante: Juan Pérez
// Ejercicio #: 1
// Nombre del ejercicio: Suma de números pares
// Descripción: Este programa solicita al usuario ingresar una cantidad de números enteros y calcula la suma de aquellos que son pares.
// Entrada esperada: Un número entero que indica cuántos valores se ingresarán, seguido de esa cantidad de números enteros.
// Salida esperada: La suma total de los números pares ingresados.

#include <iostream>
using namespace std;

int main() {
    int n, num, suma = 0;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese un número: ";
        cin >> num;
        if (num % 2 == 0) {
            suma += num;
        }
    }

    cout << "La suma de los números pares es: " << suma << endl;
    return 0;
}
```

**Repositorio oficial:**  
[https://github.com/morizabal/FinalProjAlgoritmos2890.git](https://github.com/morizabal/FinalProjAlgoritmos2890.git)
=======
# Ejercicios de Algoritmos - Gadiel Ortega

# Ejercicios de Algoritmos
Este repositorio contiene mis ejercicios de programación en C++ para la clase de algoritmos. contiene tres ejercicios realizados en C++ relacionados con la clasificación de números y comparación de edades.

---

## 📘 Ejercicio 1: identificador de numeros positivos, negativos y ceros (3 números)
Este programa solicita tres números e identifica cuales de ellos son:
- Positivos
- Negativos
- Ceros

---

## 📗 Ejercicio 2: Conteo de positivos, negativos y ceros (10 números)
Este programa solicita diez números e indica cuántos son:
- Positivos
- Negativos
- Ceros

---

## 📙 Ejercicio 3: Determinar el orden de edades entre tres hermanos
Este programa solicita las edades de tres hermanos y determina:
- Quién es mayor
- Quién es el mediano
- Quién es menor
>>>>>>> 2308694 (Agrego README y ejercicios)
