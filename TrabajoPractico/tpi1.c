#include <stdlib.h>
#include <stdio.h>

void main()
{
    // Definir numeroCuenta, contraseñaCliente, nombreCliente, saldoCliente, estadoCliente(bandera)
    // limiteOperaciones = 10
    // Intentos= (contador)3

    int numeroCuenta, contrasenaCliente, limiteOperaciones = 10, intentos = 3, intentosFallidos = 0, estadoCliente = 1; //(1 activo, 0 bloqueado);
    int numeroCuentaCorrecto = 127, contrasenaCorrecta = 1234, opcionMenu;
    char nombreCliente = "geraldine";
    float saldoCliente;
   
   printf("Bienvenido/a \n");
   while (intentosFallidos < intentos)
   {
        printf("Ingrese su numero de cuenta \n");
        scanf("%d", &numeroCuenta);
        printf("Ingrese su contrasena \n");
        scanf("%d", &contrasenaCliente);

        if(numeroCuenta == numeroCuentaCorrecto && contrasenaCliente == contrasenaCorrecta)
        {
            if(estadoCliente == 1) {

                printf("Ingreso de sesion exitoso. Bienvenido/a %s \n", nombreCliente);
                printf("1. Realizar un Depósito. \n"); 
                printf("2. Realizar una Extracción. \n");
                printf("3. Consultar el Saldo de la Cuenta. \n");
                printf("4. Realizar una Transferencia entre Cuentas.\n");
                printf("5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual. \n");
                printf("6. Salir de la Sesión. \n");
                scanf("%d", &opcionMenu);

                switch (opcionMenu)
                {
                case 1:
                    
                    break;
                case 2:
                    
                    break;
                case 3:
                    //consulta saldo
                    break;
                case 4:
                    //realizar transferencia
                    break;
                
                case 5:
                    //cantidad operaciones
                    break;
                case 6:
                    priuntf("Hasta luego \n");
                    break;
                 
                default:
                    printf("Opcion invalida. Intente nuevamente \n");
                    break;
                }

            } else {
                printf("Su cuenta esta bloqueada; comuniquese con la entidad bancaria.\n");
            }


        } else {
            intentosFallidos = intentosFallidos + 1;
            printf("Numero de cuenta o contraseña incorrecta. \n");
        }

        if (intentosFallidos >= intentos) 
        {
            printf("No se permiten mas intentos. Su cuenta ha sido bloqueada, comuniquese con la entidad bancaria.\n");
        }
   }
   
   
  
   


}