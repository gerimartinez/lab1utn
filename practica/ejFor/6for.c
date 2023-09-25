#include <stdlib.h>
#include <stdio.h>

void main() {
    
    int acum = 0;
    
    for(int i = 1; i <= 10; i++) {

        acum = (acum + (i*3));

    }
    printf("La suma es: %i \n", acum);

    system("pause");
}