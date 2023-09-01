#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float num1, num2;
    int opcion, suma, resta, multiplicacion, division;

    printf("Ingrese el numero 1 \n");
    scanf("%f", &num1);

    printf("Ingrese el numero 2 \n");
    scanf("%f", &num2);


    printf("1. Informar su suma \n");
    printf("2. Informar su resta \n");
    printf("3. Informar su multiplicacion \n");
    printf("4. Informar su division \n");
    printf("5. Salir  \n");
    scanf("%d", &opcion);

    
    switch (opcion) {
        case 1:
            suma = num1 + num2;
            printf("El resultado es: %d \n", suma);
            break;
        case 2:
            resta = num1 - num2;
            printf("El resultado es: %d \n", resta);
            break;
        case 3:
            multiplicacion = num1 * num2;
            printf("El resultado es: %d \n", multiplicacion);
            break;
        case 4: 
            division = num1 / num2;
            printf("El resultado es: %d \n", division);
            break;
        case 5:
        default:
        break;

    }
}


//Pedir al usuario que ingrese dos números (permitir ingresar número con decimales). 
//Luego presentar el siguiente menú: 
//1. Informar su suma 
//2. Informar su resta 
//3. Informar su multiplicación 
// 4. Informar su división 
// 5. Salir 
// Seleccione una operación: 
// Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el 
// programa debe terminar