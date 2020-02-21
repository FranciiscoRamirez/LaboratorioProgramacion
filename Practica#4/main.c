#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float n1,n2,r;
	char op;
	printf("Ingresa numero1: ");
	scanf("%f",&n1);
	printf("Ingresa numero2: ");
	scanf("%f",&n2);
	
	printf("[+ - * /]: \n");
	scanf(" %c",&op);
	switch(op){
		case '+'://S0uma
			r=n1+n2;
			printf("%.2f + %.2f = %.2f",n1,n2,r);
		break;
		case '-'://Resta
			r=n1-n2;
			printf("%.2f + %.2f = %.2f",n1,n2,r);
		break;
		case'*'://Multiplicacion
			r=n1*n2;
			printf("%.2f + %.2f = %.2f",n1,n2,r);
		break;
		case '/'://Division
			r=n1/n2;
			printf("%.2f / %.2f = %.2f",n1,n2,r);
		break;
		default:
			printf("Ingresa una opcion valida");
	}
	
	return 0;
}
