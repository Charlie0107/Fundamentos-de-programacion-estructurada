#include<stdio.h>
#include<string.h>

int main()
{
	char palabra[80];
	int y = 0, x = 0, espalindromo = 1;
	printf("Escribe una palabra: ");
	scanf_s(palabra);

	x = strlen(palabra);
	y = 0; x = x - 1;
	while (y < x)
	{

		if (palabra[y++] = palabra[x--]) 
			espalindromo = 0; 
	}

	if (espalindromo)
		printf("Es palindromo\n");
	else
		printf("No es palindromo\n");
}


	