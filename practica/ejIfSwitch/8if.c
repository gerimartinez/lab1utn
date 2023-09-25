#include <stdio.h>
#include <stdlib.h>

void main() {
   //Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo sea mayor o igual que el importe a retirar.

   float saldo, retiro;

   printf("Cuanto dinero desea retirar \n");
   scanf("%f", &retiro);

    saldo = 100000;
    
    if(retiro <= 100000){

        saldo = saldo - retiro;

    } else {

        printf("No tiene suficientes fondos \n");

    }

    printf("Retiro: %0.2f \n", retiro);
    printf("Su saldo actual es: %0.2f \n", saldo);

    system("pause");
}