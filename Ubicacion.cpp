#include <stdio.h>
#include <stdlib.h>
int main()
{
    float grados, minutos, segundos, grados2, minutos2, segundos2, val1, val2;
    char res, res2;
    do {
        printf("N para NORTE, y S para SUR \n");
        printf("De manera consecutiva mete los grados luego los minutos y al fnal los segundos");

        scanf_s("%c", &res);
        printf("Latitud [N/S]: %c", res);
        printf("\n");

        scanf_s("%f", &grados);
        printf("Grados [0-59]: %f", grados);
        printf("\n");

        scanf_s("%f", &minutos);
        printf("Minutos [0-59]: %f", minutos);
        printf("\n");

        scanf_s("%f", &segundos);
        printf("Segundos [0-59.9]: %f", segundos);
        printf("\n");

    } while (grados < 0 || minutos < 0 || segundos < 0);
    do {
        printf("pon E para ESTE, y O para OESTE \n");
        printf("De manera consecutiva mete los grados luego los minutos y al fnal los segundos");
        scanf_s("%c", &res2);
       
        printf("Longitud [E/O]: %c", res2);
        printf("\n");
        scanf_s("%f", &grados2);
       
        printf("Grados [0-59]: %f", grados2);
        printf("\n");
        
        scanf_s("%f", &minutos2);
        printf("Minutos [0-59]: %f", minutos2);
        printf("\n");
       
        scanf_s("%f", &segundos2);
        printf("Segundos [0-59.9]: %f", segundos2);
        printf("\n");
    } while (grados2 < 0 || minutos2 < 0 || segundos2 < 0);
    if (res == 2)
    {
        val1 = -((grados)+(minutos / 60) + (segundos / 3600));
    }
    else
    {
        val1 = ((grados)+(minutos / 60) + (segundos / 3600));

    }
    if (res2 == 2)
    {
        val2 = -((grados2)+(minutos2 / 60) + (segundos2 / 3600));
    }
    else
    {
        val2 = ((grados2)+(minutos2 / 60) + (segundos2 / 3600));
    }
    printf("Https://maps.google.com/maps/place/ %f, %f ", val1, val2);

    return 0;
}
