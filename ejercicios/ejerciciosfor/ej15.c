#include <stdlib.h>
#include <stdio.h>

int main() {
     //Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones. 
    //Mostrar el promedio por alumno y el promedio general.
    float nota = 0; 
    float promedio = 0; 
    float promedioGeneral = 0;
    float sumadorPromedio = 0;
    float totalAlumno = 0;

    int cantAlumnos = 5;
    int cantNotas = 3;

    for (int alumno = 1; alumno <= cantAlumnos; alumno++) {

            printf("Ingrese las notas del alumno %i: \n", alumno);

        for (float j = 1; j <= cantNotas; j++) {

            printf("Ingrese la calificacion %i: \n", j);
            scanf("%f", &nota);

            totalAlumno = totalAlumno + nota;
        }

        promedio = totalAlumno / cantNotas;
        printf("El promedio del alumno es: %f \n", promedio);

        promedioGeneral = promedioGeneral + promedio;
        
        printf("El promedio general es: \n", promedioGeneral / cantAlumnos);
        
        totalAlumno = 0;
    }

    system("pause");
    return 0;
}