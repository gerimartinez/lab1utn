#include <stdlib.h>
#include <stdio.h>

void main() {

// - Realizar un programa que permita registrar los datos para una venta de $4600. Para 
// ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor 
// que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el 
// medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese 
// una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal. 
// Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por 
// pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para 
// 6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en 
// caso contrario informar la situación y finalizar programa. Por último, presentar un 
// resumen de la operación, por ejemplo:
// DNI: 38.456.123
// Medio de pago: Tarjeta de crédito
// Tarjeta: Cabal
// Cuotas: 3
// Total: $4784


    int dni = 0, medioPago = 0, tarjeta = 0, cantCuotas = 0;
    float venta = 4600, total = 0;
    
    printf("Ingrese el numero de DNI \n");
    scanf("%i", &dni);

    if(dni > 1000000 && dni < 99999999) {   

        printf("Ingrese el medio de pago \n");
        printf("1. Efectivo \n");
        printf("2. Tarjeta de credito \n");
        scanf("%i", &medioPago);
        
        switch(medioPago) {

            case 1:
                total = venta;
                break;

            case 2:
                printf("Seleccione una opcion de las siguientes: \n");
                printf("1. Visa \n");
                printf("2. American Express \n");
                printf("3. Mercado pago \n");
                printf("4. Cabal \n");
                scanf("%i", &tarjeta);

                if(tarjeta >= 1 && tarjeta <= 4){
                    
                    printf("Elija la cantidad de cuotas: \n");
                    printf("1 cuota \n");
                    printf("3 cuotas \n");
                    printf("6 cuotas \n");
                    printf("12 cuotas \n");
                    scanf("%i", &cantCuotas); 

                    switch(cantCuotas)
                    {
                        case 1:
                            total = venta;
                            break;
                        case 3:
                            total = (venta * 0.04);
                            break;
                        case 6:
                            total = (venta * 0.08);
                            break;
                        case 12:
                            total = (venta * 0.08);
                            break;
                        default:
                            printf("Cantidad de cuotas invalida \n");
                            cantCuotas = 0;
                            break;
                    }

                } else {
                    printf("Tarjeta invalida \n");
                }

            break;    
            default:
                printf("Medio de pago invalido");
                break;


        }

        if((medioPago == 0) || (medioPago == 2 && (tarjeta == 0 || cantCuotas == 0))) {

            printf("Algun dato es invalido \n");

        } else {

            printf("DNI: %i \n", dni);
            printf("Medio de pago: %i \n", medioPago);
            printf("Tarjeta: %i \n", tarjeta);
            printf("Cantidad de cuotas: %i \n", cantCuotas);
            printf("Total: %f \n", total);
        }

    } else {
        printf("Dni invalido \n");
    }

    system("pause");

}