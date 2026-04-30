#include <stdio.h>

// 1. Prototipo o firma de la función
void sumar();

// 2. Función principal
int main() {
    sumar(); // Llamado de la función
    return 0;
}

// 3. Implementación o definición de la función
void sumar() {
    // Variables locales: solo existen dentro de esta función
    int z;
    int x = 5;
    int y = 10;

    z = x + y;

    printf("El resultado de la suma es: %i\n", z);
}
