#include <stdlib.h>
#include <stdio.h>

// Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la 
// suma de sus componentes y el promedio. 
void main ()
{
    int num[] = {1, 2, 3, 4, 5};
    int suma = 0;
    float promedio = 0;

    for (int i = 0; i < 5; i++)
    {
        suma = suma + num[i];
        promedio = suma / 5;
    }
    printf("La suma de los componentes es: %d \n", suma);
    printf("El promedio de los componentes es: %f \n", promedio);
    
}