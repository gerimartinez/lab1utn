#include <stdio.h>
#include <stdlib.h>

int numerosID[50];
float pesos[50];
int destinos[50];
int horasPlanificadas[50];
int estados[50];

const int tam = 50;

void cargarEnvios();
void mostrarEnvios();
void modificarEstadoDeUnEnvio();
void mostrarEnvioParaDestino(int destino);

void main()
{
    int opcion = 0;
    int des = 0; 

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1: 
                    //Cargar envíos planificados
                    cargarEnvios();
                    break;
                case 2: 
                    //Mostrar envíos planificados
                    mostrarEnvios();
                    break;
                case 3: 
                    //Modificar estado de un envío  
                    modificarEstadoDeUnEnvio();
                    break;
                case 4: 
                    //Mostrar envíos para un destino
                    printf("Destino a buscar: ");
                    printf("\n1- Rosario");
                    printf("\n2- Funes");
                    printf("\n3- Roldan");
                    printf("\n4- Baigorria");
                    printf("\n");
                    scanf("%i", &des);

                    mostrarEnvioParaDestino(des);

                    break;
                default:
                    printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }  
        }

    } while (opcion != 5);
}

void cargarEnvios()
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for(int i = 0; i < tam; i++)
    {
        printf("Nro. de env%co: ", 161);	
        scanf("%d", &numerosID[i]);

        printf("Ingrese el peso: ");
        scanf("%f", &pesos[i]);
        
        printf("Ingrese el destino: ");
        printf("\n1- Rosario");
        printf("\n2- Funes");
        printf("\n3- Roldan");
        printf("\n4- Baigorria");
        printf("\n");
        scanf("%i", &destinos[i]);

        printf("Ingrese la hora: ");
        scanf("%d", &horasPlanificadas[i]);

        printf("Ingrese el estado: ");
        printf("\n0- Pendiente");
        printf("\n1- Despachado");
        printf("\n");
        scanf("%d", &estados[i]);
    }
}

void mostrarEnvios()
{
    for(int i = 0; i < tam; i++)
    {
        printf(" %d \t", numerosID[i]);
        printf(" %.2f \t", pesos[i]);
        switch(destinos[i])
        {
            case 1:
                printf("Rosario");
                break;
            case 2:
                printf("Funes");
                break;
            case 3:
                printf("Roldan");
                break;
            case 4:
                printf("Baigorria");
                break; 
            default:
                printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf(" %d hs \t", horasPlanificadas[i]);

        switch(estados[i])
        {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            default:
                printf("Estado inv%clido\n", 160);
        }
        
        printf("\n");    
    }
}

void modificarEstadoDeUnEnvio()
{
    int nroID = 0, est = 0;
    int encontrado = 0;

	printf("Nro del env%co a modificar:", 161);	
    scanf("%d", &nroID);

    
}

void mostrarEnvioParaDestino(int destino)
{

}

void ingresoDinero(float *saldoInicial, float *operacionesMaximas, int *movimientosRealizados)
{
    float montoIngresado, montoExtraer,  saldoInicial = 100000;
    float operacionesMaximas[20], movimientosRealizados = 0;

    printf("Ingrese el monto a ingresar \n");
    scanf("%f", &montoIngresado);

    if(montoIngresado <= 0 || montoIngresado == 20000 || montoExtraer == 20000) 
    {
        printf("Monto no permitido, operacion cancelada.");

    } else {

        *saldoInicial = *saldoInicial + montoIngresado;
        operacionesMaximas[*movimientosRealizados] = montoIngresado;
        *movimientosRealizados = *movimientosRealizados + 1;

        printf("Nuevo saldo: %.2f \n", saldoInicial);
    }

}

void extraccionDinero(float *saldoInicial, float *operacionesMaximas, int *movimientosRealizados) {
    float saldoInicial = 100000;
    float montoIngresado, montoExtraer;
    float operacionesMaximas[20], movimientosRealizados = 0;
    float montoExtraer;
    printf("Ingrese el monto a extraer \n");
    scanf("%f", &montoExtraer);

    if (montoExtraer <= 0 || montoExtraer > 20000 || montoExtraer > *saldoInicial) {

        printf("Monto no permitido, operacion cancelada \n");

    } else {

        *saldoInicial = *saldoIncial - montoExtraer;
        operacionesMaximas[*movimientosRealizados] = -montoExtraer; // Registrar movimiento de extracción
        *movimientosRealizados = *movimientosRealizados + 1;
        printf("Nuevo saldo: %.2f \n", *saldoIncial);
    }
}