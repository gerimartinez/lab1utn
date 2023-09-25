#include <stdlib.h>
#include <stdio.h>

void main() {
    //Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde 
    //dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la 
    //consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura 
    //if y luego estructura switch).

    int num;

    printf("Ingrese un numero del 1 al 12 \n");
    scanf("%i", &num);

    if(num >= 1 && num <= 12){

        switch(num) {
            case 1:
                printf("Mes: Enero \n");
                break;
            case 2:
                printf("Mes: Febrero \n");
                 break;
            case 3:
                printf("Mes: Marzo \n");
                 break;
            case 4:
                printf("Mes: Abril \n");
                 break;
            case 5:
                printf("Mes: Mayo \n");
                 break;
            case 6:
                printf("Mes: Junio \n");
                 break;
            case 7:
                printf("Mes: Julio \n");
                 break;
            case 8:
                printf("Mes: Agosto \n");
                 break;
            case 9:
                printf("Mes: Septiembre \n");
                 break;
            case 10:
                printf("Mes: Octubre \n");
                 break;
            case 11:
                printf("Mes: Noviembre \n");
                 break;
            case 12:
                printf("Mes: Diciembre \n");
                 break;

        }
    } else {
        printf("Numero invalido \n");
    }
}