#include <stdlib.h>
#include <stdio.h>

void main(){
    //Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.

    float nota, suma = 0, promedio = 0, contador = 0;
    int decision;

    do{

        printf("Ingrese la nota \n");
        scanf("%f", &nota);
        
        suma = suma + nota;
        contador = contador + 1;

        printf("Si desea ingresar mas notas ingrese 1, de lo contrario ingrese 2. \n");
        scanf("%i", &decision);

    } while(decision == 1);


    promedio = suma / contador;

    printf("La suma de las notas es: %f \n", suma);
    printf("El promedio es: %f \n", promedio);


    system("pause");

}