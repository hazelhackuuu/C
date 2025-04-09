                              // SWITCH EN C


//Nombre del alumno: Hazel.

//Nombre de la carrera: Ingenieria en Ciberseguridad.

//Nombre de la materia: Programacion I

//Nombre del profesor: Alcides Arbona.

//Fecha: 22/03/2025




#include <stdio.h>
#include <stdlib.h>

int main() {

int Dia_de_la_semana = 4;
switch (Dia_de_la_semana)
{
case 1:
    printf("El dia de la semana es lunes\n");
    break;
case 2:
printf("El dia de la semana es martes\n");
    break;
    case 3:
printf("El dia de la semana es miercoles\n");
    break;
    case 4: 
printf("El dia de la semana es jueves\n");
    break;
    case 5:
printf("El dia de la semana es viernes\n");
    break;
    case 6:
printf("El dia de la semana es sabado\n");
    break;
    case 7:
printf("El dia de la semana es domingo\n");
    break;

default:
printf("Escoje un número del 1 al 7 para saber el dia de la semana\n");
    break;
}

    return  0;
}
