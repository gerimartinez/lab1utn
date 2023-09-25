#include <stdlib.h>
#include <stdio.h>

void main() {

    float sueldo, valorHora, horasTrabajadas;

    valorHora = 800;

    printf("Ingrese las horas trabajadas \n");
    scanf("%f", &horasTrabajadas);

    sueldo = horasTrabajadas * valorHora;

    printf("El sueldo es: %0.2f \n", sueldo);

    system("pause");
}