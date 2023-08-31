#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, resultado;

    printf ("Ingrese un numero \n");
    scanf ("%i", &num);

    resultado = num % 2;

    if (resultado == 0)
    {
       printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }

    system("pause");
    return 0;
}

// if ((num % 2) == 0) {
    
//} 
//else