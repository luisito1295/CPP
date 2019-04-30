/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 9 Sep 2015
   Descripcion: Clave d sexo

*/

#include <stdio.h>
#include <conio.h>

main()
{
	
	clrscr();
	
	char sexo;
	float kilos,kalorias,libras;
	
	printf ("Ingresa el sexo");
	scanf ("%s",&sexo);
	printf ("Ingresa peso en kg");
	scanf ("%f",&kilos);
	
	libras=kilos*0.4536;
	
	if(sexo=='H')
	{
        kalorias=18*libras;
    }    
     else
     {
        kalorias=16*libras;
    }     
 
printf("Debes comsumir %f",kalorias);

getch();
}
