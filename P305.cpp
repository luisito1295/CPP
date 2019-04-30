#include <stdio.h>
#include <conio.h>

main() 
{
       
    clrscr(); 
       
	int i,p;
	
	printf("Los numeros pares son:\n" );	
	for (p=2;p<=1000;p+=2) 
    {
        
		printf("%d ",p);
	}
	
    printf("\n pulsa una tecla para continuar..." );
	getch();
    printf("Los numeros impares son: \n" );
    
	for (i=1;i<=999;i+=2) 
    {
       
 	   printf("%d ",i);
	}
	
	printf("\n pulsa una tecla para continuar..." );
    getch();
}

