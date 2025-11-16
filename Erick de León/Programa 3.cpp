#include <iostream>

using namespace std;

int main()
{
    // Guardaremos el dia, el mes y el anio.
    int dia, mes, anio;
    
    // Arreglo con los dias de cada mes. Febrero tiene 28 por defecto.
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Este sera nuestro resultado.
    int diaDelAnio = 0;

    cout << "Calculadora de Dia del Anio" << endl;
    cout << "Ingrese la fecha (DIA MES ANIO, ej: 30 12 1999): ";
    
    // Leemos la fecha
    cin >> dia >> mes >> anio;

    // Verificamos si es un anio bisiesto
    // Usamos la regla del anio bisiesto
    bool esBisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);

    // Si es bisiesto, Febrero (mes 2) cambia a 29 dias.
    if (esBisiesto) {
        diasPorMes[2] = 29;
    }
    
    // Sumamos los dias de los meses que YA PASARON
    // Recorremos hasta el mes anterior al ingresado.
    for (int i = 1; i < mes; ++i) 
    {
        // Agregamos los dias de ese mes completo
        diaDelAnio = diaDelAnio + diasPorMes[i];
    }
    
    //Sumamos los dias del mes ACTUAL
    // Agregamos el numero de dia
    diaDelAnio = diaDelAnio + dia;
    
    //Mostramos el resultado final
    cout << "\nLa fecha ingresada es: " << dia << "/" << mes << "/" << anio << endl;
    cout << "El numero de dia correspondiente del anio es: " << diaDelAnio << endl;

    return 0;
}