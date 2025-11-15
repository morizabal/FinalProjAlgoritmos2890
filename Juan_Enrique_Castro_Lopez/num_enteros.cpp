// Nombre del estudiante: Juan Enrique de Jesus Castro Lopez 
// Ejercicio #: 3
// Nombre del ejercicio: Convertir Numeros en Palabras a Enteros
// Descripcion: Este programa convierte numeros de tres digitos escritos en palabras a su representacion numerica entera
// Entrada esperada: Numero escrito en palabras (ej: "doscientos veinticinco.")
// Salida esperada: Numero entero (ej: 225)

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <cctype>

using namespace std;

// Diccionario de numeros basicos
map<string, int> crearDiccionario() {
    map<string, int> numeros;
    
    // Unidades
    numeros["cero"] = 0; numeros["uno"] = 1; numeros["dos"] = 2;
    numeros["tres"] = 3; numeros["cuatro"] = 4; numeros["cinco"] = 5;
    numeros["seis"] = 6; numeros["siete"] = 7; numeros["ocho"] = 8;
    numeros["nueve"] = 9;
    
    // Decenas especiales
    numeros["diez"] = 10; numeros["once"] = 11; numeros["doce"] = 12;
    numeros["trece"] = 13; numeros["catorce"] = 14; numeros["quince"] = 15;
    numeros["dieciseis"] = 16; numeros["diecisiete"] = 17;
    numeros["dieciocho"] = 18; numeros["diecinueve"] = 19;
    numeros["veinte"] = 20; numeros["veintiuno"] = 21;
    numeros["veintidos"] = 22; numeros["veintitres"] = 23;
    numeros["veinticuatro"] = 24; numeros["veinticinco"] = 25;
    numeros["veintiseis"] = 26; numeros["veintisiete"] = 27;
    numeros["veintiocho"] = 28; numeros["veintinueve"] = 29;
    
    // Decenas
    numeros["treinta"] = 30; numeros["cuarenta"] = 40;
    numeros["cincuenta"] = 50; numeros["sesenta"] = 60;
    numeros["setenta"] = 70; numeros["ochenta"] = 80;
    numeros["noventa"] = 90;
    
    // Centenas
    numeros["cien"] = 100; numeros["doscientos"] = 200;
    numeros["trescientos"] = 300; numeros["cuatrocientos"] = 400;
    numeros["quinientos"] = 500; numeros["seiscientos"] = 600;
    numeros["setecientos"] = 700; numeros["ochocientos"] = 800;
    numeros["novecientos"] = 900;
    
    return numeros;
}

int convertirPalabraANumero(const string& texto) {
    map<string, int> diccionario = crearDiccionario();
    stringstream ss(texto);
    string palabra;
    int numero = 0;
    int temp = 0;
    
    while (ss >> palabra) {
        // Convertir a minusculas para hacer la busqueda case-insensitive
        for (char &c : palabra) {
            c = tolower(c);
        }
        
        // Remover comas y puntos si existen
        if (!palabra.empty() && (palabra.back() == ',' || palabra.back() == '.')) {
            palabra.pop_back();
        }
        
        if (diccionario.find(palabra) != diccionario.end()) {
            int valor = diccionario[palabra];
            
            if (valor >= 100) {
                // Es una centena
                numero += temp;
                temp = valor;
            } else if (valor >= 10) {
                // Es una decena
                temp += valor;
            } else {
                // Es una unidad
                temp += valor;
            }
        } else if (palabra == "y") {
            // Ignorar la conjuncion "y"
            continue;
        } else {
            cout << "Palabra no reconocida: " << palabra << endl;
            return -1;
        }
    }
    
    numero += temp;
    return numero;
}

int main() {
    string entrada;
    
    cout << "=== CONVERSOR DE NUMEROS EN PALABRAS A ENTEROS ===" << endl;
    cout << "Instrucciones:" << endl;
    cout << "- Escriba el numero en palabras (ej: doscientos veinticinco)" << endl;
    cout << "- Termine la entrada con un punto (.)" << endl;
    cout << "- Escriba 'salir' para terminar el programa" << endl;
    cout << "==================================================" << endl;
    
    while (true) {
        cout << "\nIngrese el numero en palabras: ";
        getline(cin, entrada);
        
        // Verificar si el usuario quiere salir
        if (entrada == "salir" || entrada == "Salir") {
            break;
        }
        
        // Verificar que termine con punto
        if (entrada.empty() || entrada.back() != '.') {
            cout << "Error: La entrada debe terminar con un punto (.)" << endl;
            continue;
        }
        
        // Remover el punto final
        entrada.pop_back();
        
        // Convertir y mostrar resultado
        int resultado = convertirPalabraANumero(entrada);
        
        if (resultado != -1) {
            cout << "=== RESULTADO ===" << endl;
            cout << "Texto ingresado: " << entrada << endl;
            cout << "Numero convertido: " << resultado << endl;
            cout << "==================" << endl;
        } else {
            cout << "Error en la conversion. Verifique la escritura." << endl;
        }
    }
    
    cout << "Programa terminado. ¡Hasta luego!" << endl;
    return 0;
}