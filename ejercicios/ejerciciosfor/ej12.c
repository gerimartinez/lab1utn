#include <stdlib.h>
#include <stdio.h>

void main() {

    for (int a = 1; a <= 10; a++) {

        for (int x = 1; x <= a; x++) {

            printf("@");
        }

        printf("@ \n");
    }

    system("pause");
}