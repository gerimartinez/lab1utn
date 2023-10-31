#include <stdlib.h>
#include <stdio.h>

// Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los 
// 10 números en pantalla mediante un solo array.

void main()
{
    int primerA[5];
    int segundoA[5];
    int tercerA[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un numero \n");
        scanf("%d", &primerA[i]);
    }
    
    for (int j = 0; j < 5; j++)
    {
        printf("Ingrese un numero \n");
        scanf("%d", &segundoA[j]);
    }
    
    for (int k = 0; k < 10; k++)
    {
        if(k < 5)
        {
            tercerA[k] = primerA[k];
        } else {
            tercerA[k] = segundoA[k-5];
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("Los numeros ingresados son: %d \n", tercerA[i]);
    }
    
}