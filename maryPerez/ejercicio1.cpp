// Nombre del estudiante: Maria perez
// Ejercicio #: 1
// Nombre del ejercicio: Conversor de Hora (24h a 12h)
// Descripción: Este programa lee la hora del día en notación de 24 horas y la muestra en notación de 12 horas (AM/PM).
// Entrada esperada: Dos números enteros, la hora (0-23) y los minutos (0-59).
// Salida esperada: La hora convertida al formato de 12 horas (ej. 2:30 PM).

#include <iostream>
#include <string>
#include <iomanip> // Para std::setw y std::setfill

/**
 * Programa para convertir la hora de formato 24 horas a 12 horas.
 * Lee la hora y los minutos, y los muestra en formato 12h (AM/PM).
 */
int main() {
  
    int horas, minutos;

    // 1. Leer la hora del día
    std::cout << "--- Conversor de Hora (24h a 12h) ---" << std::endl;
    std::cout << "Introduce la hora (0-23): ";
    std::cin >> horas;

    std::cout << "Introduce los minutos (0-59): ";
    std::cin >> minutos;

    // 2. Validar la entrada
    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) {
        std::cerr << "Error: Hora o minutos fuera de rango." << std::endl;
        return 1; // Terminar con código de error
    }

    // 3. Convertir la hora
    int horas_12 = horas;
    std::string periodo = "AM";

    if (horas == 0) {
        // Medianoche
        horas_12 = 12;
    } else if (horas == 12) {
        // Mediodía
        periodo = "PM";
    } else if (horas > 12) {
        // Tarde/Noche
        horas_12 = horas - 12;
        periodo = "PM";
    }
    // Las horas de 1 a 11 (AM) no necesitan cambios

    // 4. Mostrar la respuesta
    std::cout << "\nLa hora en formato de 12 horas es: ";
    std::cout << horas_12 << ":" 
              << std::setw(2) << std::setfill('0') << minutos // Rellena con 0 (ej. 7:05)
              << " " << periodo << std::endl;

    return 0;
}