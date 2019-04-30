/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 26/09/15
  Descripcion: Encontrar la posicion minima y maxima de la i,j
*/


#include <stdio.h>
#include <conio.h>

int matriz[3][3];
int n,m;
main()
{
     //clrscr();
    
 printf("determinar la posicion i,j de la matriz en la que se encuentra el valor maximo y el valor minimo");
 printf("llene la matriz de 3 x 3\n \n");
 m=0;
//lenar la matriz
     for(int i=1;i<=3;i++)
     {
        for(int j=1;j<=3;j++)
        {
            scanf("%d",&n);            
            matriz[i][j]=n;                             
        }        
    }   
// recorrer la matriz para obtner el numero mayor    
     for(int i=1;i<=3;i++)
     {
        for(int j=1;j<=3;j++)
        {
            
            
            if (matriz[i][j]>=m)
            {
                m=matriz[i][j];                
            }
        }        
        
    }       
        
    printf("\n\nel numero mayor es: %d",m);
    printf("\npulsa una tecla para finalizar....");
    getch();
}
