/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 26/09/15
  Descripcion: Obtener la media de 10 numeros
*/

#include <stdio.h>
#include <conio.h>
#define N 10



main()
{


  //clrscr();


 int A[N], num, suma,promedio,i,j;

printf("leer 10 numeros, almacenarlos en arreglo y muestre la media....\n");

 for (i=1;i<=N;i++)
 {
  printf("\ningrese el valor del Numero %d",i);
  printf(" ->");
  scanf("%d",&num);
  A[i]=num;
  //printf ("%d ",A[i]);

 }
suma=0;
 for (int j=1;j<=N;j++)
 {
 suma= suma + A[j];

 }
 promedio=suma/N;
 
printf("\n \n \n");
printf("el promedio de los numeros es ->%d",promedio); 

 getch();

}
