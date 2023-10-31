#include <stdlib.h>
#include <stdio.h>


int suma(int num1, int num2);
int resta(int num1, int num2);
int multiplicacion(int num1, int num2);
int division(int num1, int num2);
void main()
{
    int num1, num2, opcion, resultado;

    printf("Ingrese un numero \n");
    scanf("%d", &num1);
    printf("Ingrese otro numero \n");
    scanf("%d", &num2);

    do
    {
       printf("1. Informar su suma \n");
        printf("2. Informar su resta \n");  
        printf("3. Informar su multiplicación \n");
        printf("4. Informar su división \n");
        printf("5. Salir \n");
        scanf("%d", &opcion); 
    } while (opcion < 1 || opcion > 5);
    
    

    switch(opcion)
    {
        case 1:
            resultado = suma(num1, num2);
            printf("La suma de los numeros es: %d \n", resultado);
            break;

        case 2:
            resultado = resta(num1, num2);
            printf("La resta de los numeros es: %d \n", resultado);
            break;
        
        case 3:
            resultado = multiplicacion(num1, num2);
            printf("La multiplicacion de los numeros es: %d \n", resultado);
            break;

        case 4:
            resultado = division(num1, num2);
            printf("La division de los numeros es: %d \n", resultado);
            break;
        case 5:
            default:
            break;
    }
    
}

int suma(int num1, int num2)
{
    int respuesta;
    respuesta = num1 + num2;
    return respuesta;
}

int resta(int num1, int num2)
{
    int respuesta;
    respuesta = num1 - num2;
    return respuesta;

}

int multiplicacion(int num1, int num2)
{
    int respuesta;
    respuesta = num1 * num2;
    return respuesta;
}

int division(int num1, int num2)
{
    int respuesta;
    respuesta = num1 / num2;
    return respuesta;
}