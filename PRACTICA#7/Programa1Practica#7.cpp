#include<stdio.h>
int main(){
	int n,i,b;
	printf("Ingresa el numero de base:\n");
	scanf("%d",&b);
	printf("Ingresa el numero de multiplos\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d * %d = %d \n",b,i,b*i);
		
		
	}
	return 0;
}
