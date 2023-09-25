#include <stdlib.h>
#include <stdio.h>

void main(){

    // Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y 
    // switch:
    // “Pedir al usuario que ingrese dos números (permitir ingresar número con decimales). 
    // Luego presentar el siguiente menú: 
    // 1. Informar su suma 
    // 2. Informar su resta 
    // 3. Informar su multiplicación 
    // 4. Informar su división 
    // 5. Salir 
    // Seleccione una operación: 
    // Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el 
    // programa debe terminar.”
    // Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras 
    // este no se ingrese la opción 6. 
    // Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el 
    // usuario.
    // El menú que se mostrará al usuario quedará entonces de la siguiente forma:
    // 1. Informar su suma 
    // 2. Informar su resta 
    // 3. Informar su multiplicación 
    // 4. Informar su división 
    // 5. Informar cantidad de operaciones realizadas
    // 6. Salir 
    // Seleccione una operación
    
    float num1, num2, suma, resta, multiplicacion, division;
    int operacion, cantOperaciones = 0;

    printf("Ingrese el primer numero \n");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero \n");
    scanf("%f", &num2);

    do
    {
        printf("Ingrese la opcion deseada \n");
        printf("1. Informar su suma \n");
        printf("2. Informar su resta \n");
        printf("3. Informar su multiplicacion \n");
        printf("4. Informar su division \n");
        printf("5. Informar cantidad de operaciones realizadas \n");
        printf("6. Salir \n");
        scanf("%i", &operacion);

        switch(operacion) {
            
            case 1:
                suma = num1 + num2;
                printf("La suma de los numeros es: %f \n", suma);
                cantOperaciones = cantOperaciones + 1;
                break;
            
            case 2: 
                resta = num1 - num2;
                printf("La resta de los numeros es: %f \n", resta);
                cantOperaciones = cantOperaciones + 1;
                break;
            
            case 3:
                multiplicacion = num1 * num2;
                printf("La multiplicacion de los numeros es: %f \n", multiplicacion);
                cantOperaciones = cantOperaciones + 1;
                break;
            
            case 4:
                division = num1 / num2;
                printf("La division de los numeros es: %f \n", division);
                cantOperaciones = cantOperaciones + 1;
                break;

            case 5:
                printf("La cantidad de operaciones realizadas es: %i \n", cantOperaciones);
                break;
            
            case 6:
                default:
                break;
        }
    } while(operacion != 6 || (operacion < 1 || operacion > 6));


    system("pause");

}