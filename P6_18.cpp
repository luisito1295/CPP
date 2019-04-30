/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: determininar si un numero n es par o impar mediante una funcion
  */


#include <stdio.h>
#include <conio.h>

int num;
void Par(int numero);

main()
{
      
     clrscr(); 
    printf("determinar si un numero n es par o impar");
    printf("\ningrese el numero:");
    scanf("%d",&num);
    Par(num); 
    
    printf("\npresiona una tecla para finalizar....");
    getchar();
    getchar();
}
//*************** funciones
void Par(int numero)
{
    int resultado;
    //obtener el modulo (residuo) del numero entre dos y determinar si es par o impar
    resultado=numero %2;
    if (resultado==0)
            printf("\nel numero es par");
    else
        printf("\nel numero es impar");
        
    
    return;
}
