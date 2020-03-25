#include <stdio.h>


/* Pedir elementos de una matriz 3x3 y multiplicarla por un escalar*/

int main() {
	int A[3][3];
	int i,j,num;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingresa el elemento [%d][%d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("Ingresa el numero a multiplicar: \n");
	scanf("%d",&num);
	
	printf("Matriz original\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);
			
		}
			printf("\n");
	}
	printf("Escalar: %d\n\n",num);
	printf("Matriz multiplicada\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]*num);
			
		}
			printf("\n");
	}
	
	return 0;
}
