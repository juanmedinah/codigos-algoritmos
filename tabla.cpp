//da las tablas de multiplicar
#include <stdio.h>
#include <math.h>

int main()
{
	int i=1;
	int a;
	
	while (i==1)
	{
	
	printf("ingrese el numero del 1 al 10 para obtener su tabla de multiplicar: ");
	scanf("%d", &a);
	
	switch (a)
	{
		case 1:
		printf("1,2,3,4,5,6,7,8,9,10\n");
		break;
		
		case 2:
		printf("2,4,6,8,10,12,14,16,18,20\n");
		break;
		
		case 3:
		printf("3,6,9,12,15,18,21,24,27,30\n");
		break;
		
		case 4:
		printf("4,8,12,16,20,24,28,32,36,40\n");
		break;
		
		case 5:
		printf("5,10,15,20,25,30,35,40,45,50\n");
		break;
		
		case 6:
		printf("6,12,18,24,30,36,42,48,54,60\n");
		break;
		
		case 7:
		printf("7,14,21,28,35,42,49,56,63,70\n");
		break;
		
		case 8:
		printf("8,16,24,32,40,48,56,64,72,80\n");
		break;
		
		case 9:
		printf("9,18,27,36,45,54,63,72,81,90\n");
		break;
		
		case 10:
		printf("10,20,30,40,50,60,70,80,90,100\n");
		break;
			i=10;
	}
    }
	return 0;
}

