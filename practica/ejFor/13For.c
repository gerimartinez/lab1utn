#include <stdlib.h>
#include <stdio.h>

void main() {

    for(int i = 10; i >= 1; i--) {

        for(int j = 0; j < i; j++){
            
            printf("@");
        }

        printf("\n");
    }

    system("pause");
}