#include <stdio.h>
#include <conio.h>

main() 
{
       
    clrscr(); 
     
	int a,b,c;
	
	int perimetro;
	printf ("Obtener el perimetro de un triangulo\n");
	printf ("finalizar si un lado = 0\n");
	do {
		printf ("Ingrese lado A\n");
		scanf ("%d",&a);
	    printf ("Ingrese lado B\n");
		scanf ("%d",&b);
		printf ("Ingrese lado C\n");
		scanf ("%d",&c);
	    perimetro=a+b+c;
	    printf ("EL perimetro del trianfulo es: %d\n",perimetro);
	
    	
	} while (a,b,c !=0);
	printf ("\nGracias por usar mi programa\n");
    getch();
}

