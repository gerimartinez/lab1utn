#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int numero;

    printf("Ingrese un numero del 1 al 12 \n");
    scanf("%d", &numero); 
   
    switch (numero)
        {
        case 1:
            printf("Enero \n");
            break;
        case 2:
            printf("Febrero \n");
            break;
        case 3:
            printf("Marzo \n");
            break;
        case 4:
            printf("Abril \n");
            break;
        case 5:
            printf("Mayo \n");
            break;
        case 6:
            printf("Junio \n");
            break;
        case 7:
            printf("Julio \n");
            break;
        case 8:
            printf("Agosto \n");
            break;
        case 9:
            printf("Septiembre \n");
            break;
        case 10:
            printf("Octubre \n");
            break;
        case 11:
            printf("Noviembre \n");
            break;
        case 12:
            printf("Diciembre \n");
            break;
        
        default:
            break;
        }
    }


// Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde 
//dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la 
//consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura 
//if y luego estructura switch). 