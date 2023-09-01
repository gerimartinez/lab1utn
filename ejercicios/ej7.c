#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float venta, descuento, valorFinal;

    
    printf("Ingrese el valor de la venta \n");
    scanf("%f", &venta);
    
    if (venta <= 0) {
        printf("La venta debe ser mayor a 0. Intente de nuevo \n");
    } else {

        if (venta >= 100000) {

            descuento = venta * 0,15;
        } 
        else {
        
            descuento = venta * 0,10;
        }

        valorFinal = (venta - descuento);

        printf("Descuento aplicado: %.2f \n", descuento);
        printf("Valor final con descuento: %.2f \n", valorFinal);
    }

   
}
 
//Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100.000 y 
//un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar 
//dicha situación.