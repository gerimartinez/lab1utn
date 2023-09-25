#include <stdlib.h>
#include <stdio.h>

void main() {
    // Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para 
    // calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y 
    // no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados 
    // por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas. 
    // Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita 
    // mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es 
    // el 2,5% de la suma de sus ventas.

    float importeVenta, comision, sumaVentas = 0;
    int codigoVendedor;

    for(int i = 1; i <= 5; i++) {

        

        printf("Ingrese su codigo de vendedor \n");
        scanf("%i", &codigoVendedor);


        do {

            printf("Ingrese las ventas: vendedor %i \n", i);
            scanf("%f", &importeVenta);

            sumaVentas = sumaVentas + importeVenta;


        } while(importeVenta != 0);



        comision = sumaVentas * 0.025;
        printf("El codigo del vendedor: %i \n", codigoVendedor);
        printf("La comision a recibir es: %2.f \n", comision);

    }

    system("pause");

}