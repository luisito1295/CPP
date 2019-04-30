/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: Calcular el cuadrado de un numero mediante una funcion
  */



#include <conio.h>
#include <stdio.h>



/* escribir una funcion que permita centrar un texto en la pantalla
   considerando 80 columnas x 23 lineas */
int cuadrado(int numero);



main()
{
      	//clrscr();
 int numero;
 printf("calcular el cuadrado de un numero cualquiera mediante el diseño de una función");
 printf("ingrese un numero entero:");
 scanf("%d",&numero);
printf("el numero al cuadrado es:%d", cuadrado(numero));
getchar();    
getchar();    
}
//*************** grupo de funciones

int cuadrado(int numero)
{
   int resultado;
   resultado=numero*numero;
   return resultado;
  
}    
