#include <stdio.h>
#include <stdlib.h>

void main() {

    // int num[6] = {10, 20, 30, 40, 50, 60};
    // int x[ ] = {}; // declara e inicializa un array de tres elementos
    // //char ch[] = {"k", "u", "c"}; // declaro un array solo de caracteres

    // num[0] = 5; // almaceno 5 en el primer elemento del arreglo num
    // num[1] = 8;
    // num[5] = 12;

    // printf("En el indice %d esta almacenado el valor %d", 5, num[5]); // imprimo en el indice 5 el valor del indice.


    // int i = 5;

    // printf("En el indice %d esta almacenado el valor %d", i, num[i]); //para el for

    //primero pedir al usuario que ingrese 8 edades, luego mostrarlas y calcular su promedio

    int edades[8];
    int suma;
    float promedio;
    

    for(int i = 0; i < 8; i++) 
    {
        printf("Ingrese la edad n %d \n", i); // para mostrar el resultado al usuario, pongo I+1, EN LUGAR DE EL INDICE 0 ME MUESTRA EL 1.
        scanf("%d", &edades[i]);
        //suma = suma + edades;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("Indice: %d, Valor: %d \n", i, edades[i]); //i es el indice, edades es el valor de i;
    }
    

    system("pause");
}
