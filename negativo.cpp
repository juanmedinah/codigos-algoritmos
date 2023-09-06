//recibe numeros hasta un negativo
#include <stdio.h>
#include <math.h>

int main()
{
	int i=1;
	int a=0;
	
	while (i==1)
	{
	
	printf("escribe el numero: " );
	scanf("%d", &a);
	
	if (a>0){
	printf("es positivo\n");
	}
	else
	if (a<0){
	printf("es negativo");
	break;
	}
    }
	
	return 0;
}
