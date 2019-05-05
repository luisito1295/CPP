/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 12 Sep 2015
   Descripcion: Venta de productos
*/


#include <stdio.h>
#include <conio.h>


main() 
{
       
       
      
      
       printf ("Productos   Precio \n");
	   printf ("1            24.05 \n");
       printf ("2           105.00 \n");
       printf ("3            10.35 \n");
       printf ("4            16.00 \n");
      
       clrscr();
       
       float clave,precio,cantidad,importe,total,descuento;
       
       printf ("Codigo del producto \n");
       scanf ("%f",&clave);
       printf ("Cuantos productos va a llevar\n");
       scanf ("%f",&cantidad);
       
       if (clave=1)
       {
         precio=24.05;
        }
        
         if (clave=2)
       {
         precio=105.00;
        }
        
         if (clave=3)
       {
         precio=10.35;
        }
        
         if (clave=4)
       {
         precio=16.00;
        }
       
      importe=precio*cantidad;
      total=total+importe;
      if (total>=1000)
        {
          descuento=total*2.5/100;
         }
         
       if (total>=800 && total<1000)
          {
            descuento=total*1.5/100;
           }
           
        total=total-descuento;
       
       printf ("El importe es: %f \n", importe);
       printf ("Descuento: %f \n",descuento);
       printf("Total a pagar: %f \n",total);
       
       
       getch();
       
}
