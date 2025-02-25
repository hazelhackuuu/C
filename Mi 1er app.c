                            //ACTIVIDAD NUMERO 1 "MI PRIMER APP"



//Nombre de la materia: Programacion I

//Nombre del Alumno: Hazel

//Nombre de la Carrera: Ingenieria en Ciberseguridad.

//Nombre del Profesor: Alcides 

//Fecha: 21/02/2025





#include <stdio.h>
#include <stdlib.h>

int main()
{


                               //IMPRIMIR HOLA MUNDO EN C




printf("Hola Mundo !!!\n");  //<-- Imprimir hola mundo se hace con printf("mensaje para imprimir)  junto con ; y \n para un salto mas limpio.



printf("Este es mi segunda linea de codigo en C\n"); //<-- Ejemplo uno.



printf("Esta es mi tercera linea de codigo en C\n"); //<-- Ejemplo dos.










                         //Tipos de datos en C.



    //Datos enteros (int), flotantes(float) y caracteres (char).



int numero1,resultado=0;    //<--- Dato de tipo (int).

  numero1 = 1;





int numero2 =3;             //<--- Dato de tipo (int).

 numero1 = 4;






printf("Valor numero uno: %d y valor numero dos: %d\n",numero1,numero2);

  numero2 = numero1;





float precio = 5.99;        // <--- Dato de tipo flotante (float)

  printf("3 picafresas por el precio de: %f\n",precio);





char inicialdelnombre = 'D';   // <--- Dato de tipo character (char)

 printf("La inicial del nombre es: %c\n",inicialdelnombre);




printf("El resultado de la suma es: %d\n",resultado);
   resultado = numero1 + numero2;














 //TERMINAR EL PROGRAMA CON UNA TECLA

 printf("Oprima una tecla para terminar");  //<--- Se le pide al usuario ingresar una tecla para terminar el programa.



    return 0;
}
