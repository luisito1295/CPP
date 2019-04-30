/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: Factorial mediante un numero
  */



#include <stdio.h>
#include <conio.h>

// obtener el factorial de un numero mediante una funcion
int num;
int factorial(int numero);

main()
{
      
      clrscr();
    printf("obtener el factorial de un numero entero");
    printf("\ningrese el numero:");
    scanf("%d",&num);
    printf("\n\nfactorial (n!) >%d",factorial(num)); 
    
    printf("\npresiona una tecla para finalizar....");
    getchar();
    getchar();
}
//*************** funciones
int factorial(int numero)
{
    int f,fac;
    fac=numero;
    for(f=1;f<=numero-1;f++)
    {
        fac=fac*f;
        printf("\n%d",fac);
   }
    return fac;
}
