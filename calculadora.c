//############## calculadora.c ##############
#include <stdio.h>

// Prototipos
int suma(int, int);
int resta(int, int);      // Quitamos el static para que sea global
int producto(int, int);
int cociente(int, int);   // Quitamos el static por ahora

int main() {
    printf("5 + 7 = %i\n", suma(5, 7));
    printf("9 - 77 = %d\n", resta(9, 77));
    printf("6 * 8 = %i\n", producto(6, 8));
    printf("7 / 2 = %d\n", cociente(7, 2));
    
    return 0;
}

// --- Definiciones de las funciones ---

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int producto(int a, int b) {
    return a * b;
}

int cociente(int a, int b) {
    if (b == 0) {
        printf("Error: División por cero\n");
        return 0;
    }
    return a / b;
}
