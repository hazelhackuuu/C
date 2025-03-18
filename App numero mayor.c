                                 //ACTIVIDAD NUMERO 4 "APP NUMERO MAYOR"
''


//Nombre del alumno: Diego Soto Vargas.

//Nombre de la carrera: Ingenieria en Ciberseguridad.

//Nombre de la materia: Programacion I

//Nombre del profesor: Alcides Arbona.

//Fecha: 17/03/2025


#include <stdio.h>
#include <stdlib.h>

int main(){

int numero1= 0;
int numero2= 0;  
int numero3= 0;


printf("Ingresa tu primer numero:\n");
scanf("%d", &numero1);

printf("Ingresa tu segundo numero:\n");
scanf("%d", &numero2);

printf("Ingresa tu tercer numero:\n");  
scanf("%d", &numero3);


if (numero1 > numero2 && numero1 > numero3) {
    printf("El numero mayor de los 3 es: %d\n", numero1);
} else if (numero2 > numero1 && numero2 > numero3) {            
    printf("El numero mayor de los 3es: %d\n", numero2);            
} else if (numero3 > numero1 && numero3 > numero2) {
    printf("El numero mayor de los 3 es: %d\n", numero3);            
} else {
    printf("Los 3 numeros ingresados son iguales !!!\n");
}

    return 0;     
}
