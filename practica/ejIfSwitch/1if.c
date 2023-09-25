#include <stdlib.h>
#include <stdio.h>

void main(){
   //Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en 
    //pantalla.

    float num1, num2;

    printf("Ingrese un numero \n");
    scanf("%f", &num1);

    printf("Ingrese un segundo numero \n");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("El numero mayor es: %f \n", num1);

    } else {
        printf("El numero mayor es: %f \n", num2);
    }

    system("pause");
}