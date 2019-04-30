/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 12 Sep 2015
   Descripcion: Impuesto total
*/


#include <stdio.h>
#include <conio.h>


main() 
{
       clrscr();
       
       float sueldo, impuesto;
       
       printf("El impuesto total \n");
       printf("Ingresa el sueldo local \n");
       scanf("%f",&sueldo);
       
      if (sueldo<=1000)
          {
            impuesto=sueldo*2.5/100;
          
           }
       else
           {
             impuesto=sueldo*5.2/100;
            }
            
       printf("El ingreso local es: %f",impuesto);
       
getch();
}