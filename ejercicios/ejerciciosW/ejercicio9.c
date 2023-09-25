#include <stdlib.h>
#include <stdio.h>

void main(){
    //     Realizar un programa que permita ver información a un cliente de un banco. Para ello 
    //     el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero), 
    //     validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
    //     ingreso de contraseña. Al loguarse correctamente presentar un menú con las 
    //     siguientes opciones:
    //     1- Consultar saldo
    //     2- Consultar CBU
    //     3- Salir
    //     Trabajar con las siguientes variables

    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    int opcion;

    do
    {
        printf("Ingrese su usuario: \n");
        scanf("%i", &dniIngresado);

        printf("Ingrese su contraseña: \n");
        scanf("%i", &passIngresado);

        if(dni == dniIngresado && passIngresado == pass){

            ingresaCorrectamente = 1;

        } else {

            intentos = intentos + 1;
            printf("Intentos restantes: %d \n", 3 - intentos);

        }

    } while(intentos <= 3 && ingresaCorrectamente != 1);


    if(ingresaCorrectamente == 1){

        printf("1- Consultar saldo \n");
        printf("2- Cosultar CBU \n");
        printf("3- Salir \n");
        scanf("%i", &opcion);


        switch(opcion) {
            case 1:
                printf("Su saldo actual es: %i \n", saldo);
                break;
            case 2: 
                printf("Su CBU es: %i \n", cbu);
            case 3:
            default:
                break;
        }
    }
    
    

    

      




    system("pause");
}