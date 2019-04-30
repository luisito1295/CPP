#include <stdio.h>
#include <conio.h>

int main() 
{
    
	clrscr();
	
    int divisible,numeros,divisor;
	bool primo;
	
	primo = false;
	printf ("generar los numeros primos del 2 al 500\n");
	for (numeros=2;numeros<=500;numeros++) 
    {
		for (divisor=2;divisor<=numeros-1;divisor++) 
        {
			divisible = numeros%divisor;        //el simbolo "%" es para obtener el reciduo de una divicion
			if (divisible==0) 
            {
							
				    
				primo = false;  // cada vez que sea divisible no es primo (falso)
				break;
			} 
            else 
            {
				// y sino se puede ser divisible entonces si es primo (verdadero)
				primo = true;
			}
		}
		if (primo==true) 
        {
			printf ("%d,",numeros);
		}
	}
	getch();
}

