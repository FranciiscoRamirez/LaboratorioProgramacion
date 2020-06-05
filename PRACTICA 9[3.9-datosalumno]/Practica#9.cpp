#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char students[][50]={"Prueba","Prueba","Prueba","Prueba","Prueba","Prueba","Prueba","Prueba","Prueba"};
	int i;
	int op=0;
	char cadena[20];
	int cont=1;

	
	int j;
	printf("Ingrese los siguientes datos:\n[1]: studentID\n[2]: firstName\n[3]: lastName\n[4]: birthDate\n[5]: school\n[6]: grade\n[7]: career\n[8]: gender\n\n");
	do{
	printf("Datos alumno %d\n",cont);
		for(i=0;i<9;i++)
		{	
			printf("Dato [%d]\n",i+1);	
			fflush(stdin);
			gets(cadena);
			strcpy(students[i],cadena);
		}
	
	printf("Datos Alumno%d\n",cont);
		for(i=0;i<9;i++)
		{	
			printf("Dato: %d %s\n",i+1,students[i]);	
	
		}
	
		printf("[1]=Agregar otro alumno  [Otro]= salir\n");
		scanf("%d",&op);
		if(op==1)
		{
			
			cont++;
			system("cls");
		}
	}while(op==1);
	


		
	return 0;
}
