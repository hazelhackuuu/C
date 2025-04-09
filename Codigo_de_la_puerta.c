                         // ACTIVIDAD NUMERO 3 "CODIGO DE LA PUERTA"



// Nombre de la materia: Programacion I

// Nombre del Alumno: Hazel-

// Nombre de la Carrera: Ingenieria en Ciberseguridad.

// Nombre del Profesor: Alcides.

// Fecha: 3/03/2025







#include <stdio.h>
#include <stdlib.h>

int main() {

    int codigo_de_la_puerta = 130805;
    int codigo_introducido=0;


    printf("Introduce el codigo de la puerta:\n");
    scanf("%d", &codigo_introducido);


    if (codigo_de_la_puerta == 130805) {
        printf("Codigo correcto, la puerta se abrirá\n");
    } else {
        printf("Codigo incorrecto, la puerta seguirá bloqueada\n");
    }

    return 0;
}
