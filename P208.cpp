/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 9 Sep 2015
   Descripcion: Saber cual es el numero mmayor

*/


#include <stdio.h>
#include <conio.h>

main()
{
      clrscr();
      
      int A,B,C,menor;
    
    printf ("Cual es el numero menor \n\n"); 
    
    printf ("Ingrese el primer valor \n");
    scanf ("%d",&A); 
    printf ("Ingrese el segundo valor \n");
    scanf ("%d",&B);
    printf ("Ingrese el tercer valor \n");
    scanf ("%d",&C);
       
       
    
    if ((A<B)&& (A<C))
    {
      printf("Menor es %d\n",A);
     }
    if ((B<A)&&(B<C))
    {
       printf("Valor Menor es %d\n",B);
     }
    if (C<menor)
     {
       printf("Valor Menor es %d\n",C);
     }
     
     
     getch();

}