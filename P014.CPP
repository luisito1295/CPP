/* Nombre: Luis Fernando Lopez Mendoza
   Grupo: 1D ISC FIE
   Fecha: 5 Sep 2015
   Descripcion: Las 4 operaciones basicas
*/

#include <stdio.h>
#include <conio.h>

main()
{

clrscr();
      
int suma, resta, multiplicacion, divicion, opcion, N1, N2;


printf ("Ingresa el primer numero \n \n");
scanf ("%d",&N1);
printf ("");

printf ("Ingresa el segundo numero \n \n");
scanf ("%d",&N2);
printf("\n");

printf ("La suma de los numeros es: \n \n"); 
printf ("%d \n \n",N1+N2);

printf ("La resta de los numeros es: \n \n");
printf ("%d \n \n",N1-N2);

printf ("La multiplicaion de los numeros es: \n \n");
printf ("%d \n \n",N1*N2);

printf ("La divicion es: \n \n");
printf ("%d \n \n", N1/N2);


getch();      


}