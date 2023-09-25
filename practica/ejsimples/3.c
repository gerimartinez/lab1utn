#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main() {

    //Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el 
    //perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.

    float lado1, lado2, perimetro, superficie, hipotenusa;

    printf("Ingrese el primer lado del triangulo \n");
    scanf("%f", &lado1);

    printf("Ingrese el segundo lado del triangulo \n");
    scanf("%f", &lado2);

    perimetro = lado1 + lado2;
    hipotenusa = sqrt((lado1 * lado1) + (lado2 * lado2));
    superficie = ((lado1 * lado2) /2);

    printf("El perimetro del triangulo rectangulo es: %f \n", perimetro);
    printf("La superficie del triangulo es %f \n", superficie);
    printf("La hipotenusa del triangulo es: %f \n", hipotenusa);

    system("pause");
}