#include <stdio.h>

/* Prototipos de funciones */
double suma(double a, double b);   // Juan
double resta(double a, double b);  // Pedro
double multiplicacion(double a, double b); // María
double division(double a, double b); // Ana

/* Implementaciones iniciales (a rellenar por cada integrante) */
double suma(double a, double b) { return 0; }
double resta(double a, double b) { return 0; }
double multiplicacion(double a, double b) { return 0; }
double division(double a, double b) { return 0; }

/* Main de prueba */
int main(void) {
    printf("Suma: %.2f\n", suma(2, 3));
    printf("Resta: %.2f\n", resta(5, 2));
    printf("Multiplicación: %.2f\n", multiplicacion(3, 4));
    printf("División: %.2f\n", division(10, 2));
    return 0;
}
