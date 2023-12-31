#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Cliente {
    char nombreCliente[20];
    int numeroCuenta;
    int contrasena;
    float saldo;
    int estado;  // (1 activo, 0 bloqueado);
    int intentosFallidos;
    int movimientosRealizados;
};
struct Movimiento {
    int numero;
    int importe;
};

void main()
{
    // Definir numeroCuenta, contraseñaCliente, nombreCliente, saldoCliente, estadoCliente(bandera)
    // limiteOperaciones = 10
   //Definir nombre de clientes, numeros de cuenta, y contraseñas (10)
    struct Cliente clientes[10];  // Array de clientes
    int numClientes = 10;
    int numeroCuenta, contrasenaCliente, limiteOperaciones = 10, intentos = 3, intentosFallidos = 0, estadoCliente = 0; //(1 activo, 0 bloqueado);
    int numeroCuentaCorrecto = 127, contrasenaCorrecta = 1234, opcionMenu, movimientosRealizados = 0;
    float montoIngresado, saldoCliente, montoExtraer;
    struct Movimiento movimientos[limiteOperaciones];
    // char nombreCliente = "geraldine";
   
   
   printf("Bienvenido/a \n");
    while (intentosFallidos < intentos)
    {

       if(!estadoCliente) { 
            printf("Ingrese su n%cmero de cuenta \n", 163);
            scanf("%d", &numeroCuenta);
            printf("Ingrese su contrase%ca \n", 164);
            scanf("%d", &contrasenaCliente);

            if(numeroCuenta == numeroCuentaCorrecto && contrasenaCliente == contrasenaCorrecta)
            {
                estadoCliente = 1;
                printf("Ingreso de sesi%cn exitosa. \n", 162);

            } else {
                intentosFallidos = intentosFallidos + 1;
                printf("N%cmero de cuenta o contrase%ca incorrecta. \n", 163, 164); 
                
                if(intentosFallidos >= intentos)
                {
                    printf("No se permiten m%cs intentos. Su cuenta esta bloqueada; comun%cquese con la entidad bancaria.\n", 160, 161);
                }
            }
        } else {
                printf("Ingreso de sesi%cn exitoso. Bienvenido/a \n", 162);
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
                        if(movimientosRealizados < 10)
                        {
                            printf("Ingrese el monto del dep%csito \n", 162);
                            scanf("%f", &montoIngresado);
                            
                        }

                        if(montoIngresado > 0)
                        {
                            saldoCliente = saldoCliente + montoIngresado;
                            movimientosRealizados = movimientosRealizados + 1; 
                            movimientos[movimientosRealizados].numero = movimientosRealizados + 1;
                            movimientos[movimientosRealizados].importe = montoIngresado;

                        } else if (montoIngresado < 0){
                            printf("Monto no v%clido, la operaci%cn no fue realizada. \n", 160, 162);
                
                        } else {
                            printf("Ha alcanzado el límite de operaciones. Gracias. \n", 161);
                        }
               
                    break;
                    case 2:
                        if(movimientosRealizados < 10)
                        {
                            printf("¿Cuanto dinero desea extraer? \n");
                            scanf("%f", &montoExtraer);
                            
                        }

                        if(montoExtraer > 0 && montoExtraer <= saldoCliente)
                        {
                            saldoCliente = saldoCliente - montoExtraer;
                            movimientosRealizados = movimientosRealizados + 1;
                            movimientos[movimientosRealizados].numero = movimientosRealizados + 1;
                            movimientos[movimientosRealizados].importe = -montoIngresado;
                            printf("Extracci%cn exitosa \n", 162);
                            
                        
                        } else if (montoIngresado < 0){
                            printf("Monto no v%clido, la operaci%cn no fue realizada. \n", 160, 162);
                
                        } else {
                            printf("Ha alcanzado el límite de operaciones. Gracias. \n", 161);
                        }
                        break;
                    case 3:
                        printf("Saldo: $%.2f\n", saldoCliente);
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
                       
                        break;
                    case 6:
                        printf("Hasta luego \n");
                        break;
                 
                    default:
                    printf("Opci%cn inv%clida. Intente nuevamente \n", 162, 160);
                    break;
                }
            }
    }
   
  
   


}

void cargarClientes(struct Cliente clientes[], int numCliente){

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
        clientes[i].contrasena = 1234;
        clientes[i].saldo = 00.00;
        clientes[i].estado = 1;
        clientes[i].intentosFallidos = 0;
        clientes[i].movimientosRealizados = 0;
    }
    

}