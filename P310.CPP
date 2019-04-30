#include <stdio.h>
#include <conio.h>


main()
{


	clrscr();
	long mul=5,ini=1,fin=10,x,res;

	printf ("Ingresa el inicio\n");
	scanf ("%ld",&ini);
	printf ("ingrese fin\n");
	scanf ("%ld",&fin);
	printf ("ingrese multiplicador\n");
	scanf ("%ld",&mul);



	for (x=ini;x<=fin;x++)
	{
	    printf ("%ld x %ld = %ld\n",mul,x,mul*x);
	}
	 getch();
}