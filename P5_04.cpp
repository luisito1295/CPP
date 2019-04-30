/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 26/09/15
  Descripcion: Suma de dos numero pares del 2 hasta el 100
*/


#include <stdio.h>
#include <conio.h>
#define N 100



main()
{


	
	
	int A[N], suma;
	
	printf("mostrar los nummeros pares del 2 al 100 y su suma....\n");
	
	for (int i=2;i<=N;i=i+2)
	{
	  
		A[i]=i;
		printf ("%d ",A[i]);
	
	}
	suma=0;
	for (int j=2;j<N;j=j+2)
	{
		suma= suma + A[j];
	
	}
	 
	printf("\n \n \n");
	printf("la suma numreos pares es>%d",suma); 
	
	 getch();

}
