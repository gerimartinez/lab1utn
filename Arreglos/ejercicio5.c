#include <stdlib.h>
#include <stdio.h>

void main() {
    
    float inflacionAnual, menorInflacion, mayorInflacion;
    int menorMes, mayorMes;
    menorInflacion = 1;
    menorMes = 1;
    mayorInflacion = 0;
    mayorMes = 0;

    float inflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};

    for(int i = 0; i < 12; i++) {

        // printf("El mes %d tiene una inflacion %.1f \n", i+1, inflacion[i]);
        inflacionAnual = inflacionAnual + inflacion[i];

        if (inflacion[i] < menorInflacion) {

            menorInflacion = inflacion[i];
            menorMes = i+1;
        }

        if (inflacion[i] > mayorInflacion) {

            mayorInflacion = inflacion[i];
            mayorMes = i+1;
        }

    }

    printf("La inflacion anual es de %.1f \n", inflacionAnual);
    printf("La inflacion mas baja es de %.1f, correspondiente al mes %d \n", menorInflacion, menorMes);
    printf("La inflacion mas alta es de %.1f, correspondiente al mes %d \n", mayorInflacion, mayorMes);
}

