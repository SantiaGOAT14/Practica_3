/*Santiago Lopez Santamaria
Ejercicio 1 práctica 6
HAcer un algoritmo que permita sumar, restar, dividir y multiplicar
según la elección del usuario*/


#include <stdio.h>
#include <math.h>


int main ()
{
/*Primero inicializamos nuestras variables como enteros*/
    int a = 0, b = 0, operation  = 0;
    int option;

    printf ("¿Qué operación quieres realizar?: \n");
    printf ( "1 - suma\n");
    printf ( "2 - resta\n");
    printf ( "3 - multiplicación\n");
    printf ( "4 - división\n");
    scanf ("%d%" , &option);

   do
  {
    printf ("Dame los números:\n");
    printf ("número 1: ");
    scanf ("%d%", &a);
    printf ("nuemero 2: ");
    scanf ("%d", &b);

      switch (option)
    {
    case 1:
      operation = a + b;
      break;
    case 2:
      operation = a - b;
      break;
    case 3:
      operation = a * b;
      break;
    case 4:
      operation = a / b;
      break;
          }

    printf ("El resultado de la operación es: %d\n", operation);

    printf ("¿Deseas realizar otra operación?: \n");
    

    printf ("¿Qué operación quieres realizar?: \n");
    printf ( "1 - suma\n");
    printf ( "2 - resta\n");
    printf ( "3 - multiplicación\n");
    printf ( "4 - división\n");
    printf ( "-1 - ¿Deseas salir?: \n");
    scanf ("%d&", &option);
  }
  while (option != -1);
  return 0;
}

