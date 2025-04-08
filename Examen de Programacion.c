                                                               //EXAMEN PROGRAMACION I



// NOMBRE DEL ALUMNO: Hazel.

//NOMBRE DE LA CARRERA: Ingenieria en Ciberseguridad.

//SEMESTRE: 1 SEMESTRE.

//EXAMEN: EVALUACION NUMERO II.

//NOMBRE DEL PROFESOR: Alcides Arbona.

//FECHA: 4/4/2025



#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("------------------------------------\n");
    printf("BIENVENIDO AL SISTEMA DE PAGOS\n");
    printf("------------------------------------\n");

    float Precio_Final, Precio_Inicial, Pago_Mensual;
    int opciones;

    printf("Por favor, ingrese el precio del producto listado en la etiqueta: \n");
    scanf("%f", &Precio_Inicial);


    printf("------------------------------------\n");
    printf("OPCIONES DE PAGO DISPONIBLES\n");
    printf("------------------------------------\n");

    printf("Seleccione la opcion deseada: \n");
    printf("1.- Precio con descuento del 10%% \n");
    printf("2.- Pago a 12 MSI (meses sin intereses) \n");
    printf("3.- Pago a 24 meses con 9%% de intereses \n");
    printf("Ingrese la opcion deseada: \n");
    scanf("%d", &opciones);

    switch (opciones) {
        case 1:
            Precio_Final = Precio_Inicial - (Precio_Inicial * 0.10);
            printf("El precio con descuento es de: %.2f \n", Precio_Final);
            break;
        case 2:                        

            Pago_Mensual = Precio_Inicial / 12;
            printf("El pago mensual es de: %.2f \n", Pago_Mensual);
            break;
        case 3: 

            Precio_Final = Precio_Inicial * 1.09; 
            printf("El pago mensual es de: %.2f \n", Pago_Mensual);
            break;    
        default:                        
            printf("La opción no es válida \n");
            break;
    }    

    return 0;
}
