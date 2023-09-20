#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, num1, multiplo;

    printf("Ingrese un numero para saber sus multiplicadores \n");
    scanf("%d", &num1);

    multiplo = 0;

    for ( int i = 1; i <= 9; i++) {
        
        printf("Tabla de multiplicar del %d\n", i);

        for (int j = 0; j <= 10; j++) {
            
            multiplo = i * j;
            printf("%d X %d = %d \n", i, j, multiplo);
        }
    }

    system("pause");
}