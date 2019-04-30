#include <stdio.h>
#include <conio.h>
#include <math.h>

main() 
{
    
    //clrscr();   
       
	float num,x,z;
	
	printf ("Z= (4x^4-3.5x^2/(x+5)\n" );
	printf ("Ingresa un numero positivo\n");
	scanf("%f",&num);
	printf (" x     | y\n");
	for (x = -10; x <= num; x = x + 0.5) 
    {
		if (x==-5)
        {
		   printf ("%.1f\n",x,"  |0\n");
		} 
        else 
        {
			z = (4*x*exp(4)-3.5*x*exp(2))/(x+5);
		    printf ("%.1f  |%.1f\n",x,z);// evitando la divicion entre cero
    	}
	}
	getch();
}







