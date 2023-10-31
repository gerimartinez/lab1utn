#include <stdlib.h>
#include <stdio.h>

// Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9} 
// Cada ítem del vector representa la inflación de un mes de tal manera que el primer 
// ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector 
// que es 0.9 representa la inflación de diciembre. Se pide: 
// a. Informar la inflación anual 
// b. Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 
// 0.1 
// c. Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 
// 0.9 

void main ()
{
    float inflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}; 

    float infAnual = 0, infBaja = 1, infAlta = 0;
    int mayorMes, menorMes; 


    for (int i = 0; i < 12; i++)
    {
        infAnual = infAnual + inflacion[i];

        if (inflacion[i] < infBaja)
        {
            infBaja = inflacion[i];
            menorMes = i+1;
        }

        if (inflacion[i] > infAlta)
        {
            infAlta = inflacion[i];
            mayorMes = i+1;
        } 
        
    }
    
    printf("La inflacion anual es: %.2f \n", infAnual);
    printf("La inflacion mas baja es: %.2f , correspondiente al mes: %d \n", infBaja, menorMes);
    printf("La inflacion mas alta es: %.2f , correspondiente al mes: %d \n", infAlta, mayorMes);
}