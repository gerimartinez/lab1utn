#include <stdio.h>
#include <string.h>

int banderaCliente; // Variable global para llamar al indice de la cuenta

// Definición de la estructura Cliente
struct Cliente
{
    int numeroCuenta;
    char contrasena[20];
    char nombre[50];
    float saldo;
    char estado[10];
    int intentosFallidos;
    int operacionesRealizadas;
};

// Función para validar el inicio de sesión
int validarInicioSesion(struct Cliente clientes[], int numeroCuenta, char contrasena[])
{
    for (int i = 0; i < 10; i++)
    {
        if (clientes[i].numeroCuenta == numeroCuenta) // Valida que la cuenta exista
        {
            banderaCliente = i;
            if (strcmp(clientes[i].contrasena, contrasena) == 0) // Valida que la contraseña sea la misma
            {
                if (strcmp(clientes[i].estado, "Activo") == 0) // Valida que la cuenta este activa
                {
                    return i; // Retorna el índice del cliente en el arreglo
                }
                else
                {
                    return -1; // Cuenta bloqueada
                }
            }
            else
            {
                return -2; // Contraseña incorrecta
            }
        }
    }
    return -3; // Número de cuenta incorrecto
}

// Función para realizar un depósito
void realizarDeposito(struct Cliente *cliente, float monto)
{
    if (monto > 0) // Valida que el monto sea mayor a cero
    {
        cliente->saldo += monto; // El monto se le suma al saldo del cliente
        printf("\nDep%csito realizado. Nuevo saldo: %.2f\n", 162, cliente->saldo);
    }
    else // Sino le muestra este mensaje
    {
        printf("\nMonto ingresado no v%clido.\n", 160);
    }
}

// Función para realizar una extracción
void realizarExtraccion(struct Cliente *cliente, float monto)
{
    if (monto <= cliente->saldo) // Valido que el monto a extraer sea menor o igual al saldo y que sea mayor a cero
    {
        if (monto > 0) // Valida que el monto sea mayor a cero
        {
            cliente->saldo -= monto; // Le resta el monto que extrajo al saldo
            printf("\nExtracci%cn realizada. Nuevo saldo: %.2f\n", 162, cliente->saldo);
        }
        else // Sino le muestra este mensaje
        {
            printf("\nMonto ingresado no v%clido.\n", 160);
        }
    }
    else // Si el monto supera al saldo del cliente le muestro este mensaje
    {
        printf("\nSaldo insuficiente.\n");
    }
}

// Funcion para realizar una transferencia entre cuentas
void realizarTransferenciaEntreCuentas(struct Cliente clientes[])
{
    int montoTransferir, numeroCuentaTransferir, banderaCliente2, encontrado = 0, salirTransferencia = 0, i; // Declaro variables que se usan en la funcion

    do
    {
        printf("\nIngrese el n%cmero de cuenta a la que desea transferir: \n", 163);
        scanf("%d", &numeroCuentaTransferir);

        for (i = 0; i < 10; i++) // Recorro el struct en busca del numero de cuenta que sea igual a la que quiere transferir y que sea diferente a la del cliente
        {
            if (clientes[i].numeroCuenta == numeroCuentaTransferir && clientes[banderaCliente].numeroCuenta != numeroCuentaTransferir)
            {
                encontrado = 1;
                banderaCliente2 = i;
            }
        }
        if (encontrado == 0) // Si no se encontro le muestro este mensaje
        {
            printf("El n%cmero de cuenta ingresado no se encontr%c o ingresaste tu n%cmero de cuenta.\n", 163, 162, 163);
            do
            {
                printf("Si desea volver al men%c, ingrese: 1. En caso contrario, ingrese 0\n", 163);
                scanf("%d", &salirTransferencia); // Valido el numero ingresado por si quiere salir de la transferencia

            } while (salirTransferencia < 0 || salirTransferencia > 1);
        }
        else
        {
            do // Valido el monto que quiere transferir que no sea menor a cero y que sea menor que el saldo del cliente
            {
                printf("Ingrese el monto a transferir:\n");
                scanf("%d", &montoTransferir);

                if (montoTransferir <= 0)
                {
                    printf("Monto ingresado no v%clido.\n", 162 , 160);
                }
                else if (montoTransferir > clientes[banderaCliente].saldo)
                {
                    printf("Saldo insuficiente.\n");
                }

            } while (montoTransferir <= 0 || montoTransferir > clientes[banderaCliente].saldo);

            // Hago la transaccion
            clientes[banderaCliente].saldo = clientes[banderaCliente].saldo - montoTransferir;
            clientes[banderaCliente2].saldo = clientes[banderaCliente2].saldo + montoTransferir;
            printf("\nTransferencia realizada con %cxito.\n", 130);
        }
    } while (encontrado == 0 && salirTransferencia == 0);
}

