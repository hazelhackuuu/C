                        // APP QUE CALCULE EL IMPUESTO DE IMPORTACION


                        //Nombre del alumno: Hazek.

//Nombre de la carrera: Ingenieria en Ciberseguridad.

//Nombre de la materia: Programacion I

//Nombre del profesor: Alcides Arbona.

//Fecha: 22/03/2025





#include <stdio.h>
#include <stdlib.h>
int main(){
        float importe, impuesto = 0.0, total;
    
        printf("Por favor ingrese el importe del producto:\n");
        scanf("%f", & importe);
    
    
        if (importe >= 1000) {
            impuesto = importe * 0.10;
            printf("Se aplicara un impuesto del 10%%: $%.2f\n", impuesto);
        } else {
            printf("No se aplicara el impuesto.\n");
        }
    
        total = importe + impuesto;
        printf("El importe total a pagar: $%.2f\n", total);
    
        return 0;
    }
    

