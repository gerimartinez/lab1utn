#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void main()
{
    char nombreApellido[3][20];

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese su nombre y apellido \n");
        fgets(nombreApellido[i], sizeof(nombreApellido), stdin);

    }
    
    
    for (int i = 0; i < 3; i++)
    {
        printf("%s \n", nombreApellido[i]);
    }
    
    

    system("pause");
}