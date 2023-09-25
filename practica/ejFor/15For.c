#include <stdlib.h>
#include <stdio.h>

void main(){
//   Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones. 
// Mostrar el promedio por alumno y el promedio general

    float nota = 0, promedioAlumno = 0, promedioGeneral = 0, sumaNotas = 0;
    int cantAlumnos = 5, cantNotas = 3;

    for(int i = 1; i <= cantAlumnos; i++){

        printf("Ingrese la calificacion del alumno %i: \n", i);


        for(int j = 1; j <= cantNotas; j++){

            printf("Ingrese la calificacion del alumno: %i \n", j);
            scanf("%f", &nota);

            sumaNotas = sumaNotas + nota;
        }
        
        promedioAlumno = sumaNotas / cantNotas;
        printf("El promedio del alumno %d es: %f \n", i, promedioAlumno);
        
        promedioGeneral = promedioGeneral + promedioAlumno;

        printf("El promedio general es: %f \n", promedioGeneral / cantAlumnos);
        
        sumaNotas = 0; //vuelvo a cero el acuumulador.
    }

   

}