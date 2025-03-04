                                          // ACTIVIDAD NUMERO 3 "MI TERCER APP"



// Nombre de la materia: Programacion I

// Nombre del Alumno: Hazel-

// Nombre de la Carrera: Ingenieria en Ciberseguridad.

// Nombre del Profesor: Alcides.

// Fecha: 3/03/2025





#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // <---- Librería para datos booleanos

int main() {      


        //////////////////////////////////////////////////////////////////////////////////////////
                         
                              // EN C NO HAY TRUE O FALSE, SOLO 0 Y 1.
                                 // SIENDO 0 = FALSE Y 1 = TRUE

bool asientoenuso = false;

bool itemvendido = true;

     printf("¿Está disponible el asiento?: %d\n", asientoenuso);
printf("¿Aún hay stock del item en la bodega?: %d\n", itemvendido);

bool asientoenuso1 = true;

bool itemvendido1 = false;

     printf("¿Está disponible el asiento?: %d\n", asientoenuso1);
printf("¿Aún hay stock del item vendido?: %d\n", itemvendido1);

     printf("¿El número 10 es mayor que 9?: %d\n", 10 > 9);
printf("¿El número 9 es mayor al número 10?: %d\n", 9 < 10);








    //////////////////////////////////////////////////////////////////////////////////////////



                                 // USO DE IF, ELSE Y ELSE IF
int A = 30;
int B = 20;
int Horario = 20;

if (10 > 9) {
     printf("ES MAYOR!!!\n");
}

if (A > B) {
     printf("A es mayor que B\n");
}





    //////////////////////////////////////////////////////////////////////////////////////////






                            // USO DE IF, ELSE Y ELSE IF
int credencial = 80;

if (credencial < 60) {
     printf("Requiere INAPAM\n");
} else if (credencial == 60) {
     printf("Solicitar INAPAM\n");
} else {
     printf("No requiere credencial\n");
}

return 0;   
}
