#include <iostream>
#include <stdio.h>

int main()
{
    int dia, mes;
    char d;
    printf("Dia\n");
    scanf_s("%d", &dia);
    printf("Mes\n");
    scanf_s("%d", &mes);
   
    switch (mes)

    {
    case 1:
        printf("Invierno\n");
        if (dia < 20)
            printf("Capricornio");
        else
            printf("Acuario");
        break;
    case 2:
        printf("Invierno\n");
        if (dia < 18)
            printf("Acuario");
        else
            printf("Piscis");
        break;
    case 3:
        if (dia < 21) {
            printf("Invierno\n");
            printf("Piscis\n");
        }
        else
            printf("Primavera\nAries");
        break;
    case 4:
        printf("Primavera\n");
        if (dia < 20)
            printf("Aries");
        else
            printf("Tauro");
        break;
    case 5:
        printf("Primavera\n");
        if (dia < 21)
            printf("Tauro");
        else
            printf("Geminis");
        break;
    case 6:
        if (dia < 21) {
            printf("Primavera\n");
            printf("Geminis");
        }
        else
            printf("Verano\nCancer");
        break;
    case 7:
        printf("Verano\n");
        if (dia < 23)
            printf("Cancer");
        else
            printf("Leo");
        break;
    case 8:
        printf("Verano\n");
        if (dia < 24)
            printf("Leo");
        else
            printf("Virgo");
        break;
    case 9:
        if (dia < 21)
            printf("Verano\n");
        else
            printf("Otono\n");
        if (dia < 23)
            printf("Virgo");
        else
            printf("Libra");
        break;
    case 10:
        printf("Otono\n");
        if (dia < 23)
            printf("Libra");
        else
            printf("Escorpion");
        break;
    case 11:
        printf("Otono\n");
        if (dia < 23)
            printf("Escorpion");
        else
            printf("Sagitario");
        break;
    case 12:
        if (dia < 21)
            printf("Otono\n");
        else
            printf("Invierno\n");
        if (dia < 22)
            printf("Sagitario");
        else
            printf("Capricornio");

        break;
    }


}