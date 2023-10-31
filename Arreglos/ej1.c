#include <stdlib.h>
#include <stdio.h>

// Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la 
// forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante. 

void main()
{

    int array[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("Indice: %d, valor: %d \n", i+1, array[i]);
    }
    
    for (int i = 4; i >= 0; i--)
    {
        printf("Indice: %d, valor: %d \n", i, array[i]);
    }
    
}