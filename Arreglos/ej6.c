#include <stdlib.h>
#include <stdio.h>

// Ingrese por teclado la facturación de los últimos 6 meses. Informar:
// a. La facturación total 
// b. El promedio de facturación 
// c. La máxima facturación 
// d. La mínima facturación

void main()
{
    float facturacion[6];
    float factTotal = 0, promedio = 0, maxFact = 0, minFact = 99999;

    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la facturacion del mes \n", i+1);
        scanf("%f", &facturacion[i]);

        factTotal = factTotal + facturacion[i];
        promedio = factTotal / 6;

        if (facturacion[i] < minFact)
        {
            minFact = facturacion[i];
        }

        if (facturacion[i] > maxFact)
        {
            maxFact = facturacion[i];
        }
              
    }

    printf("La facturacion total es: %f \n", factTotal);
    printf("El promedio facturado es: %f \n", promedio);
    printf("La maxima facturacion es: %f \n", maxFact);
    printf("La minima facturacion es: %f \n", minFact);
    
}