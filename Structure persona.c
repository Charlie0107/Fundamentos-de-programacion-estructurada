#include <stdio.h>
#include <stdlib.h>

typedef struct persona
{
	unsigned long int id_persona;
	char nombre[150];
	char sexo;
	char direccion[50], religion[20], escolaridad[30];
	unsigned short int edad;
} 

Persona;

int main()
{
    Persona array_de_personas[10];
	Persona identificacion;
    int cont = 1;
    char c;
    
    FILE *aarchivo;

    for(int i = 0; i < 10; i++){
        array_de_personas[i].id_persona = cont;
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
        cont++;
    } aarchivo = fopen("Structure.bin", "wb");
    
    if(aarchivo == NULL)
    {
        printf("No se puede abrir el archivo.\n");
        return(1);
    }

    fwrite(array_de_personas, sizeof(Persona), 10, aarchivo);
	fclose(aarchivo);
}
