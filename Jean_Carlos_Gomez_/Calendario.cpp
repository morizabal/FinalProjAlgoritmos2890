// Nombre del estudiante: Jean Carlos Gomez Escobar
// Ejercicio #: 2
// Nombre del ejercicio: Formato Calendario
// Descripción: Este programa solicita al usuario ingresar un numero de un mes (1-12) y su respectivo año para visualizar un formato calendario de los dias que conforma cierto mes ingresado
// Entrada esperada: Un número de un mes del año y sus respectivos dias de la semana en el mes
// Salida esperada: La Visualizacion en formato calendario del mes y año ingresado .




#include <iostream>
using namespace std;

// Función para determinar si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Función para obtener el número de días en un mes
int diasDelMes(int mes, int anio) {
    int diasPorMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (mes == 2 && esBisiesto(anio)) {
        return 29;
    }
    return diasPorMes[mes - 1];
}

// Función para calcular el día de la semana de una fecha (Zeller modificado)
// Devuelve 0 = domingo, 1 = lunes, ..., 6 = sábado
int diaSemana(int dia, int mes, int anio) {
    if (mes < 3) {
        mes += 12;
        anio -= 1;
    }
    int k = anio % 100;
    int j = anio / 100;
    int h = (dia + 13*(mes + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return (h + 6) % 7; // Ajuste para que lunes sea 1
}

// Función para mostrar el calendario del mes
void mostrarCalendario(int mes, int anio) {
    cout << " L  M  M  J  V  S  D" << endl;

    int primerDia = diaSemana(1, mes, anio); // Día de la semana del 1er día
    int dias = diasDelMes(mes, anio);

    // Ajuste para que lunes sea posición 0
    int espacioInicial = (primerDia == 0) ? 6 : primerDia - 1;

    // Imprimir espacios iniciales
    for (int i = 0; i < espacioInicial; ++i) {
        cout << "   ";
    }

    // Imprimir los días del mes
    for (int dia = 1; dia <= dias; ++dia) {
        cout << (dia < 10 ? " " : "") << dia << " ";
        if ((dia + espacioInicial) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

// Función principal
int main() {
	
	cout<<"Bienvenido al Programa Calendario"<<endl;
	cout<<"--Ingresa un numero del mes de la Anualidad y ingresa la Anualidad--\n"<<endl;
    int mes, anio;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese la anualidad: ";
    cin >> anio;
cout<<" "<<endl;
    cout<<"El Calendario del mes"<<endl;
    mostrarCalendario(mes, anio);
    return 0;
}
