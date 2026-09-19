#include <stdio.h>

int main() {
    float a, b, resultado;

    printf("Ingresa el primer numero: ");
    scanf("%f", &a);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &b);

    if (b != 0) {
        resultado = a / b;
        printf("La division es: %.2f\n", resultado);
    } else {
        printf("No se puede dividir entre cero.\n");
    }

    return 0;
}

// Funcion division revisada por el supervisor

