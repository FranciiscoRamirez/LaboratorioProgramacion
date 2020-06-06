#include<stdio.h>
#include<string.h>
void Input(int *punt);
void Output(int*punt);
struct Datos{
	char id[20];
	char name[30];
	char lastname[30];
	char birth[30];
	char school[30];
	char grade[30];
	char career[30];
	char gender[30];
}alumnos[10];
int main()
{
	int n;
	int *punt;
	printf("Ingresa los alumnos a registrar:  \n\n");
	scanf("%d",&n);
	punt=&n;
	Input(punt);
	Output(punt);

	return 0;
}

void Input(int *punt)
{
	int i;
	for(i=0;i<*punt;i++)
	{
		printf("ºAlumno %dº\n",i+1);
		printf("Ingresa el id:\n");
		fflush(stdin);
		gets(alumnos[i].id);
		printf("Ingresa tu nombre:\n");
		fflush(stdin);
		gets(alumnos[i].name);
		printf("Ingresa tu apellido:\n");
		fflush(stdin);
		gets(alumnos[i].lastname);
		printf("Ingresa tu fecha de cumple:\n");
		fflush(stdin);
		gets(alumnos[i].birth);
		printf("Ingresa tu escuela:\n");
		fflush(stdin);
		gets(alumnos[i].school);
		printf("Ingresa tu grado :\n");
		fflush(stdin);
		gets(alumnos[i].grade);
		printf("Ingresa tu carrera:\n");
		fflush(stdin);
		gets(alumnos[i].career);
		printf("Ingresa tu genero:\n");
		fflush(stdin);
		gets(alumnos[i].gender);
	}
	
}
void Output(int *punt)
{
	int i;
	for(i=0;i<*punt;i++)
	{
		printf("Datos alumno %d\n",i+1);
		printf("Id: %s\n",alumnos[i].id);
		printf("Nombre: %s\n",alumnos[i].name);
		printf("Apellido: %s\n",alumnos[i].lastname);
		printf("Fecha cumple: %s\n",alumnos[i].birth);
		printf("Escuela: %s\n",alumnos[i].school);
		printf("Grado: %s\n",alumnos[i].grade);
		printf("Carrera: %s\n",alumnos[i].career);
		printf("Genero: %s\n\n",alumnos[i].gender);	
	}
}
