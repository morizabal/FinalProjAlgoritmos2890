// Nombre del estudiante: Juan Enrique de Jesus Castro Lopez 
// Ejercicio #: 2
// Nombre del ejercicio: Conversion de Masa a Energia
// Descripcion: Este programa calcula la energia usando la ecuacion de Einstein E = m * c^2
// Entrada esperada: Masa en gramos (valor positivo)
// Salida esperada: Energia en ergios

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const double VELOCIDAD_LUZ = 2.997925e10; // cm/seg
    double masa, energia;
    
    cout << "=== CONVERSION DE MASA A ENERGIA ===" << endl;
    cout << "Formula: E = m * c^2" << endl;
    cout << "Donde c = " << VELOCIDAD_LUZ << " cm/seg" << endl;
    cout << "\nIngrese la masa en gramos: ";
    cin >> masa;
    
    // Validar que la masa sea positiva
    if (masa <= 0) {
        cout << "Error: La masa debe ser un valor positivo." << endl;
        return 1;
    }
    
    // Calcular energia usando E = m * c^2
    energia = masa * pow(VELOCIDAD_LUZ, 2);
    
    // Mostrar resultado
    cout << scientific << setprecision(6);
    cout << "\n=== RESULTADO ===" << endl;
    cout << "Masa ingresada: " << masa << " gramos" << endl;
    cout << "Energia producida: " << energia << " ergios" << endl;
    
    cout << fixed << setprecision(2);
    cout << "\nEn notacion decimal: " << endl;
    cout << "Energia producida: " << energia << " ergios" << endl;
    cout << "==================================" << endl;
    
    return 0;
}