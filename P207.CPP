/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 9 Sep 2015
   Descripcion: Calcular comiciones de ventas

*/


#include <stdio.h>
#include <conio.h>


main()

{
      
      clrscr();

      float monto, comision;
      char nombre[50];


      printf ("Ingresa el nombre del vendedor: \n");
      scanf ("%s",&nombre);

      printf ("Ingresa el monto: \n");
      scanf  ("%f",&monto);

      printf ("Ingresa la comicion: \n");
      scanf ("%f",&comision);


      if (monto<1540)
       {
        comision=(monto*3.9/100);

          }
          if (monto>=1540)
            {
              comision=(monto*4.5/100);

               }

               printf ("Comision de %s es %f",nombre,comision);

               getch();

}