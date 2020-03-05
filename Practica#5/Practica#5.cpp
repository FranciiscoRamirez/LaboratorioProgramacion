#include<stdio.h>
int main(){
	
	int num,n,i=1;
	int sum=0;
	
	printf("Ingresa numero de elementos: \n");
	scanf("%d",&num);
	while(i<=num){
	printf("Ingresa el numero%d: \n",i);
	scanf("%d",&n);
	sum=sum+n;
	i++;
	}
	printf("Suma de los elementos: %d",sum);
	
	
	return 0;
}
