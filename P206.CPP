/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 9 Sep 2015
   Descripcion: Ingresa horas y minutos e incrementa 1 munto y de la hora

*/


#include <stdio.h>
#include <conio.h>

void main()
  {

  clrscr();

  int min,hrs;

  printf ("Ingresa horas: ");
  scanf  ("%d",&hrs);
  printf ("Ingresa minutos: ");
  scanf  ("%d",&min);

  min++;

  if (min==60)
  {
  min=0;
  hrs++;
  }
  if(hrs==24)
  {
  hrs==0;
  }


  printf ("La hora es: %02d: %02d:PM",hrs,min);

  getch();


}
