                          // APP QUE PIDA LA CONSULTA DE SALDO 


//Nombre del alumno: Hazek.

//Nombre de la carrera: Ingenieria en Ciberseguridad.

//Nombre de la materia: Programacion I

//Nombre del profesor: Alcides Arbona.

//Fecha: 22/03/2025


#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion;
    float saldo = 1000.0;
    float monto;

    printf("Bienvenido al banco de la UP\n");
    printf("1. Consultar saldo\n");
    printf("2. Ingresar dinero\n");
    printf("3. Retirar dinero\n");
    printf("4. Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Tu saldo es de %.2f$\n", saldo);
            break;

        case 2:
            printf("Ingrese el monto a depositar: ");
            scanf("%f", &monto);
            saldo += monto;
            printf("Depósito exitoso. Tu nuevo saldo es %.2f$\n", saldo);
            break;

        case 3:
            printf("Ingrese el monto a retirar: ");
            scanf("%f", &monto);
            if (monto <= saldo) {
                saldo -= monto;
                printf("Retiro exitoso. Tu nuevo saldo es %.2f$\n", saldo);
            } else {
                printf("Fondos insuficientes.\n");
            }
            break;

        case 4:
            printf("Gracias por usar el banco de la UP\n");
            break;

        default:
            printf("Opción inválida\n");
            break;
    }

    return 0;
}
