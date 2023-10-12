#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras)

void main() 
{
    char cadenas[3][20];

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese una palabra %d\n", i+1);
        scanf("%s", &cadenas[i]);
    }
    printf("La longitud de las cadenas ingresadas son: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d - %d\n", i + 1, strlen(cadenas[i]));
    }
}