/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: Obtener la distancia de dos puntos (x,y)
  */


#include <stdio.h>
#include <conio.h>
#include <math.h>

// obtener la distancia entre dos puntos (x,y) de un plano cartesiano mediante una funcion

int distancia(int x1, int x2, int y1, int y2);

main()
{
      
    //clrscr(); 
    int x1, x2, y1, y2;
    printf("obtener la distancia entre dos puntos (x,y) de un plano");
    printf("\n\ncoordenadas del punto A");
    printf("\ningrese x:");
    scanf("%d",&x1);
    printf("ingrese y:");
    scanf("%d",&y1);
    printf("\ncoordenadas del punto B");
    printf("\ningrese x:");
    scanf("%d",&x2);
    printf("ingrese y:");
    scanf("%d",&y2);
    
    
    printf("\n\ndistancia >%d",distancia(x1,x2,y1,y2)); 
    
    printf("\npresiona una tecla para finalizar....");
    getchar();
    getchar();
}
//*************** funciones
int distancia(int x1, int x2, int y1, int y2)
{
    int a,d;
    //formula de distancia entre dos puntos
    a=pow((x2-x1),2);

    d=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    return d;
}
