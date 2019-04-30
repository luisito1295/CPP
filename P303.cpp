
#include <stdio.h>
#include <conio.h>


int main() 
{
    
    clrscr();

	int serie,num;
    printf ("Mostrar los numero hasta un numero ingresado \n"); 
	printf ("Ingresa caulquier numero \n");
	scanf ("%d",&num);
	for (serie=2;serie<=num;serie=serie+2) 
    {
		printf("%d \n", serie);
	}
	

	getch();
	
}

