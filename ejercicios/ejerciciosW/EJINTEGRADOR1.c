#include <stdlib.h>
#include <stdio.h>

void main() {
    // La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
    // dependen de:

    // ● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
    // ● Número de pasajeros que lleve
    // ● Tipo horario del día:

    // Horario A: horas de “Alta” congestión:
    // ● Los automóviles con tres pasajeros o más no pagan peaje
    // ● Los camiones pagan $300
    // ● Las motos pagan $100

    // Horario B: horas de “Baja” congestión:
    // ● Los automóviles pagan $150
    // ● Los camiones pagan $200
    // ● Las motos no pagan peaje
    // En este horario la tarifa es independientemente del número de pasajeros.

    // Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
    // y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
    // de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5


    int horario, horarioB, tipoVehiculo, numPasajeros, tarifa;

    do
    {
        printf("Ingrese el horario: \n");
        printf("1- Horario A: Alta congestion \n");
        printf("2- Horario B: Baja congestion \n");
        scanf("%i", &horario);

    } while (horario != 1 && horario != 2);
    
    

    if(horario == 1){

        printf("Tipo de vehiculo \n");
        printf("1. Automovil \n");
        printf("2. Camion \n");
        printf("3. Moto \n");
        scanf("%i", &tipoVehiculo);

        while(tipoVehiculo < 1 || tipoVehiculo > 3){
            printf("Tipo de vehiculo invalido. \n");
            printf("Tipo de vehiculo \n");
            printf("1. Automovil \n");
            printf("2. Camion \n");
            printf("3. Moto \n");
            scanf("%i", &tipoVehiculo);
        }

        switch(tipoVehiculo) {

            case 1:
                printf("Cantidad de pasajeros \n");
                printf("1. Uno \n");
                printf("2. Dos \n");
                printf("3. Tres \n");
                printf("4. Cuatro \n");
                printf("5. Cinco \n");
                scanf("%i", &numPasajeros);

                while(numPasajeros > 5){
                    printf("Cantidad de pasajeros excedida \n");

                    printf("Cantidad de pasajeros \n");
                    printf("1. Uno \n");
                    printf("2. Dos \n");
                    printf("3. Tres \n");
                    printf("4. Cuatro \n");
                    printf("5. Cinco \n");
                    scanf("%i", &numPasajeros);
                }

                if (numPasajeros >= 3){

                    printf("No abona peaje \n");
            
                } else {
                    tarifa = 150;
                    printf("Tarifa: %i\n", tarifa);
                }
                break;
            
            case 2:
                tarifa = 300;
                printf("Tarifa: %i\n", tarifa);
                break;
            
            case 3:
                tarifa = 100;
                printf("Tarifa: %i \n", tarifa);
                break;
            

        }


    } else if(horario == 2) {

        printf("Tipo de vehiculo \n");
        printf("1. Automovil \n");
        printf("2. Camion \n");
        printf("3. Moto \n");
        scanf("%i", &tipoVehiculo);

        switch(tipoVehiculo) {

            case 1:

                tarifa = 150;
                printf("Tarifa: %i \n", tarifa);
                break;
            
            case 2:

                tarifa = 200;
                printf("Tarifa: %i \n", tarifa);
                break;
            
            case 3: 

                printf("TNo abona peaje \n");
                break;

        }
    }
}