// Función para mostrar el menú de opciones
void mostrarMenu()
{
    printf("\nMen%c de opciones:\n", 163);
    printf("1. Realizar dep%csito\n", 162);
    printf("2. Realizar extracci%cn\n", 162);
    printf("3. Consultar saldo\n"); 
    printf("4. Realizar una Transferencia entre Cuentas.\n");
    printf("5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual.\n");
    printf("6. Salir de la Sesi%cn.\n", 162);
}

void main()
{
    // Inicialización de clientes
    struct Cliente clientes[10] =
        {
            // numeroCuenta, contraseña, nombre, saldo, estado
            {100, "pass1", "Lautaro Bridera", 11500.0, "Activo"},
            {200, "pass2", "Lorenzo Piatti", 22543.0, "Activo"},
            {300, "pass3", "Delfi Marmirolli", 34896.0, "Activo"},
            {400, "pass4", "Geraldine Martinez", 26856.0, "Activo"},
            {500, "pass5", "Rodrigo De Paul", 48961.0, "Activo"},
            {600, "pass6", "Julian Alvarez", 1203654.0, "Activo"},
            {700, "pass7", "Diego Maradona", 65432.0, "Activo"},
            {800, "pass8", "Lionel Messi", 564182685465.0, "Activo"},
            {900, "pass9", "Emiliano Martinez", 10223145.0, "Activo"},
            {999, "pass99", "Enzo Fernandez", 35461.0, "Activo"},
        };

    int numeroCuenta, i;
    char contrasena[20];

    // Inicializo los intentos fallidos para todas las cuentas
    for (i = 0; i < 10; i++)
    {
        clientes[i].intentosFallidos = 3;
    }

    // Bucle infinito
    while (1)
    {
        printf("\nBienvenido al cajero autom%ctico\n", 160);
        printf("Ingrese su n%cmero de cuenta:\n", 163);
        scanf("%d", &numeroCuenta);
        printf("Ingrese su contrase%ca:\n", 164);
        scanf("%s", &contrasena);

        // Llamo a la funcion para que valide la cuenta, contaseña y estado
        int indiceCliente = validarInicioSesion(clientes, numeroCuenta, contrasena);
        // Valido el indice y entra a la cuenta
        if (indiceCliente >= 0)
        {
            // Inicializo operaciones realizadas y le reseteo el contador de intentos fallidos
            (*clientes).operacionesRealizadas = 10;
            clientes[indiceCliente].intentosFallidos = 3;
            printf("\nInicio de sesi%cn exitoso.\nBienvenido, %s\n", 162, clientes[indiceCliente].nombre);

            int opcion;
            float monto;

            do
            {
                // Llamo a la funcion para que muestre el menu
                mostrarMenu();
                printf("\nIngrese una opci%cn: \n", 162);
                scanf("%d", &opcion);

                switch (opcion)
                {
                case 1:
                    // Valido si tiene operaciones para hacer
                    if ((*clientes).operacionesRealizadas <= 0)
                    {
                        printf("\nHa alcanzado el l%cmite de operaciones. Gracias.\n Para continuar, debe iniciar sesi%cn nuevamente.\n", 161, 162);
                    }
                    else // En caso contrario le pido el monto a depositar y llamo a la funcion realizarDeposito
                    {
                        printf("\nIngrese el monto a depositar: \n");
                        scanf("%f", &monto);
                        realizarDeposito(&clientes[indiceCliente], monto);
                        (*clientes).operacionesRealizadas = (*clientes).operacionesRealizadas - 1;
                    }
                    break;
                case 2:
                    // Valido si tiene operaciones para hacer
                    if ((*clientes).operacionesRealizadas <= 0)
                    {
                        printf("\nHa alcanzado el l%cmite de operaciones. Gracias.\n Para continuar, debe iniciar sesi%cn nuevamente.\n", 161, 162);
                    }
                    else // En caso contrario le pido el monto a extraer y llamo a la funcion realizarExtraccion
                    {
                        printf("\nIngrese el monto a extraer: \n");
                        scanf("%f", &monto);
                        realizarExtraccion(&clientes[indiceCliente], monto);
                        (*clientes).operacionesRealizadas = (*clientes).operacionesRealizadas - 1;
                    }
                    break;
                case 3:
                    // Valido si tiene operaciones para hacer
                    if ((*clientes).operacionesRealizadas <= 0)
                    {
                        printf("\nHa alcanzado el l%cmite de operaciones. Gracias.\n Para continuar, debe iniciar sesi%cn nuevamente.\n", 161, 162);
                    }
                    else // En caso contrario muestro el saldo
                    {
                        
                        printf("\nSaldo actual: %.2f\n", clientes[indiceCliente].saldo);
                        (*clientes).operacionesRealizadas = (*clientes).operacionesRealizadas - 1;
                    }
                    break;
                case 4:
                    // Valido si tiene operaciones para hacer
                    if ((*clientes).operacionesRealizadas <= 0)
                    {
                        printf("\nHa alcanzado el l%cmite de operaciones. Gracias.\n Para continuar, debe iniciar sesi%cn nuevamente.\n", 161, 162);
                    }
                    else // En caso contrario llamo a la funcion realizarTransferenciaEntreCuentas y cuando termina le resta una operacion realizada
                    {
                        realizarTransferenciaEntreCuentas(clientes);
                        (*clientes).operacionesRealizadas = (*clientes).operacionesRealizadas - 1;
                    }
                    break;
                case 5:
                    // Valido si tiene operaciones para hacer
                    if ((*clientes).operacionesRealizadas <= 0)
                    {
                        printf("\nHa alcanzado el l%cmite de operaciones. Gracias.\n Para continuar, debe iniciar sesi%cn nuevamente.\n", 161, 162);
                    }
                    else // En caso contrario le muestro su saldo y las operaciones realizadas
                    {
                        (*clientes).operacionesRealizadas = (*clientes).operacionesRealizadas - 1;
                        printf("\nSaldo actual: %.2f\n", clientes[indiceCliente].saldo);
                        printf("Cantidad de operaciones realizadas: %d \n", (10 - (*clientes).operacionesRealizadas));
                    }
                    break;
                case 6:
                    // Sale de la cuenta y vuelve al principio
                    printf("\nSaliendo del cajero autom%ctico. Gracias por utilizar nuestros servicios.\n", 160);
                    break;
                default:
                    // Valido el numero ingresado y le muestro el mensaje en caso de que no sea valido
                    printf("\nOpci%cn no v%clida\n", 162, 160);
                    break;
                }
            } while (opcion != 6); // Sale solo si ingresa la opcion 6
        }
        else if (indiceCliente == -1) // Si devuelve -1 en el indice muestra este mensaje
        {
            printf("\nSu cuenta est%c bloqueada; comun%cquese con la entidad bancaria.\n", 160, 161);
        }
        else if (indiceCliente == -2) // Si devuelve -2 en el indice le muestra este mensaje y le descuenta un intento
        {
            clientes[banderaCliente].intentosFallidos = clientes[banderaCliente].intentosFallidos - 1;
            printf("\nContrase%ca incorrecta. Le quedan %d intentos.\n", 164, clientes[banderaCliente].intentosFallidos);
            if (clientes[banderaCliente].intentosFallidos == 0) // Si llega a 0 intentos le bloquea la cuenta
            {
                printf("\nNo se permiten m%cs intentos. Su cuenta ha sido bloqueada; comun%cquese con la entidad bancaria.\n", 160, 161);
                strcpy(clientes[banderaCliente].estado, "Bloqueado");
            }
        }
        else if (indiceCliente == -3) // Si devuelve -3 en el indice muestra este mensaje
        {
            printf("\nN%cmero de cuenta incorrecto.\n", 163);
        }
    }
}


//  Integrantes:
//      Lorenzo Piatti
//      Lautaro Bidrera
//      Delfina Marmirolli
//      Geraldine Martinez