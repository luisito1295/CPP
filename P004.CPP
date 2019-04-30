/* Nombre:Luis Fernando Lopez Mendoza
   Grupo: 1 ISC FIE
   Frcha: 5 Sep 2015
   Descripcion: Convercion de un Terabyte a bits
*/



#include <stdio.h>
#include <conio.h>


main()
{

//clrscr();


float n, g, m, k, b, bs;



printf("Ingresa el terabyte a converitir:\n\n");
scanf("%f",&n);

bs = n*1024*1024*10241024*1024*8;
printf ("Bit son: %f \n\n",bs);


b = n*1024*1024*1024*1024;
printf ("Byte son:%f\n\n",b);

k = n*1024*1024*1024;
printf("Kilobyte son:%f\n\n",k);

m = n*1024*1024;
printf ("Megabyte son:%f\n\n",m);

g = n*1024;
printf ("Gigabyte son:%f",g);

getch();

printf ("Precione una tecla para continuar");
}
