/* Nombre: Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fechar: 12 Sep 2015
   Descripcion:Calcular impuesto del sueldo
*/


#include <stdio.h>
#include <conio.h>

main()
{
      
      clrscr();
      
	float sueldo,impuesto,neto;
	
	printf ("Calcular el impuesto del sueldo");
	
	printf ("Ingresa sueldo");
	scanf ("%f",&sueldo);	
	if (sueldo<=10000)
	{
    	impuesto = sueldo*2/100;   
		neto = sueldo-impuesto;    
   }
	else
   {  
     	impuesto=sueldo*4.5/100;
	neto=sueldo-impuesto;
   }
   
   printf("El impuesto es: %f",impuesto);
   printf("El sueldo neto es: %f",neto); 
   
   getch();
}




