#include <stdio.h>
#include <stdlib.h>

// Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente 
// la suma de todos los números que no están en la diagonal principal.

void main()
{
    int tam, suma = 0;

    printf("Ingrese el tamaño de la matriz \n");
    scanf("%d", &tam);

    int matriz[tam][tam];

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("Ingrese los numeros de la matriz \n");
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {

            if (i != j) { // se fija en la posicion de la matriz, en la diagonal si es 3x3 va a ser 0,0 1,1 2,2
                suma = suma + matriz[i][j];
            }
        }
    }
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("La suma de los elementos que no estan en la diagonal principal son: %d \n", suma);

}