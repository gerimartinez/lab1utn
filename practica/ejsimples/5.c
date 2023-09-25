#include <stdlib.h>
#include <stdio.h>

void main() {
    //Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su 
    //sueldo e imprimirlo

    float valorHora, horasTrabajadas, sueldo;

    printf("Ingrese el valor de la hora \n");
    scanf("%f", &valorHora);

    printf("Ingrese las horas trabajas \n");
    scanf("%f", &horasTrabajadas);

    sueldo = (horasTrabajadas * valorHora);

    printf("El sueldo es: %f \n", sueldo);

    system("pause");
}
