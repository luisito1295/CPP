/* Nombre: Luis Fernando Lopez Mendoza
   Grupo: 1D ISC FIE
   Fecha: 5 Sep 2015
   Descripcion: Convertir una velocidad hortizontal expresada en
   nudos (kt) a m/s (1 m7s = 1.9438 kt)

   velms = velkt/19438;
*/


#include <conio.h>
#include <stdio.h>

main()
{
  float velms, velnudos;
  //clrscr();

  gotoxy (25,5);
  printf("Ingresa la velocidad en nudos:");
  scanf ("%f",&velnudos);
  velms = velnudos/1.9438;

  gotoxy (25,15);
  printf("La velocidad es : [%f] m/s",velms);

  gotoxy (25,20);
  );
  printf ("Preciona una tecla para finalizar");
  getch ();




}
