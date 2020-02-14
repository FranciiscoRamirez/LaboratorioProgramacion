#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	char c;
 	printf("Enter Character: ");
 	c = getchar();
 	int a = (int) c;
 	if(c<=57 && c>=48)
	 {//Numerico
	 	printf("Es un caracter numerico\n");
	 }
	 else 
	 {
	 if(c<=90&&c>=65)
	 {
	 	//Alfabetico
	 	printf("Letra Mayuscula\n");
	 
	 }
	 else
	 {
	 if( c<=122&&c>=97){
	 	printf("Letra Minuscula \n");
	 
	 	}
	 	else
		 {
	 	printf("Es un simbolo\n");
		 }
	 }
	
	}
 	printf("Character entered: ");
 	printf("\n");
 	putchar(c);
	return 0;
	
}
