/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 12 Sep 2015
   Descripcion: Mejorar calificacion

*/


#include <stdio.h>
#include <conio.h>


main()
{
      
      clrscr();
      
      float cal1, cal2, cal3;
      
      printf ("Ingresa la primera calificacion \n");
      scanf ("%f",&cal1);
      printf ("Ingresa la primera calificacion \n");
      scanf ("%f",&cal2);
      printf ("Ingresa la primera calificacion \n");
      scanf ("%f",&cal3);
      
      if(cal3>cal1)
         {
           printf("Mejorando");
          }
      if(cal3>cal2)
         {
           printf("Mejorando");
          }
      if(cal3<6)
         {
           printf("Empeorando");
          }
      getch();
}