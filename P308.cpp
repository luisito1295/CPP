#include <stdio.h>
#include <conio.h>

main() 
{
	
    clrscr();
    
    float cantidad,descuento,importe,pd,precio,producto;

	printf("cantidad\n");
	scanf ("%f",&cantidad);
	
	printf("producto\n");
	scanf ("%f",&producto);
	
	printf("precio\n");
	scanf ("%f",&precio);
	
	importe = cantidad*precio;
	printf("importe %f\n",importe);
	
	if (cantidad>=100 && cantidad<=200) 
    {
		descuento = importe*10/100;
		pd = importe-descuento;
	}
	if (cantidad>=201 && cantidad<=500) 
    {
		descuento = importe*15/100;
		pd = importe-descuento;
	}
	if (cantidad>500) 
    {
		descuento = importe*20/100;
		pd = importe-descuento;
	}
	
	printf("Descuento: %f\n",descuento);
	printf("Precio a Pagar:%f",pd);
	
	getch();
}

