
// Nombre del estudiante: Brandy Denilson Vásquez Mérida
// Ejercicio #: 1
// Nombre del ejercicio: Día del año según la fecha
// Descripción: Este programa solicita una fecha en formato dd/mm/aaaa y calcula el número del día que representa dentro del año.
// Entrada esperada: Una fecha con el formato dd/mm/aaaa (por ejemplo, 30/12/1999).
// Salida esperada: El número de día correspondiente dentro del año.

#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string fecha;
    int dia, mes, anio, numeroDelDia = 0;
    bool esBisiesto = false;
    int diasDelMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingrese la fecha (dd/mm/aaaa): ";
    cin >> fecha;  // Ejemplo: 21/05/2005

    // Separar usando substr
    dia = stoi(fecha.substr(0, 2));   // "21"
    mes = stoi(fecha.substr(3, 4));   // "05"
    anio = stoi(fecha.substr(6, 9));  // "2005"

    cout << "Día: " << dia << endl;
    cout << "Mes: " << mes << endl;
    cout << "Año: " << anio << endl;
    
    if ((dia < 1 || dia > 31) || (mes < 1 || mes > 12) || (anio < 1))
    {
        cout << "Digitaste una fecha inválida" << endl;
        return 0;
    }
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
    {
        esBisiesto = true;
        diasDelMes[2] = 29;
    }

    for(int i = 0; i < mes - 1; i++){

        numeroDelDia += diasDelMes[i];
        /*cout << "Numero de dia:" << diasDelMes[i] << endl;*/
    }
    
    numeroDelDia += dia;
    cout << "\nEstas en el dia numero: " << numeroDelDia << " del año: " << anio << endl;
}
