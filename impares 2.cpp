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

    printf("Ingresa un n�mero entero positivo: ");
    scanf("%d", &limite);

    if (limite >= 0) {
        printf("Los n�meros impares son: ");
        imprimirImpares(limite);
        printf("\n");
    } else {
        printf("El n�mero ingresado no es positivo.\n");
    }

    return 0;
}

