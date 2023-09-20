#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int num1, num2, num3;

    printf("Ingrese 3 numeros \n");
    scanf("%d" "%d" "%d", &num1, &num2, &num3);

    if (num1 > num2) {
        printf("El numero mayor es: %d \n", num1);
    }
    else if (num2 > num3) {
        printf("El numero mayor es: %d \n", num2);
    }
    else {
        printf("El numero mayor es: %d \n", num3);
    }

    system("pause");
    return 0;
}