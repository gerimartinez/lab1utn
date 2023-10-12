#include <stdlib.h>
#include <stdio.h>

void main() {

    // Ingrese por teclado la facturación de los últimos 6 meses. Informar:
    // a. La facturación total 
    // b. El promedio de facturación 
    // c. La máxima facturación 
    // d. La mínima facturación 

    float totalFacturacion = 0, maximaFacturacion = 0, minimaFacturacion = 999999999, promedio;
    int facturacion[6];
    
    for(int i = 0; i < 6; i++){

        printf("Ingrese la facturacion del mes %d \n", i+1);
        scanf("%f", &facturacion[i]);

        totalFacturacion = totalFacturacion + facturacion[i];
        promedio = totalFacturacion / 6;

       if(facturacion[i] < minimaFacturacion) {

            minimaFacturacion = facturacion[i];
       } 

       if(facturacion[i] > maximaFacturacion) {

            maximaFacturacion = facturacion[i];
       }

       

    }
    
    printf("La facturacion total es: %.2f \n", totalFacturacion);
    printf("El promedio de facturacion es: %.2f \n", promedio);
    printf("La maxima facturacion es: %.2f \n", maximaFacturacion);
    printf("La minima facturacion es: %.2f \n", minimaFacturacion);
    


    
    
}