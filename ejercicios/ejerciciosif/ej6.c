#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
    float nota;

    printf("Ingrese la nota del examen \n");
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 10) {
        if (nota >= 6) {
            printf("Promocionado");
        } else if (nota >= 4) {
            printf("Regular");
        } else {
            printf("No aprobado");
        }
   
    } else {
        printf("Nota invalida");
    }
    
    system("pause");
}

// Leer una nota de un alumno por consola e informar la condición del mismo. (menor 
//que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar 
//que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota 
//inválida”