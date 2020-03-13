#include<stdio.h>
int main(){
	int n,i,v;
	int A[100];
	printf("Ingresa el numero de elementos:\n ");
	scanf("%d",&n);
	if(n<100&&n>0)
{
	
	for(i=0;i<n;i++)
	{
		printf("Ingresa el valor:%d \n",i+1);
		scanf("%d",&v);
		if(!(v%2==0)){
		 printf("El numero %d es primo\n",i);
		 A[i]=v;
		}
		else{
			A[i]="";
		}
		
		
		
	}
	for(i=0;i<n;i++){
	 printf("Posicion[%d] y el numero es:%d\n ",i,A[i]);
	}
	}else{
		printf("Ingresa un valor menor o igual a 100");
	}
		
	
	return 0;
}
