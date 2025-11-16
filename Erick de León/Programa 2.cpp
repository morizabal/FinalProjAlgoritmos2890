#include <iostream>
#include <string>
#include <map> // Usaremos un mapa para guardar las palabras y sus valores numericos

using namespace std; // Usamos esto para un codigo mas limpio

int main()
{
    // Este mapa o diccionario nos ayuda a convertir las palabras en numeros.
    // La palabra es la clave, el numero es el valor.
    map<string, int> valores = {
        {"uno", 1}, {"dos", 2}, {"tres", 3}, {"cuatro", 4}, {"cinco", 5},
        {"seis", 6}, {"siete", 7}, {"ocho", 8}, {"nueve", 9}, {"cero", 0}
    };

    string palabraCentenas, palabraDecenas, palabraUnidades;
    int resultadoEntero;

    cout << "Conversor de Numero de 3 Digitos (Palabra -> Entero)" << endl;
    cout << "Ingresa la centena : ";
    cin >> palabraCentenas;

    cout << "Ingresa la decena : ";
    cin >> palabraDecenas;

    cout << "Ingresa la unidad : ";
    cin >> palabraUnidades;

    // Buscamos el valor de cada palabra en nuestro mapa
    int valorC = valores[palabraCentenas];
    int valorD = valores[palabraDecenas];
    int valorU = valores[palabraUnidades];

    // Calculamos el numero entero
    // Multiplicamos por 100, 10 y 1 para formar el numero.
    resultadoEntero = (valorC * 100) + (valorD * 10) + valorU;

    // Mostramos el resultado final
    cout << "\nEl valor en palabras ingresado es: " 
              << palabraCentenas << palabraDecenas << palabraUnidades << endl;
    cout << "Su valor entero es: " << resultadoEntero << endl;

    return 0;
}