#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Cliente {
    char nombreCliente[20];
    int numeroCuenta;
    int contrasenaCliente;
    float saldoCliente;
    int estado;  // (1 activo, 0 bloqueado);
    int intentos;
    int intentosFallidos;
    int movimientosRealizados;
    
};
struct Movimiento {
    int numero;
    int importe;
};

void cargarClientes(struct Cliente clientes[], int numCliente);
float ingresoDinero(struct Cliente *cliente);
float saldoCuenta(struct Cliente *cliente);
float extraccionDinero(struct Cliente *cliente);

void main()
{
    struct Cliente clientes[10];  // Array de clientes
    int numClientes = 10, clienteActual = -1; //cuando no hay ningun cliente activo esta en -1, cuando ingresa un cliente cambia al indice del array clientes que ingreso.
    int numeroCuenta, contrasenaCliente, intentos = 3, intentosFallidos = 0, estadoCliente = 1; 
    int opcionMenu, movimientosRealizados = 0, encontrado = 0;
    float montoIngresado, saldoCliente, montoExtraer;
    struct Movimiento movimientos[10];
  
   
    cargarClientes(clientes, numClientes);

    printf("Bienvenido/a \n");

    do 
    {

       if(estadoCliente == 1) { 
            printf("Ingrese su n%cmero de cuenta \n", 163);
            scanf("%d", &numeroCuenta);
            printf("Ingrese su contrase%ca \n", 164);
            scanf("%d", &contrasenaCliente);

            for (int i = 0; i < numClientes; i++)
            {
                if (clientes[i].numeroCuenta == numeroCuenta && clientes[i].contrasenaCliente == contrasenaCliente && clientes[i].estado == 1)
                {
                    clienteActual = i;
                    encontrado = 1;
                    break;
                } else {
                    clienteActual = i;
                }
            }
            if (encontrado == 0) {
                printf("N%cmero de cuenta o contrase%ca incorrecta. \n",163, 164);
                clientes[clienteActual].intentosFallidos++;
                printf("Intentos fallidos: %d \n", clientes[clienteActual].intentosFallidos);
            }
            if(clientes[clienteActual].intentosFallidos >= clientes[clienteActual].intentos)
            {
                printf("No se permiten m%cs intentos. Su cuenta esta bloqueada; comun%cquese con la entidad bancaria.\n", 160, 161);
            }
            
        }   if(encontrado == 1)
            {
                do
                {
                    if (clientes[clienteActual].movimientosRealizados >= 10) 
                    {
                        printf("Ha alcanzado el l%cmite de operaciones. Gracias. \n", 161);
                        break;  // Salir del bucle
                    }
                    printf("Ingreso de sesi%cn exitosa. Bienvenido/a, %s\n", 162, clientes[clienteActual].nombreCliente);
                    printf("1. Realizar un Dep%csito. \n", 162); 
                    printf("2. Realizar una Extracci%cn. \n", 162);
                    printf("3. Consultar el Saldo de la Cuenta. \n");
                    printf("4. Realizar una Transferencia entre Cuentas.\n");
                    printf("5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual. \n");
                    printf("6. Salir de la Sesi%cn. \n", 162);
                    scanf("%d", &opcionMenu);
                
              
                    switch (opcionMenu)
                    {
                        case 1:
                            //funcion ingresar dinero
                            ingresoDinero(&clientes[clienteActual]);
                        break;
                        case 2:
                            extraccionDinero(&clientes[clienteActual]);
                        break;
                        case 3:
                            saldoCuenta(&clientes[clienteActual]);
                            //consulta saldo
                        break;
                        case 4:
                            //realizar transferencia
                            break;
                    
                        case 5:
                            //cantidad operaciones
                            printf("Consulta de cantidad de operaciones:\n");
                            printf("Movimientos    Importe\n");
                            for (int i = 0; i < movimientosRealizados; i++) {
                                printf("%d %.2f\n", movimientos[i].numero, movimientos[i].importe);
                            }
                            // for (int i = 0; i < (clientes[clienteActual].movimientosRealizados); i++
                        
                            break;
                        case 6:
                            printf("Hasta luego \n");
                            return;
                    
                        default:
                        printf("Opci%cn inv%clida. Intente nuevamente \n", 162, 160);
                        break;
                    }

                }while((encontrado == 1) || (opcionMenu < 0 && opcionMenu > 6) && (clientes[clienteActual].movimientosRealizados <= 10));
            }
    }while(clientes[clienteActual].intentos > clientes[clienteActual].intentosFallidos);
   
}

