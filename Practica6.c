#include<stdio.h>

int main()
{
    int i =1;
    int num,n;
    int sum = 0;
    printf("Ingresa el num de elementos");
    scanf("%d",&n);
    do{
       printf("Ingresa el numero: \n");
       scanf("%d",&num);
       sum = sum+num;
   i++;
    }while (i<=n);
    printf("La suma de los elementos es:%d",sum);
    return 0;
}

