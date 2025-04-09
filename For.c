  // APP QUE CALCULE EL IMPUESTO DE IMPORTACION


//Nombre del alumno: Hazel.

//Nombre de la carrera: Ingenieria en Ciberseguridad.

//Nombre de la materia: Programacion I

//Nombre del profesor: Alcides Arbona.

//Fecha: 22/04/2025




#include <stdio.h>
#include <stdlib.h>

int main() {

    int i; 
    int j;

    printf("----Ciclo FOR incremental.\n-----\n");
    for (i = 0; i < 6; i++) {
        printf("Hola papuss, I = %d\n", i);
    }

    printf("----\nCiclo FOR decreciente.\n-----\n");
    for (i = 6; i > 0; i--) {
        printf("Hola papuss, I = %d\n", i);
    }

    printf("----\nCiclo FOR anidado.\n-----\n");
    for (i = 6; i > 0; i--) { 
        for (j = 1; j <= 3; j++) {
            printf("Hola papuss, I = %d, J = %d\n", i, j); 
        }
    }
    printf("-----Ciclo FOR incremental\n-----");
    for (i = 0;i <=100;i+=10) {
        printf("Hola papuss, I = %d\n", i);
    }
    printf("----Ciclo FOR incremental de 2 en 2----");
    for (i=0;i<=10;i=i+2){
        printf("Hola papuss, I = %d\n", i);
    }

    printf("----Ciclos FOR decrementos de 5 en 5----");
    for (i=100;i>=0;i-=5){        
        printf("Hola papuss, I = %d\n", i);
    }

    printf("----Ciclos FOR decrementos de 3 en 3----");
    for (i=13;i>=0;i-=3){
        printf("Hola papuss, I = %d\n", i);
    }
    
    return 0;
}
