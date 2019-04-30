/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 9 Sep 2015
   Descripcion: Calificar a un empliado

*/

#include <stdio.h>
#include <conio.h>

main ()

{
     clrscr();
     
     float calificacion;
     char empleado [50];
     printf ("Ingrese el nombre del empleado \n");
     scanf ("%s",&empleado);
     printf ("Ingrese calificacion del empleado \n");
     scanf ("%f",&calificacion);
     
     if  (calificacion>=78)
     {  
         printf ("Calificacion !!!EXELENTE!!! \n");
         printf ("Nombre del empleado es: %s \n", empleado);
         printf ("Calificacion es: %f \n",calificacion);
     }
      if  (calificacion<=78)
     {  
         printf ("Calificacion !!!DEFICIENTE!!! \n");
         printf ("Nombre del empleado es: %s \n", empleado);
         printf ("Calificacion es: %f \n",calificacion);
     }
     
     getch();
}