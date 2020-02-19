#include <iostream>
#include <string.h>

int main()
{
    struct estructura_persona
    {
        char nombre[30];
        char direccion[100];
        char religion[50];
        char sexo[10];
        int edad;
        int id;
        char escolaridad[20];
    };

    struct estructura_persona persona;

    int main();
    {

        printf_s("Escribe el nombre de la persona: ");
        fgets(persona.nombre, 30, stdin);

        printf_s("Escribe la direccion de la persona: ");
        fgets(persona.direccion, 100, stdin);

        printf_s("Escribe la religion de la persona: ");
        fgets(persona.religion, 50, stdin);

        printf_s("Escribe el sexo de la persona: ");
        fgets(persona.sexo, 50, stdin);

        printf_s("Escribe la escolaridad de la persona: ");
        fgets(persona.escolaridad, 20, stdin);

        printf_s("Escribe la edad de la persona: ");
        scanf_s("%d", &persona.edad);

        printf_s("Escribe la id: ");
        scanf_s("%d", &persona.id);

        printf_s("Mi persona %s su direccion es %s su religion es %s\n,  su sexo es %s y su edad es %d la id  es %d\n , y la escolaridad es %s \n", persona.nombre,
            persona.direccion, persona.religion, persona.sexo, persona.edad, persona.id, persona.escolaridad);

    }
};

