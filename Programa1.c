#include <stdio.h>
#include <string.h>

// Prototipo de la función  
void imprimir(char s[]);

int main() {
    // Declaración de la cadena
    char nombre[] = "Facultad de Ingenieria";
    
    // Llamada a la función
    imprimir(nombre);

    return 0;
}

// Implementación de la función: Imprime el string de atrás hacia adelante
void imprimir(char s[]) {
    int tam;

    // Recorremos el arreglo desde la última posición válida hasta la cero
    for (tam = strlen(s) - 1; tam >= 0; tam--) {
        printf("%c", s[tam]);
    }

    printf("\n");
}
