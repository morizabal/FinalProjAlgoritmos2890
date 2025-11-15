// Nombre del estudiante: Juan Enrique de Jesus Castro Lopez 
// Ejercicio #: 1
// Nombre del ejercicio: Cálculo de Hipotenusa
// Descripción: Este programa calcula la hipotenusa de un triángulo rectángulo, utilizando el teorema de Pitágoras: a² + b² = h²
// Entrada esperada: Longitudes de los lados A y B (valores positivos)
// Salida esperada: Longitud de la hipotenusa

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double ladoA, ladoB, hipotenusa;
    
    cout << "=== CALCULO DE HIPOTENUSA ===" << endl;
    cout << "Ingrese la longitud del lado A: ";
    cin >> ladoA;
    
    cout << "Ingrese la longitud del lado B: ";
    cin >> ladoB;
    
    // Validar que los lados sean positivos
    if (ladoA <= 0 || ladoB <= 0) {
        cout << "Error: Los lados deben ser valores positivos." << endl;
        return 1;
    }
    
    // Calcular hipotenusa usando teorema de Pitágoras
    hipotenusa = sqrt(pow(ladoA, 2) + pow(ladoB, 2));
    
    // Mostrar resultado con 2 decimales
    cout << fixed << setprecision(2);
    cout << "\nResultado:" << endl;
    cout << "Lado A: " << ladoA << " unidades" << endl;
    cout << "Lado B: " << ladoB << " unidades" << endl;
    cout << "Hipotenusa: " << hipotenusa << " unidades" << endl;
    
    return 0;
}