#include <iostream> 
#include <algorithm> // Necesitamos esto para las funciones max y min

using namespace std; // Asi no tenemos que escribir 'std::' siempre

int main()
{
    // Vamos a guardar los tres numeros que el usuario nos de.
    int num1, num2, num3;

    // Pedimos los numeros, uno por uno.
    cout << "Ingrese el primer numero: ";
    cin >> num1; 

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Encontrar el mayor 
    // Usamos la funcion max para simplificar la busqueda.
    int elMayor = max({num1, num2, num3});
    
    // Encontrar el menor
    // Hacemos lo mismo con min
    int elMenor = min({num1, num2, num3});

    // Mostramos los resultados de forma clara.
    cout << "\n--- Resultados ---" << endl; 
    cout << "De los tres numeros (" << num1 << ", " << num2 << ", " << num3 << "):" << endl;
    cout << "El numero mas grande (el mayor) es: " << elMayor << endl;
    cout << "El numero mas pequeno (el menor) es: " << elMenor << endl;

    return 0; // El programa termina correctamente.
}