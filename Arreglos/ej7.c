#include <stdlib.h>
#include <stdio.h>

// Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar, 
// leer las notas por consola, mostrar la suma de sus componentes y el promedio.

void main()
{
    int cantNotas;
    float suma = 0, promedio = 0;

    printf("Ingrese la cantidad de notas a cargar \n");
    scanf("%d", &cantNotas);

    float notas[cantNotas];

    for (int i = 0; i < cantNotas; i++)
    {
        printf("Ingrese la nota \n", i+1);
        scanf("%f", &notas[i]);

        suma = suma + notas[i];
        promedio = suma / cantNotas;
    }
    printf("La suma de las notas es: %f \n", suma);
    printf("El promedio de las notas es: %f \n", promedio);

    system("pause");
}