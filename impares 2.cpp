//encuentra los impares
#include <stdio.h>

void imprimirImpares(int n) {
    if (n < 1) {
        return;
    }

    imprimirImpares(n - 1);

    if (n % 2 != 0) {
        printf("%d ", n);
    }
}

int main() {
    int limite;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &limite);

    if (limite >= 0) {
        printf("Los números impares son: ");
        imprimirImpares(limite);
        printf("\n");
    } else {
        printf("El número ingresado no es positivo.\n");
    }

    return 0;
}

