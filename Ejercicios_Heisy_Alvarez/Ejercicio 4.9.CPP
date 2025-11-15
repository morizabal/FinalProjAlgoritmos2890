
// Heisy Julissa Alvarez Monteros
// Ejercicio #: 4.9
// Nombre del ejecicio: Evaluacion en Corto Circuito de expreciones Logicas
// Descripcion:  Calculo de la Hipotenusa y formula del teorema de Pitagoras. 
// Entrada esperada: Introduce los lados 5 y 6 Hipotenusa = 7.81025 Angulo = 39.8056
// Salida esperada: Angulo = 50.1944 

#include <iostream>
#include <cmath>
#include <cstdlib>
#define pi 3.141592

using namespace std;

int main(int argc, char *argv[]) {
    // Declaración de variables: a y b para catetos, h para hipotenusa, angulo para el ángulo opuesto a 'a'.
    float a, b, h, angulo;

    // Solicitud de entrada de datos
    cout << "Introduce los lados (catetos) ";
    cin >> a >> b;

    // Verificación de la entrada (los lados deben ser positivos)
    if ((a <= 0) || (b <= 0)) {
        cout << "No solucion (Los lados deben ser mayores que cero)\n";
    } else {
        // Cálculo de la hipotenusa (Teorema de Pitágoras)
        h = sqrt(a * a + b * b);

        // Cálculo del primer ángulo (opuesto al lado 'a')
        // asin(a/h) devuelve radianes. Se convierte a grados multiplicando por (180 / pi).
        angulo = 180 / pi * asin(a / h); // ángulo en grados

        // Salida de resultados
        cout << "Hipotenusa = " << h << endl;
        cout << "Angulo (opuesto a " << a << ") = " << angulo << " grados" << endl;
        // El tercer ángulo se calcula como 90 - angulo (ya que la suma de los agudos es 90 grados)
        cout << "Otro angulo (opuesto a " << b << ") = " << 90 - angulo << " grados" << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
