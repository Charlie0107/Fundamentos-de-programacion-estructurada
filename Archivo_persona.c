#include <stdio.h>
#include <stdlib.h>

typedef struct persona
{
	unsigned long int id_persona;
	char nombre[150];
	char sexo;
	char direccion[50], religion[20], escolaridad[30];
	unsigned short int edad;
} Persona;

int main()
{
    Persona array_de_personas[10];
    char c;
    
    FILE *aarchivo;
    aarchivo = fopen("miarchivo.bin", "rb");
    if(aarchivo == NULL)
    {
    	printf("El archivo esta vacio\n");
    	for(int i=0; i<2; i++)
    	{
        array_de_personas[i].id_persona = i+1;
        printf("Introduzca su nombre completo:\n");
        fgets(array_de_personas[i].nombre, 99,stdin);
        
        printf("Introduzca el sexo de la persona [H/M]:\n");
        array_de_personas[i].sexo = getc(stdin);
        while ((c = getc(stdin)) != '\n' && c != EOF); //flush a la entrada
        
        printf("Introduzca la direccion:\n");
        fgets(array_de_personas[i].direccion, 99,stdin);
        
        printf("Introduzca la religion:\n");
        fgets(array_de_personas[i].religion, 49,stdin);
        
        printf("Introduzca la escolaridad:\n");
        fgets(array_de_personas[i].escolaridad, 49,stdin);
        
        printf("Introduzca la edad:\n");
        scanf("%hu", &array_de_personas[i].edad);
        while ((c = getc(stdin)) != '\n' && c != EOF); //flush a la entrada
       
    } aarchivo = fopen("miarchivo.bin", "wb");
   fwrite(array_de_personas, sizeof(Persona), 10, aarchivo);
   fclose(aarchivo);
   }else
   {
   	fread(array_de_personas, sizeof(Persona), 10, aarchivo)
   	
   	for (i=0; i<10; i++)
   	{
   		printf("%d\n", array_de_personas[i].id_persona);
   		printf("%s\n", array_de_personas[i].nombre);
   		printf("%c\n", array_de_personas[i].sexo);
   		printf("%s\n", array_de_personas[i].direccion);
   		printf("%s\n", array_de_personas[i].religion);
   		printf("%s\n", array_de_personas[i].escolaridad);
   		printf("%d\n", array_de_personas[i].edad);
        }
		
		
	}
	   fclose(aarchivo);
	   
//aarchivo = fopen("miarchivo.bin", "w");
//if(aarchivo == NULL)
//{
//printf("Error al abrir el archivo.\n");
//return(1);
//}

