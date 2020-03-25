#include <stdio.h>
#define mx 40

int main(){
   
    int carpetas, c, numero, fin, suma, eliminado, r, resultado;
    
    
    char ext[mx];

    printf("Obten el largo de la carpeta: ");

    fgets(ext, mx, stdin);

    printf("Dame el numero de carpetas: ");
   
    scanf_s("%d", &carpetas);
  
    printf("\n");


    for (c = 1; c < carpetas; c++)
    {
        printf("\nNombre de la %da carpeta %s. ", c, ext);
        
        scanf_s("%d", &eliminado);
    }

    printf("\nNombre de la %da carpeta %s.  ", c, ext);
   
    scanf_s("%d", &fin);

    printf("Ingresa el numero a sumar");
    
    scanf_s("%d", &suma);

    r = 0;


    for (r = 12; r <= suma; r++)
    {
        printf("%s.%d \n", ext, r);
    }

}