#include <stdlib.h>
#include <stdio.h>

void main() {
    //Leer una nota de un alumno por consola e informar la condición del mismo. (menor 
    //que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar 
    //que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota inválida”.

    float nota;

    printf("Ingrese la nota del alumno \n");
    scanf("%f", &nota);

    if(nota >= 0 && nota <= 10) {

        if(nota >= 6) {

            printf("Condicion: Promocionado \n");

        } else if(nota >= 4) {

            printf("Condicion: Regular \n");

        } else {

            printf("Condicion: No aprobado \n");
        }
    } else {
        printf("Nota invalida \n");
    }

    system("pause");
    
    
}