#include <stdio.h>
#include <string.h>
constexpr auto LONGITUD_CADENA = 50;

char* invertir(char cadena[]);

int main(void) {
    char cadena[LONGITUD_CADENA];
    printf("Escribe una cadena y la invertire:\n \n",
        LONGITUD_CADENA - 1);

    fgets(cadena, LONGITUD_CADENA, stdin);

    cadena[strcspn(cadena, "\r\n")] = 0;

    printf("\nLa cadena invertida es:\n\n %s\n", invertir(cadena));
    return 0;
}

char* invertir(char cadena[]) {
    int longitud = strlen(cadena);
    char temporal;
    for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
        izquierda++, derecha--) {
        temporal = cadena[izquierda];
        cadena[izquierda] = cadena[derecha];
        cadena[derecha] = temporal;
    }
    return cadena;
}