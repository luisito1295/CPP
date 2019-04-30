/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 26/09/15
  Descripcion: Numeros impares con su producto
*/


#include <stdio.h>
#include <conio.h>
#define N 20



main()
{


 //clrscr();


 int A[N];
 int prod,i,j;

printf("numreos impares....\n");

 for (int i=1;i<=N;i=i+2)
 {
  printf ("%d\n",i);
  A[i]=i;

 }
printf("el producto numreos impares....%d",i); 
printf("\n \n \n");

for (int j=1;j<N;j=j+2)
 {
   
 prod= i * A[j];
  printf ("%d \n",prod);


}



 getch();

}
