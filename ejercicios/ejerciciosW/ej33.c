#include <stdlib.h>
#include <stdio.h>

void main() {
    // Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores 
    // positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número 
    // (repetir el ingreso de dicho número mientras el número no sea correcto). Informar al 
    // usuario la suma de los 10 números ingresados.

    float numIngresado, acumulador = 0;


    do
    {   
        for(int i = 1; i <= 10; i++){
            
            printf("Ingrese el numero real \n");
            scanf("%f", &numIngresado);
            acumulador = acumulador + numIngresado;
        }
        
       
    } while(numIngresado <= 0);

    printf("La suma de los numeros es: %f", acumulador);    
    
}