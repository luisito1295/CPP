
/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 26/09/15
  Descripcion: Arreglo unidimencional tamaño de 5, e ingresarlos manualmente y mostrarlos
  */


#include <stdio.h>
#include <conio.h>
#include <windows.h>  


int matriz[5][5];
int n,m;
main()
{
     
     
     
 printf("arreglo bidemensional con tamaño de 5, se ingresan los valores numericos manualmente");
 printf("mostrarlos nuevamente al terminar de ingresarlos\n");
 printf("\ningrese los valores\n");
 
//lenar la matriz
     for(int i=1;i<=5;i++)
     {
        for(int j=1;j<=5;j++)
        {
        	printf("posicion: %d %d \n",i,j);
            scanf("%d",&n);            
            matriz[i][j]=n;       
        }        
    }   
// recorrer la matriz para obtner el numero mayor    
     for(int i=1;i<=5;i++)
     {
        for(int j=1;j<=5;j++)
        {
            
                printf("%d ",matriz[i][j]);                
                if(j==5)
                {
                    printf("\n");
                }
        }        
        
    }       
        
    printf("\npulsa una tecla para finalizar....");
    getch();
}
