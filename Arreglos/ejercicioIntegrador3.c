#include <stdlib.h>
#include <stdio.h>

void main() {
    // Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
    // cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
    // opciones a resolver:
    // 1. Cargar Alumnos
    // 2. Buscar un alumno
    // 3. Modificar la nota de un alumno
    // 4. Mostrar un listado de los 10 alumnos
    // 5. Salir
    // Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
    // Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
    // mayor a 0 y menor o igual que 10.
    // La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
    // ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
    // La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
    // DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
    // encuentra modificar la nota del alumno por la ingresada.
    // La opción 4 debe mostrar en la consola el listado de alumnos.
    // SÓLO se saldrá de la aplicación si se selecciona la opción 5.   

    int dnis[10] = {0}, dniABuscar, dniEncontrado = 0, dni;
    float notas[10] = {0}, nota, nuevaNota;
    char nacionalidades[10]; // s si es de nacionalidad argentina y n si es de otra nacionalidad
    

    //float alumnos[10][2]= {0};
    int opcion;
    int tam = 3;

    do 
    {
        printf(" \n Elija una opcion \n", 162);
        printf("1. Cargar alumnos \n");
        printf("2. Buscar un alumno \n");
        printf("3. Modificar una nota \n");
        printf("4. Mostrar alumnos \n");
        printf("5. Salir \n\n");
        scanf("%d", &opcion);

        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1:
                    //cargar alumnos, validar rangos
                    
                    for (int i = 0; i < tam; i++)
                    {
                        //ingresr dni
                        printf("Ingrese el dni del alumno %d \n", i+1);
                        scanf("%d", &dnis[i]);

                        while(dnis[i] < 1000000  || dnis[i] > 99999999)
                        {
                            printf("El dni ingresado es erroneo, vuelva a ingresarlo \n");
                            scanf("%d", &dnis[i]);
                        }
                        
                        
                        //ingresar nota

                        printf("Ingrese la nota del alumno %d \n", i+1);
                        scanf("%f", &notas[i]);

                        while(notas[i] < 0 || notas[i] > 10)
                        {
                            printf("La nota ingresada es erronea, vuelva a ingresarla \n");
                            scanf("%f", &notas[i]);
                        }  
                    }
                              
                break;

                case 2:
                    //buscar alumno con for
                    dniEncontrado = 0;

                    printf("Ingrese el dni del alumno a buscar \n");
                    scanf("%d", &dniABuscar);

                    for(int i = 0; i < tam; i++)
                    {
                        if(dniABuscar == dnis[i])
                        {
                            printf("La nota del alumno con %d es %.2f \n", dnis[i], notas[i]);
                            dniEncontrado = 1;
                        }     
                    }
                    if(dniEncontrado == 0) 
                    {
                        printf("Dni inexistente");
                    }
                    //buscar alumno con while
                    // printf("Ingrese el dni del alumno a buscar \n");
                    // scanf("%d", &dniEncontrado);
                    //while ()
                
                break;

                case 3:
                    //moficar una nota
                    dniEncontrado = 0;
                    printf("Ingrese el dni del alumno a cambiar la nota \n");
                    scanf("%d", &dniABuscar);

                    for (int i = 0; i < tam; i++)
                    {
                        if(dniABuscar == dnis[i])
                        {
                            printf("La nota del alumno con %d es %.2f \n", dnis[i], notas[i]);
                            printf("Ingrese la nueva nota \n");
                            scanf("%f", &nuevaNota);
                            
                            while(nuevaNota < 0 || nuevaNota > 10)
                            {
                                printf("La nota ingresada es erronea, vuelva a ingresarla \n");
                                scanf("%f", &nuevaNota);
                            }
                            notas[i] = nuevaNota;
                            dniEncontrado = 1;
                        }
                    }
                    if(dniEncontrado == 0) 
                    {
                        printf("Dni inexistente \n");
                    }
                    printf("La nueva nota es: %.2f \n", nuevaNota);
                    
                break;

                case 4:
                    //mostrar alumno
                    for (int i = 0; i < tam; i++)
                    {
                        printf("El dni del alumno es %d y su nota: %.2f \n", dnis[i], notas[i]);
                    }
                    
                break;
                default:
                    printf("Opcion invalida \n");
                break;
            }
        }

    } while(opcion != 5);

    system("pause");

}






