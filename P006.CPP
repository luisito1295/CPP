//Nombre:Luis Fernando Lopez Mendoza
//Grupo: 1 ISC FIE
//Frcha: 5 Sep 2015
//Descripcion: Convercion de grados Fahrenheit a Celcius



#include <stdio.h>
#include <conio.h>

main()

{


clrscr();

float g, f;

printf("Convercion de grados Fahrenheit a Celcius");

printf ("Ingresar grados Fahrenheit \n");

printf ("para convertir a Celcius \n ");
scanf  ("%f",&f);

g = (f-32)*5/9;
	
printf ("Los grados Celcius son: %f \n",g);

getch();
	
}