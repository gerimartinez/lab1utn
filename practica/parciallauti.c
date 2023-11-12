#include <stdlib.h>
#include <stdio.h>

#include <stdio.h>

#define MAX_OPERACIONES 20
#define MONTO_MAXIMO 20000
#define SALDO_INICIAL 100000

struct Movimiento {
    int numero;
    int importe;
};

int main() {
    int saldo = SALDO_INICIAL;
    int operacionesRealizadas = 0;
    struct Movimiento movimientos[MAX_OPERACIONES];

    printf("Bienvenido al Cajero Virtual\n");

    while (operacionesRealizadas < MAX_OPERACIONES) {
        printf("\nOpciones disponibles:\n");
        printf("1. Ingreso de Dinero\n");
        printf("2. Extracción\n");
        printf("3. Consulta de Saldo\n");
        printf("4. Consulta de últimos movimientos\n");
        printf("5. Salir\n");

        int opcion;
        printf("Ingrese el número de la opción deseada: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el monto a ingresar (0 para cancelar): ");
                int montoIngreso;
                scanf("%d", &montoIngreso);
                if (montoIngreso == 0 || montoIngreso > MONTO_MAXIMO) {
                    printf("Operación cancelada.\n");
                } else {
                    saldo += montoIngreso;
                    printf("Ingreso exitoso. Nuevo saldo: %d\n", saldo);
                    movimientos[operacionesRealizadas].numero = operacionesRealizadas + 1;
                    movimientos[operacionesRealizadas].importe = montoIngreso;
                    operacionesRealizadas++;
                }
                break;

            case 2:
                printf("Ingrese el monto a extraer (0 para cancelar): ");
                int montoExtraccion;
                scanf("%d", &montoExtraccion);
                if (montoExtraccion == 0 || montoExtraccion > MONTO_MAXIMO) {
                    printf("Operación cancelada.\n");
                } else {
                    saldo -= montoExtraccion;
                    printf("Extracción exitosa. Nuevo saldo: %d\n", saldo);
                    movimientos[operacionesRealizadas].numero = operacionesRealizadas + 1;
                    movimientos[operacionesRealizadas].importe = -montoExtraccion;
                    operacionesRealizadas++;
                }
                break;

            case 3:
                printf("Consulta de Saldo: %d\n", saldo);
                break;

            case 4:
                printf("Consulta de últimos movimientos:\n");
                printf("Nro Mov    Importe\n");
                for (int i = 0; i < operacionesRealizadas; i++) {
                    printf("%5d %9d\n", movimientos[i].numero, movimientos[i].importe);
                }
                break;

            case 5:
                printf("Gracias por utilizar el Cajero Virtual. Hasta luego.\n");
                return 0;

            default:
                printf("Opción no válida. Por favor, ingrese un número válido.\n");
        }
    }

    printf("Ha alcanzado el límite de operaciones permitidas.\n");
    printf("Gracias por utilizar el Cajero Virtual. Hasta luego.\n");

    return 0;
}
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

    float saldoInicial = 100000, montoIngresado, montoExtraer, montoLimite = 20000;
    int movIngreso = 0, movExtraccion = 0, movimientosRealizados = 0, opcion;
    int operacionesMaximas[20];


    printf("Bienvenido a TUP BANK S.A \n");

    while(opcion != 5 && movimientosRealizados < 20){

        printf("1. Ingreso de dinero \n");
        printf("2. Extraccion \n");
        printf("3. Consulta de saldo \n");
        printf("4. Consulta de ultimos movimientos \n");
        printf("5. Salir \n");
        scanf("%d", &opcion);


        switch (opcion)
        {
        case 1:
                if(movimientosRealizados < 20){
                    printf("Ingrese el monto que desea ingresar \n");
                    scanf("%f", &montoIngresado);
                }

                if(montoIngresado >= 0 && montoIngresado < montoLimite)
                {
                    saldoInicial = saldoInicial + montoIngresado;
                    movimientosRealizados = movimientosRealizados + 1;
                    operacionesMaximas[movimientosRealizados] = montoIngresado;  
                } else if(montoIngresado <= 0) {
                    printf("La operacion ha sido cancelada \n");

                } else {
                    printf("Ha alcanzado la cantidad maxima de operaciones \n");
                }
            break;
        case 2:
            if(movimientosRealizados < 20)
            {
                printf("Ingrese el monto que desea extraer \n");
                scanf("%f", &montoExtraer);
            } 

            if(montoExtraer > 0 && montoExtraer <= montoLimite && montoExtraer < saldoInicial)
            {
                saldoInicial = saldoInicial - montoExtraer;
                movimientosRealizados = movimientosRealizados + 1;
                operacionesMaximas[movimientosRealizados] = -montoExtraer;
                printf("Operacion exitosa \n");

            } else if(montoExtraer > saldoInicial)
            {
                printf("Usted no posee suficientes fondos \n");
            } else if(montoExtraer <= 0 || montoExtraer > montoLimite)
            {
                printf("La operacion ha sido cancelada \n");
            } else {
                printf("Ha alcanzado la cantidad maxima de operaciones \n");
            }
            break;
        case 3:
            consultaSaldo(&saldoInicial);
            break;
        case 4:
            consultaMovimientos( operacionesMaximas[movimientosRealizados],  movimientosRealizados);
            break;

        default: 
            printf("Hasta luego \n");
            break;
        }
    }
}

void consultaSaldo(float *saldoInicial){
    printf("Saldo: %.2f \n", *saldoInicial);
}

void consultaMovimientos(int operacionesMaximas[], int movimientosRealizados)
{
    printf("Nro Mov    Importe \n");
    for (int i = 0; i < movimientosRealizados; i++)
    {
        printf(" %d    %d  \n", movimientosRealizados, operacionesMaximas[i]);
    }
    
}