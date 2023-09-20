#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float saldoInicial, retiro, saldoFinal, extraccion;
    
    saldoInicial = 1000;
    printf("Cuanto dinero desea retirar? \n");
    scanf("%f", &retiro);

    if (saldoInicial > retiro) {

        if (saldoInicial >= retiro ) {
            extraccion = saldoInicial - retiro;

            printf("Su extraccion es de: %.2f \n", retiro);
            printf("Su saldo actual es: %.2f \n", extraccion);
        }

    } else {
        printf("No tiene suficiente monto \n");
    }
    
    system ("pause");
    return 0;
}


//Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo 
//sea mayor o igual que el importe a retirar.
