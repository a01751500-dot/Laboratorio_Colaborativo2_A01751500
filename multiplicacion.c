#include <stdio.h>

int multiplicacion(int a, int b) {
    return a * b;
}

int main() {
    int a, b;

    printf("Ingresa el primer numero: ");
    scanf("%d", &a);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);

    printf("Resultado de la multiplicacion: %d\n", multiplicacion(a, b));

    return 0;
}
// Funcion multiplicacion revisada por el supervisor
