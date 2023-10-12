#include <stdlib.h>
#include <stdio.h>

void main() {
    
    // Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa 
    // que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la 
    // cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del 
    // cliente (validar que dicho número no sea menor que 1.000.000 ni mayor que 999.999.99). 
    // Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta 
    // fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
    // - Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 
    // 12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas 
    // y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta 
    // es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una 
    // venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta 
    // actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
    // DNI: 38.456.123
    // Medio de pago: Tarjeta de crédito
    // Tarjeta: Cabal
    // Cuotas: 3
    // Total: $4784
    // Al finalizar el registro, mostrar la suma total de las ventas ingresadas


    int cantVentas, dni = 0, montoVenta = 0, medioPago = 0, tarjeta = 0, cantCuotas = 0, totalVenta = 0;

    printf("Cuantas ventas ha realizado? \n");
    scanf("%i", &cantVentas);

    for(int i = 1; i <= cantVentas; i++){

        printf("Ingrese el DNI del cliente \n");
        scanf("%i", &dni);

        if(dni > 1000000 && dni < 99999999){

            printf("Ingrese el monto de la venta \n");
            scanf("%i", &montoVenta);

            printf("Medio de pago: \n");
            printf("1. Efectivo \n");
            printf("2. Tarjeta de credito \n");
            scanf("%i", &medioPago);

            switch(medioPago){

                case 1: 

                    totalVenta = montoVenta;
                    printf("Medio de pago: Efectivo \n");
                    break;
                
                case 2:

                    printf("Medio de pago: Tarjeta \n");
                    printf("Ingrese una opcion de las siguientes: \n");
                    printf("1. Visa \n");
                    printf("2. American Express \n");
                    printf("3. Mercado Pago \n");
                    printf("4. Cabal \n");
                    scanf("%i", &tarjeta);

                    if(tarjeta >= 1 || tarjeta <= 4){
                        
                        printf("1. 1 cuota \n");
                        printf("2. 3 cuotas \n");
                        printf("3. 6 cuotas \n");
                        printf("4. 12 cuotas \n");
                        scanf("%i", &cantCuotas);


                        if(cantCuotas)
                        switch(cantCuotas){

                            case 1:
                                totalVenta = montoVenta;
                                break;

                            case 2:
                                totalVenta = montoVenta + (montoVenta * 0.04);
                                break;
                            
                            case 3:
                                totalVenta = montoVenta + (montoVenta * 0.08);
                                break;

                            case 4:
                                totalVenta = montoVenta + (montoVenta * 0.08);
                                break;

                           default:
                                printf("Cantidad de cuotas invalida \n");
                                cantCuotas = 0;
                                break;


                        }

                    } else {

                       printf("Tarjeta invalida \n");
                       tarjeta = 0;

                    }

                    break;
                    default:
                        printf("Medio de pago invalido \n");
                        break;


            }

            //resumen!

            if((medioPago == 0) || (medioPago == 2) && (tarjeta == 0 || cantCuotas == 0)){

                printf("Algun dato es invalido \n");

            } else {

                printf("DNI: %i \n", dni);
                printf("Medio de pago: %i\n", medioPago);
                printf("Tarjeta: %i \n", tarjeta);
                printf("Cantidad de cuotas: %i \n", cantCuotas);
                printf("Total a abonar: %i\n", totalVenta);

            }

        } else {
            printf("DNI INVALIDO \n");
        }

    }

}