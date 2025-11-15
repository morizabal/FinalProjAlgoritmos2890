## 1. Conversión de Hora (24h a 12h)##

Resumen del Ejercicio:
Este programa utiliza la función convertirHora para tomar una hora y un minuto en el formato militar o de 24 horas (donde las horas van de 0 a 23) y convertirlos al formato estándar de 12 horas, indicando si es AM (Ante Meridiem) o PM (Post Meridiem).

Tarde/Noche (13:xx a 23:xx): Se resta 12 a la hora para obtener el formato de 12 horas y se usa PM.

Formato: Los minutos se formatean para asegurar siempre dos dígitos (ej. 05).

### 2. Función para Decidir si un Número Entero es Capicúa###

Resumen del Ejercicio:
La función esCapicua (palíndromo numérico) determina si un número entero se lee de la misma manera de izquierda a derecha y de derecha a izquierda. La implementación funciona también para números negativos al tomar su valor absoluto.

Lógica Implementada:

Valor Absoluto: Se utiliza el valor absoluto del número de entrada para ignorar el signo negativo (si existe).

Inversión del Número: Se recorre el número original dígito por dígito utilizando el operador módulo (% 10) y la división entera (/ 10).

Construcción del Reverso: Cada dígito extraído se utiliza para construir un nuevo número (reverso = reverso * 10 + digito).

Comparación: El número original (absoluto) se compara con el número invertido. Si son iguales, el número es capicúa.


## 3. Función para Decidir si un Número Entero Positivo es Primo###

Resumen del Ejercicio:
La función esPrimo verifica si un número entero positivo dado es un número primo. Un número primo es aquel que solo es divisible por 1 y por sí mismo.

Lógica Implementada:

Casos Base: Se manejan los casos especiales:

Números menores o iguales a 1 NO son primos.

El número 2 SÍ es primo.

Exclusión de Pares: Todos los números pares mayores que 2 NO son primos, lo que permite un rápido descarte.

