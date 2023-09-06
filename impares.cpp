//encuentra los impares del hasta el numero indicado
#include <stdio.h>
#include <math.h>

int main() {
    int limite;
    
    printf("ingresa un numero entero positivo: ");
    scanf("%d", &limite);
    
    if (limite >= 0) {
        printf("los numeros impares son: %d:\n", limite);
        
        for (int i = 1; i <= limite; i += 2) {
            printf("%d ", i);
        }
        
        printf("\n");
    } else {
        printf("el numero ingresado no es positivo.\n");
    }
    
    return 0;
}
