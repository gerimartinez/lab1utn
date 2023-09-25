#include <stdlib.h>
#include <stdio.h>

void main() {
   // Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en pantalla.

    int num1, num2, num3;

    printf("Ingrese el primer numero \n");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero \n");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero \n");
    scanf("%i", &num3);

    if(num1 > num2 && num1 > num3) {
        printf("El numero mayor es: %i \n", num1);

    } else {
        if(num2 > num3 && num2 > num1) {
            printf("El numero mayor es: %i \n", num2);
        } else {
            printf("El numero mayor es: %i \n", num3);
        }
    }

    system("pause");
}