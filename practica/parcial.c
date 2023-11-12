#include <stdlib.h>
#include <stdio.h>

void main()
{
//Hace poco tiempo atrás, TUP Bank S.A le encargó el desarrollo de un programa de “cajero virtual” para probar la usabilidad de los mismos. 
//Luego de evaluar el mismo, la gerencia ha decidido modificar los requerimientos. Los nuevos requerimientos son:

// 1-No debe ingresarse PIN y clave de acceso

// 2-Dispondrá de un saldo inicial de 100000(cien mil) pesos 

// 3-Tendrá las opciones de Ingreso de Dinero, Extracción, Consulta de Saldo. y Consulta de últimos movimientos y Salir //menu

// 4-El monto a ingresar o extraer no podrá ser superior a 20000 (veinte mil) pesos

// 5-Un monto de valor igual a 0 (cero) deberá cancelar la operación de ingreso o extracción.

// 6-La cantidad máxima de operaciones a realizar  es de 20 movimientos. Los movimientos de ingresos se visualizarán como números positivos y los extracciones como números negativos

// 7-El formato de la consulta de movimientos realizados, tendrá el formato:
// Nro Mov    Importe
//    1        1000
//    2        -500


    float saldoInicial = 100000, montoExtraer, montoLimite = 20000, montoIngresado;
    int movIngreso = 0, movExtraccion = 0, opcion;
    int movimientosRealizados = 0;
    int operacionesMaximas[20];

    printf("Bienvenido \n");
    while (opcion != 5 && movimientosRealizados < 20) 
    {
        
        printf("1. Ingreso de dinero \n");
        printf("2. Extraccion \n");
        printf("3. Consulta de saldo \n");
        printf("4. Consulta de movimientos \n");
        printf("5. Salir \n");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                
                if(movimientosRealizados < 20) {
                    printf("Ingrese el monto a ingresar \n");
                    scanf("%f", &montoIngresado);
                }

                if(montoIngresado > 0 && montoIngresado <= montoLimite)
                {
                    saldoInicial = saldoInicial + montoIngresado;
                    movIngreso = movIngreso + 1;
                    operacionesMaximas[movimientosRealizados] = montoIngresado;
                    movimientosRealizados = movimientosRealizados + 1;

                } else if (montoIngresado < 0){
                    printf("Monto no valido, la operacion no fue realizada. \n");
                
                } else if(montoIngresado > montoLimite){
                    printf("Monto superior a lo que puede ingresar \n");
                } else {
                    printf("Alcanzo la cantidad maxima de operaciones \n");
                }
                break;

            case 2:
                    if(movimientosRealizados < 20) {
                        printf("Ingrese el monto a extraer \n");
                        scanf("%f", &montoExtraer);
                    }
                                
                    if(montoExtraer > 0 && montoExtraer <= montoLimite && montoExtraer < saldoInicial)
                    {
                        saldoInicial = saldoInicial - montoExtraer;
                        movExtraccion = movExtraccion - 1;
                        operacionesMaximas[movimientosRealizados] = -montoExtraer;
                        movimientosRealizados = movimientosRealizados + 1;
                        printf("Operacion exitosa \n");

                    } else if (montoExtraer > saldoInicial){
                        printf("No tiene suficiente saldo \n");
                    } else if(montoExtraer > montoLimite ||  montoExtraer < 0) {
                        printf("Monto de extraccion invalido \n");
                    } else {
                        printf("Alcanzo la cantidad maxima de operaciones \n");
                    }
                break;

            case 3:
                consultaSaldo(&saldoInicial);
                break;

            case 4:
                consultaMovimientos(operacionesMaximas[20], movimientosRealizados);
                break;

            case 5:
                printf("Hasta luego \n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente \n");
        
        }
    }



    system("pause");
}

void consultaMovimientos(int operacionesMaximas[], int movimientosRealizados)
{
    printf("Consulta de movimientos \n");
    printf("Nro Mov    Importe\n");
    for (int i = 0; i < movimientosRealizados; i++)
    {
        printf(" %d       %.2f \n", i+1, operacionesMaximas[i]);
    }
    
}


void consultaSaldo(float *saldo)
{
    printf("Su saldo actual es: %.2f \n", saldo);
}


// #include <stdlib.h>
// #include <stdio.h>
// struct Movimiento {
//     int numero;
//     int importe;
// };

// void main()
// {
//     // Definir numeroCuenta, contraseñaCliente, nombreCliente, saldoCliente, estadoCliente(bandera)
//     // limiteOperaciones = 10
//     // Intentos= (contador)3

