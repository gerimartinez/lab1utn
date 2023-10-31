#include <stdlib.h>
#include <stdio.h>

//  Dado el vector {10, 20, 5, 15, 30, 20} 
// a. Informar el vector de la forma: "Indice: X, Valor: Y". 
// b. Totalizar el vector e informar el total. 
// c. Informar el contenido de las posiciones impares. 
// d. Informar las posiciones que contienen números impares. 
// e. Informar el mayor número. 
// f. Informar cuántas veces aparece el número 20. 

void main ()
{
    int vector[] = {10, 20, 5, 15, 30, 20};

    int total = 0, contador20 = 0, mayorNumero = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Indice: %d, valor %d \n", i, vector[i]);
        total = total + vector[i];

        if (vector[i] == 20)
        {
            contador20 = contador20 + 1;
        }

        if(vector[i] > mayorNumero)
        {
            mayorNumero = vector[i];
        }

    }

    for (int i = 0; i < 6; i++)
    {
        if(vector[i]%2 != 0)
        {
            printf("Posicion: %d, contenido: %d \n", i, vector[i]);
        }
    }
    
    printf("El total del vector es: %d \n", total);
    printf("El mayor numero es: %d \n", mayorNumero);
    printf("El numero 20 aparece %d veces \n", contador20);
    
    system("pause");
}