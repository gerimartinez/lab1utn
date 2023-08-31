#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float num;

    printf("Ingrese un numero");
    scanf("%f", &num);

    if (num >= 0) {
        printf("El numero %f es positivo \n");
    }
    else if (num <= 0) {
        printf("El numero %f es negativo \n");
    }

    else {
        printf("El numero %f es nulo");
    }

    system("pause");
    return 0;
}