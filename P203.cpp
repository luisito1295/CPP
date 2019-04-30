/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 9 Sep 2015
   Descripcion: Juego de dados

*/

#include <stdio.h>
#include <conio.h>

main ()
{
     clrscr();
     
     int dinero,numingresado;
     
     
     printf ("Cantidad con la que desea empezar a jugar \n");
     scanf ("%d",&dinero);
     printf ("Elija un numero del 2 al 12 \n");
     printf ("Ingrese el numero \n");
     scanf ("%d",&numingresado);
     
     if (numingresado<7)
     {
         printf ("Ha !!!Perdido!!! \n");
         printf ("$ %d\n", dinero-5);
     }
     else
     {
         printf ("Ha !!!GANADO!!! \n");
         printf ("$%d \n", dinero+5);
     } 
     
getch();
}