/* Nombre: Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 12 Sep 2015
   Descripcion:Tasa de impuesto basada en claves de ciudad
*/

#include <stdio.h>
#include <conio.h>


void main()

{


clrscr();

 char ciudad,nombre[30],otros;
 float sueldo,tasa;

 clrscr();

 printf ("Sistema para obtener impuesto en el estado \n ");

 printf ("Nombre del trabajador \n");
 scanf  ("%s",&nombre);

 printf ("Ingrese clave de la ciudad \n");
 scanf ("%s",&ciudad);

 printf ("Sueldo del trabajador \n");
 scanf ("%f",&sueldo);

 if (ciudad=='m')
    {
      tasa=sueldo*0.005;

      printf("nombre: %s", nombre);
      printf ("EL impuesto es: %f",tasa);
    }
 else if (ciudad=='r')
    {
      tasa=sueldo*0.01;
      printf("nombre%s ",nombre);
      printf ("EL impuesto es: %f",tasa);
    }
else if (ciudad=='j')
    {
      tasa=sueldo*0.03;
      printf("nombre%s ",nombre);
      printf ("EL impuesto es: %f",tasa);
    }

else if (ciudad=='b')
    {
      tasa=sueldo*0.035;
     printf("nombre%s",nombre);
      printf ("EL impuesto es: %f",tasa);
    }
 else
 {
  ciudad='o';
  tasa=sueldo*0.001;

   printf("nombre%s",nombre);
  printf (" el sueldo es: %f",tasa);
  }
 getch();

}
