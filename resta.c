#include <stdio.h>

int resta(int a, int b) {
    return a - b;
}

int main() {
    int a, b;

    printf("Ingresa el primer numero: ");
    scanf("%d", &a);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);

    printf("Resultado de la resta: %d\n", resta(a, b));

    return 0;
}

