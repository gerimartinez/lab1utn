#include <stdlib.h>
#include <stdio.h>

void main() {
    //Pedir al usuario que ingrese dos números (permitir ingresar número con decimales). 
    //Luego presentar el siguiente menú: 
    // 1. Informar su suma 
    // 2. Informar su resta 
    // 3. Informar su multiplicación 
    // 4. Informar su división 
    // 5. Salir 
    // Seleccione una operación: 
    // Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el 
    // programa debe terminar.

    float num1, num2, suma, resta, multiplicacion, division;
    int opcion;

    printf("Ingrese el primer numero \n");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero \n");
    scanf("%f", &num2);

    printf("Que operacion desea hacer \n");
    printf("1. Informar su suma \n");
    printf("2. Informar su resta \n");
    printf("3. Informar su multiplicacion \n");
    printf("4. Informar su division \n");
    printf("5. Salir \n");
    scanf("%i", &opcion);

    switch(opcion) {

        case 1:
            suma = num1 + num2;
            printf("La suma de los numeros es: %0.2f \n", suma);
            break;
        case 2:
            resta = num1 - num2;
            printf("La resta de los numeros es: %0.2f \n", resta);
            break;
        case 3:
            multiplicacion = num1 * num2;
            printf("La multiplicacion de los numeros es: %0.2f \n", multiplicacion);
            break;
        case 4: 
            division = num1 / num2;
            printf("La division de los numeros es: %0.2f \n", division);
            break;
        case 5:
            default:
            break;

    }

    system("pause");



}