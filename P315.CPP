/* Nombre: Luis Fernando Lopez Mendoza
   Grupo:  1D ISC
   Fecha: 18 Sep 2015
   Descripcion: Funcion y=2.6*x^6-3.9756*x^4+12
   x va de 1 al 45 en invrementos de 1
*/



#include <stdio.h>
#include <conio.h>
#include  <math.h>

main() 
{
	clrscr();
	float x,y;
	int col=1,ren=1;

	printf(" x  | y\n");
	for (x=1;x<=45;x=x+1)
	{

		y = 2.56*pow(x,6)-3.9756*pow(x,4)+12;
		if(ren==24)
		{
		 col+=20;
		 ren=1;

		}
		gotoxy(col,ren);
		ren++;
		printf("%.1f  |%.1f\n",x,y);
	}
    getch();
}

