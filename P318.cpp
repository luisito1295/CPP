#include <stdio.h>
#include <conio.h>

main() 
{
       
    clrscr();   
       
	int a1,f,a2;
	a1=1;
	a2=0;
	printf("Los numeros fibonaci son");
	for (f=1;f<=100;f++)
	{
        f=a2+a1;
        a2=a1;       //intercambiar los valores, el anterior
		a1=f;       //el nuevo valor obtenido en f se pasa en a1  
       printf ("%d\n",f);
        
    }
    
   getch();
	
	
}

