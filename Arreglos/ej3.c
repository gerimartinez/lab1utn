#include <stdlib.h>
#include <stdio.h>

// Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola, 
// mostrar cuántas veces se repite el número 5. 

void main()
{
    int numeros[5];
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el numero: %d \n", i+1);
        scanf("%d", &numeros[i]);

        if (numeros[i] == 5)
        {
            contador = contador + 1;
        }
        
    }
    printf("El numero 5 aparece: %d veces \n", contador);
    

}