void cargarClientes(struct Cliente clientes[], int numCliente){

    //asignamos nombres
    strcpy(clientes[0].nombreCliente, "Geraldine");
    strcpy(clientes[1].nombreCliente, "Delfina");
    strcpy(clientes[2].nombreCliente, "Fernando");
    strcpy(clientes[3].nombreCliente, "Paula");
    strcpy(clientes[4].nombreCliente, "Lautaro");
    strcpy(clientes[5].nombreCliente, "Cristian");
    strcpy(clientes[6].nombreCliente, "Martina");
    strcpy(clientes[7].nombreCliente, "Sofia");
    strcpy(clientes[8].nombreCliente, "Marisa");
    strcpy(clientes[9].nombreCliente, "Bianca");

    for (int i = 0; i < numCliente; i++)
    {
        clientes[i].numeroCuenta = 120 + i;
        clientes[i].contrasenaCliente = 1234;
        clientes[i].saldoCliente = 00.00;
        clientes[i].estado = 1;
        clientes[i].intentos = 3;
        clientes[i].intentosFallidos = 0;
        clientes[i].movimientosRealizados = 0;
    }
    
}

float ingresoDinero(struct Cliente *cliente)
{
    float montoIngresado;
    if ((*cliente).movimientosRealizados < 10)
    {
        printf("Ingrese el monto del dep%csito \n", 162);
        scanf("%f", &montoIngresado);
    }

    if(montoIngresado > 0)
    {
        (*cliente).saldoCliente += montoIngresado;
        (*cliente).movimientosRealizados++;
        printf("Movimientos reaizados:  \n", (*cliente).movimientosRealizados);
        // movimientos[*movimientosRealizados].numero = *movimientosRealizados + 1;
        // movimientos[*movimientosRealizados].importe = montoIngresado;
    } else if (montoIngresado <= 0) 
    {
        printf("Monto inv%clido, la operaci%cn no fue realizada. \n", 160, 162);
        (*cliente).movimientosRealizados++;
    } else {
        printf("Ha alcanzado el l%cmite de operaciones. Gracias. \n", 161);
    }
    return 0; // Depósito no exitoso
}

float saldoCuenta(struct Cliente *cliente)
{
    (*cliente).movimientosRealizados++;
    printf("Saldo actual: %.2f\n", (*cliente).saldoCliente);
}


float extraccionDinero(struct Cliente *cliente)
{
    float montoExtraer;

    if((*cliente).movimientosRealizados < 10)
    {
        printf("Ingrese el monto a extraer \n");
        scanf("%f", &montoExtraer);
    }

    if(montoExtraer > 0 && (montoExtraer <= (*cliente).saldoCliente))
    {
        (*cliente).saldoCliente -= montoExtraer;
        (*cliente).movimientosRealizados++;

    } else if (montoExtraer <= 0)
    {
        printf("Monto inv%clido, la operaci%cn no fue realizada. \n", 160, 162);
        (*cliente).movimientosRealizados++;

    } else if(montoExtraer > (*cliente).saldoCliente)
    {
        printf("El monto ingresado es mayor al dinero en cuenta. \n");
        (*cliente).movimientosRealizados++;

    } else 
    {
        printf("Ha alcanzado el límite de operaciones. Gracias. \n", 161);
    }

    return 0;
}

// void consultaMovimientos(struct Cliente *cliente)
