                                  // WHILE EN C


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






#include <stdio.h>
#include <stdlib.h>

int main(){
    

int i = 0;
printf("Ciclo WHILE INCREMENTAL\n");
while (i<1) {printf("Hola ciberneticos, I = %d\n", i);
        i = i + 1;
    }
while (i<2) {printf("Hola ciberneticoss, I = %d\n", i);
        i = i + 1;
    }
    printf("Ciclo WHILE DECRECIENTE\n");
while (i<3) {printf("Hola ciberneticosss, I = %d\n", i);
        i = i + 1;
    }
while (i<4) {printf("Hola ciberneticossss, I = %d\n", i);
        i = i + 1;
    }
while (i<5) {printf("Hola ciberneticosssss, I = %d\n", i);
        i = i + 1;
    }
    printf("Ciclo WHILE DECREMENTAL\n");
while (i<6){printf("Hola ciberneticosssssss, I = %d\n", i);
        i = i + 1;
    }


    do{



    }while (i>0);
    printf("Ciclo DO WHILE\n");
    printf("EJEMPLO DE CICLO DO WHILE, I = %d\n", i);
    i = i + 1;
    

    do {    
        int i = 0;
        printf("Ejemplo de ciclo creciente\n");
        printf("EJEMPLO DE CICLO DO WHILE, I = %d\n", i);
        i = i + 1;
        printf("NUMERO 1, I = %d\n", i);
        i= i + 1;
        printf("NUMERO 2, I = %d\n", i);
        i = i + 1;
        printf("NUMERO 3, I = %d\n", i);
        i = i + 1;
        printf("NUMERO 4, I = %d\n", i);
        i = i + 1;
        printf("NUMERO 5, I = %d\n", i);
        i= i + 1;

    } while (i<5);  



    return 0;
}
