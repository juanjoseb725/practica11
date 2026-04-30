#include <stdio.h>

// Prototipo de la función
void llamarFuncion();

int main() {
    // El ciclo ejecutará la función 5 veces
    for (int j = 0; j < 5; j++) {
        llamarFuncion();
    }

    return 0;
}

// Implementación de la función
void llamarFuncion() {
    /* 
       'static' hace que la variable se inicialice solo UNA vez.
       Su valor se guarda en el segmento de datos del programa, 
       no en la pila (stack) de la función.
    */
    static int numVeces = 0;

    // Incrementamos antes de imprimir
    printf("Esta funcion se ha llamado %d veces.\n", ++numVeces);
}
