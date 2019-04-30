#include <stdio.h>
#include <conio.h>
#include <math.h>

main() 
{
       
    clrscr();   
       
	float x,y;
	
	printf("f(x)=x^4+x^3-x^2-5\n");
	printf (" x  | y\n");
	for (x=13;x<=26;x=x+1) 
    {
		y = (x*exp(4))+(x*exp(3))-(x*exp(2))-5;  
		printf("%.1f  |%.1f\n",x,y);
   }
	getch();
}

