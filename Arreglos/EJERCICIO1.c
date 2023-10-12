#include <stdlib.h>
#include <stdio.h>

void main() {

    int num[] = {1, 2, 3, 4, 5};

   for(int i = 0; i < 5; i++)
   {
        printf("Ingrese el numero %d \n", i+1);
        scanf("%d", &num[i]);
   }

   for(int i = 0; i < 5; i++) 
   {
        printf("Indice: %d , valor: %d \n", i+1 , num[i]);
   }

    for(int i = 5; i > 0; i--)
    {
        printf("Indice: %d , valor: %d \n", i-1 , num[i]);
    }

}