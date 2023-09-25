#include <stdlib.h>
#include <stdio.h>

void main() {
    //Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y 
    //un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar dicha situación.

    float venta;

    printf("Ingrese el valor de la venta \n");
    scanf("%f", &venta);

    if(venta < 0) {

        printf("La venta es menor a 0 \n");
        
    } else {

        if(venta >= 100000) {
            
            venta = venta - (venta * 0.15);

        } else {

            venta = venta - (venta * 0.10);

        }
    }

    printf("El total de la compra con descuentos es: %0.2f \n", venta);

    system("pause");
}