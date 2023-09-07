//encuentra los impares
#include <stdio.h>

int main() {
    int limite;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &limite);

    if (limite >= 0) {
        printf("Los números impares son: ");
        int numero = 1;

        while (numero <= limite) {
            if (numero % 2 != 0) {
                printf("%d ", numero);
            }
            numero++;
        }

        printf("\n");
    } else {
        printf("El número ingresado no es positivo.\n");
    }

    return 0;
}


