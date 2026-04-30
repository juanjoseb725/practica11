#include <stdio.h>

// 1. Variable global: accesible desde cualquier parte del programa
int resultado;

// 2. Prototipo de la función
void multiplicar();

int main() {
    // Se llama a la función que modifica la variable global
    multiplicar();

    // Se imprime el valor que quedó guardado en la variable global
    printf("El resultado de la multiplicacion es: %i\n", resultado);

    return 0;
}

// 3. Implementación de la función
void multiplicar() {
    // Al no estar declarada aquí, el programa busca 'resultado' en el ámbito global
    resultado = 5 * 4;
}
