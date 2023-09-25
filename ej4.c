#include <stdlib.h>
#include <stdio.h>

void main() {
    // Realizar un programa que calcule el promedio de las notas de los parciales de un curso. 
    // Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de 
    // parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los 
    // alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean 
    // mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha 
    // nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va 
    // calculando y por último, el promedio general del curso.

    int cantAlumnos, cantParciales;
    float promedioAlumno = 0, promedioGeneral = 0, acumuladorNotas = 0, nota;

    printf("Ingrese la cantidad de alumnos \n");
    scanf("%i", &cantAlumnos);

    printf("Ingree la cantidad de parciales que se tomaron en el cuatrimestre \n");
    scanf("%i", &cantParciales);

    for(int i = 1; i <= cantAlumnos; i++) {

        printf("Ingrese las calificaciones del alumno: %i \n", i);
     
        
            for(int j = 1; j <= cantParciales; j++) {

                do{
                    printf("Ingrese la calificacion: %i \n", j);
                    scanf("%f", &nota);
                } while (nota > 0 || nota < 10);

                acumuladorNotas = acumuladorNotas + nota;
            }

        
        promedioAlumno = acumuladorNotas / cantParciales;
        printf("El promedio del alumno es: %f \n", promedioAlumno);
    }
}