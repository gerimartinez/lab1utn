#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int nota, condicion;

    nota <= 10;

    printf("Ingrese la nota del examen \n");
    scanf("%d", &nota);

    if (nota < 0 && nota > 10) {
        printf("Nota invalida \n");
    } else {

        if (nota >= 4 && nota < 6) {
            printf("Su condicion es: regular \n");
        }

        else if (nota >= 0 && nota < 4) {
            printf("Su condicion es: reprobado \n");
        }
    
        else {
            printf("Su condicion es: promocionado \n");    
        }
} 
    system("pause");
    return 0;
}

// Leer una nota de un alumno por consola e informar la condición del mismo. (menor 
//que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar 
//que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota 
//inválida”