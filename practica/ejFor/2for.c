#include <stdlib.h>
#include <stdio.h>

void main() {

   // Imprimir los números del 1 al 10 uno abajo del otro saltando de a dos.

    for(int i = 1; i <= 10; i += 2){
        printf("%d\n", i);
    }

    system("pause");
}