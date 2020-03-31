#include <stdio.h>
#include <iostream>
#include <string.h>

int main()
{
	int i, j;
	char longitud;
	char cadena[50];
	char temporal;

	printf("Introduce una palabra: "); 
	scanf_s(cadena);
	longitud = strrev(cadena);  
	for (i = 0, j = longitud - 1; i < longitud / 2; i++, j--) 
	{
		temporal = cadena[i];
		cadena[i] = cadena[j];
		cadena[j] = temporal;
	}



	int* ptr;			
	int vector[50];	
	int P;			

	ptr = &vector[0];	
	ptr += 10;			

	for (P = 0; P <= 10; P++)
	{
		ptr = 1; 

			ptr++;	

		printf("Resultado: %s\n", cadena);

	}
}