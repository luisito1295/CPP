/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: Obtener la potencia de un numero
  */



#include <stdio.h>
#include <conio.h>

// obtener la potencia de un numero mediante una funcion
int num;
int potencia(int numero);

main()
{
      clrscr();
    printf("obtener la potencia al cuadrado de un numero entero)");
    printf("\ningrese el numero:");
    scanf("%d",&num);
    printf("\nla potencia es >%d",potencia(num)); 
    
    printf("\npresiona una tecla para finalizar....");
    getchar();
    getchar();
}
//*************** funciones
int potencia(int numero)
{
    int pot;
    pot=numero*numero;        //un numero multiplicado por si mismo es la potencia al cuadrado: 9*9 =81
    return pot;
}
            
