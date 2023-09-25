#include <stdlib.h>
#include <stdio.h>

int main() {

    int dni = 0, medioPago = 0, tarjeta = 0, cantCuotas = 0, ventasRealizadas = 0;
    float venta = 20000, ventaTotal = 0;

    printf("Ingrese la cantidad de ventas realizadas en el dia \n");
    scanf("%i", ventasRealizadas);

    for (int i = 1; i <= ventasRealizadas; i++)
    {
        printf("Ingrese el DNI del cliente \n");
        scanf("%i", &dni);
       if(dni > 10000000 && dni < 99999999) {

            printf("Medio de pago: \n");
            printf("1- Efectivo \n");
            printf("2- Tarjeta \n");
            scanf("%i", &medioPago);

            switch(medioPago) {
                
                case 1: //ef
                    ventaTotal = venta;
                    break;
                case 2:
                printf("Seleccione la tarjeta: \n");
                printf("1- Visa\n");
                printf("2- American Express\n");
                printf("3- Mercado Pago\n");
                printf("4- Cabal\n");
                scanf("%i", &tarjeta);

                if(tarjeta >= 1 && tarjeta <= 4){

                    printf("Seleccione la cantidad de cuotas:\n");
                    printf("1 cuota\n");
                    printf("3 cuotas\n");
                    printf("6 cuotas\n");
                    printf("12 cuotas\n");
                    scanf("%i", &cantCuotas);

                    switch(cantCuotas) {
                        
                        case 1: 
                            ventaTotal = venta;
                            break;
                        case 3:
                            ventaTotal = (venta * 0.04);
                            break;
                        case 6:
                        case 12:
                            ventaTotal = (venta * 0.08);
                            break;
                        default:
                            printf("Cantidad de cuotas invalidas \n", 160);
                            cantCuotas = 0;
                            break;
                        
                    }
                }
                else {
                    printf("Tarjeta invalida \n", 160);
                    tarjeta = 0;
                }
            break;
            default:
                printf("Medio de pago invalido \n", 160);
                break;
        }

        //resumen
        if ((medioPago == 0) || (medioPago == 2 && (tarjeta == 0 || cantCuotas == 0))) {
            //valido si el mediopago es 1 o 2, tarjeta num entre 1 y 4 y cantd de cuotas
            //si hay un dato invalido muestro:
            printf("Algun dato invalido \n", 163, 160);
        } 
        else 
        {
            //resumen
            printf("DNI: %i\n", dni);
            switch(medioPago) {

                case 1:
                    printf("Medio de pago: Efectivo\n");
                    break;
                case 2:
                     printf("Medio de pago: Tarjeta de credito\n", 130);
                        switch (tarjeta)
                        {
                        case 1:
                            printf("Tarjeta: Visa\n");
                            break;
                        case 2:
                            printf("Tarjeta: American Express\n");
                            break;
                        case 3:
                            printf("Tarjeta: Mercado Pago\n");
                            break;
                        case 4:
                            printf("Tarjeta: Cabal\n");
                            break;
                        
                        default:
                            printf("Tarjeta invalida\n", 160);
                        }
                        printf("Cuotas: %i\n", cantCuotas);
                        break;
                    default:
                        printf("Medio de pago invalido\n", 160);
            }
            printf("Total: %f\n", ventaTotal);
        }

    }
    else {
        printf("DNI invalido\n", 160);
    }

    system("pause");
    return 0;
}
    }
    

// Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa 
// que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado 
 
// la cantidad de ventas que necesita registrar. Luego, 
// para cada venta deberá ingresar el DNI del cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999). 
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





