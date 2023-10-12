#include <stdlib.h>
#include <stdio.h>

void main() {

    //  Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los 
    // 10 números en pantalla mediante un solo array. 
    int primerArray[5];
    int segundoArray[5];
    int tercerArray[10];

    for(int i = 0; i < 5; i++){

        printf("Ingrese un numero \n");
        scanf("%d", &primerArray[i]);

    } 

    for(int j = 0; j < 5; j++) {

        printf("Ingrese un numeroO \n");
        scanf("%d", &segundoArray[j]);

    }

    for(int k = 0; k < 10; k++){

        if(k < 5) {

            tercerArray[k] = primerArray[k];
        } else {

            tercerArray[k] = segundoArray[k-5];
        }

    }

    for (int i = 0; i < 10; i++)
    {
       printf("Los numeros ingresados son: %d \n", tercerArray);
    }
    
    
    
}