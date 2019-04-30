#include <stdio.h>
#include <conio.h>

main() 
{
       
    clrscr(); 

	int num,multi,m;
	printf("Las tablas de multiplicar del 4 y el 5 \n");
	
	for (num=1;num<=10;num++) 
    {
        multi=num*4;
        printf ("\n%d",num);
		printf ("x4=%d",multi);	
	}
	printf("\n\n");
	
	for (num=1;num<=10;num++) 
    {
        m=num*5;
	    printf ("\n%d",num);
		printf ("x4=%d",m);
	}
	
	getch();
	
}