//     int numeroCuenta, contrasenaCliente, limiteOperaciones = 10, intentos = 3, intentosFallidos = 0, estadoCliente = 1; //(1 activo, 0 bloqueado);
//     int numeroCuentaCorrecto = 127, contrasenaCorrecta = 1234, opcionMenu, movimientosRealizados = 0;
//     // char nombreCliente = "geraldine";
//     float saldoCliente, montoIngresado, montoExtraer;
//     struct Movimiento movimientos[limiteOperaciones];
   
//    printf("Bienvenido/a \n");
//    do
//    {
//         printf("Ingrese su n%cmero de cuenta \n", 163);
//         scanf("%d", &numeroCuenta);
//         printf("Ingrese su contrase%ca \n", 164);
//         scanf("%d", &contrasenaCliente);

//         if(numeroCuenta == numeroCuentaCorrecto && contrasenaCliente == contrasenaCorrecta)
//         {
//             if(estadoCliente == 1) {

//                 printf("Ingreso de sesi%cn exitoso. Bienvenido/a %s \n", 162);
//                 printf("1. Realizar un Dep%csito. \n", 162); 
//                 printf("2. Realizar una Extracci%cn. \n", 162);
//                 printf("3. Consultar el Saldo de la Cuenta. \n");
//                 printf("4. Realizar una Transferencia entre Cuentas.\n");
//                 printf("5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual. \n");
//                 printf("6. Salir de la Sesi%cn. \n", 162);
//                 scanf("%d", &opcionMenu);

//                 switch (opcionMenu)
//                 {
//                     case 1:
//                         if(movimientosRealizados < 10)
//                         {
//                             printf("Ingrese el monto del dep%csito \n", 162);
//                             scanf("%f", &montoIngresado);
//                             movimientosRealizados = movimientosRealizados + 1;
//                             movimientos[movimientosRealizados].numero = movimientosRealizados + 1;
//                             movimientos[movimientosRealizados].importe = montoIngresado;
//                         }

//                         if(montoIngresado > 0)
//                         {
//                             saldoCliente = saldoCliente + montoIngresado;

//                         } else if (montoIngresado < 0){
//                             printf("Monto no v%clido, la operaci%cn no fue realizada. \n", 160, 162);
                
//                         } else {
//                             printf("Ha alcanzado el límite de operaciones. Gracias. \n", 161);
//                         }
               
//                     break;
//                     case 2:
//                         if(movimientosRealizados < 10)
//                         {
//                             printf("¿Cuanto dinero desea extraer? \n");
//                             scanf("%f", &montoExtraer);
//                             movimientosRealizados = movimientosRealizados + 1;
//                         }

//                         if(montoExtraer > 0 && montoExtraer <= saldoCliente)
//                         {
//                             saldoCliente = saldoCliente - montoExtraer;
//                             printf("Extracci%n exitosa \n", 162);
//                             movimientos[movimientosRealizados].numero = movimientosRealizados + 1;
//                             movimientos[movimientosRealizados].importe = -montoIngresado;
                        
//                         } else if (montoIngresado < 0){
//                             printf("Monto no v%clido, la operaci%cn no fue realizada. \n", 160, 162);
                
//                         } else {
//                             printf("Ha alcanzado el límite de operaciones. Gracias. \n", 161);
//                         }
//                         break;
//                     case 3:
//                         printf("Saldo: $%f\n", saldoCliente);
//                         //consulta saldo
//                         break;
//                     case 4:
//                         //realizar transferencia
//                         break;
                
//                     case 5:
//                         //cantidad operaciones
//                         printf("Consulta de cantidad de operaciones:\n");
//                         printf("Nro Mov    Importe\n");
//                         for (int i = 0; i < movimientosRealizados; i++) {
//                             printf("%5d %9d\n", movimientos[i].numero, movimientos[i].importe);
//                         }
                
//                         break;
//                     case 6:
//                         printf("Hasta luego \n");
//                         break;
                 
//                     default:
//                     printf("Opci%cn inv%clida. Intente nuevamente \n", 162, 160);
//                     break;
//                 }

//             } else {
//                 printf("Su cuenta esta bloqueada; comun%cquese con la entidad bancaria.\n", 161);
//             }


//         } else {
//             intentosFallidos = intentosFallidos + 1;
//             printf("N%cmero de cuenta o contrase%ca incorrecta. \n", 163, 164);
//         }

//         if (intentosFallidos >= intentos) 
//         {
//             printf("No se permiten m%cs intentos. Su cuenta ha sido bloqueada, comun%cquese con la entidad bancaria.\n", 160, 161);
//         }
//    }while(intentosFallidos < intentos);
   
   
  
   


// }