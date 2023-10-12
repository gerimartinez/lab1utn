#include <stdio.h>
#include <stdlib.h>

void main() {

    int numeros[5];
    int suma = 0;
    float promedio = 0;

    for(int i = 0; i < 5; i++) 
    {
        printf("Ingrese el valor numero %d\n", i+1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5 ; i++)
    {
        suma = suma + numeros[i];
    }

    printf("La suma de los numeros ingresados es: %d \n", suma);
    promedio = suma / 5;
    printf("El promedio es: %f \n", promedio);

    system("pause");

}