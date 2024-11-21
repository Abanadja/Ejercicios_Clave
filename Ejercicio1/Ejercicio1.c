//
// Created by alexa on 22/11/2024.
//
#include "Ejercicio1.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Ejercicio1() {

    // Ejercicio 1b
    struct Estudiante estudiante1;
    (estudiante1.nombre, "Carlosnija");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    // Ejercicio 1c
    struct Estudiante *estudiante2 = (struct Estudiante *) (sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "Rania");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    // Ejercicio 1d
    struct Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);
}