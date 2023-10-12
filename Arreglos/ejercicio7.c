#include <stdlib.h>
#include <stdio.h>

void main() {

    // Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar, 
    // leer las notas por consola, mostrar la suma de sus componentes y el promedio. 

    int cantidadNotas;
    float promedio = 0, sumaNotas = 0;

    printf("Ingrese la cantidad de notas a cargar \n");
    scanf("%d", &cantidadNotas);

    float notas[cantidadNotas];

    for(int i = 0; i < cantidadNotas; i++) {

        printf("Ingrese la nota del alumno: \n", i+1);
        scanf("%f", &notas[i]);

        sumaNotas = sumaNotas + notas[i];

        promedio = sumaNotas  / cantidadNotas;
    }

    printf("La suma de las notas es: %.2f \n", sumaNotas);
    printf("El promedio es:  %.2f \n", promedio);

    system("pause");

}

//primero posicion en la fila y despes en la columna.