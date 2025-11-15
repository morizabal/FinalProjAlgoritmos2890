// Nombre del estudiante: Jean Carlos Gomez Escobar
// Ejercicio #: 1
// Nombre del ejercicio: Formato Fecha dd/mm/aa
// Descripción: Este programa solicita al usuario ingresar un numero de Dia, Mes y Año, visualizandolo en formato dd/mm/aa
// Entrada esperada: Numeros ingresados para el Dia, mes y el año.
// Salida esperada: La Visualizacion de la Fecha en el formato indicado 


#include <iostream>  // Librería para entrada y salida estándar
using namespace std;

// Función que recibe día, mes y año, y muestra la fecha en formato dd/mm/aa
void mostrarFecha(int dia, int mes, int anio) {
    // Extrae los dos últimos dígitos del año
    int anioCorto = anio % 10000;

    // Muestra la fecha en el formato solicitado
    cout << dia << "/" << mes << "/" << anioCorto << endl;
}

// Función principal del programa
int main() {
    int dia, mes, anio;


    cout<<"BIENVENIDO AL PROGRAMA \n"<<endl;
    // Solicita al usuario que ingrese el día, mes y año
    cout << "Ingrese el dia: ";
    cin >> dia;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese la Anualidad: ";
    cin >> anio;

cout<<" \n"<<endl;
    // Llama a la función para mostrar la fecha en el formato deseado
    cout << "La fecha en formato dd/mm/aa es: \n";
    mostrarFecha(dia, mes, anio);

    return 0; // Fin del programa
}
