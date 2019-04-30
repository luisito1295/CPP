/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: Obtener la media de dos numeros sin inportar si son enteros o decimales
  */



#include <stdio.h>
#include <conio.h>


float num1, num2;
float media(float numero1,float numero2);

main()
{
    //clrscr();
      
    printf("obtener la media de dos numeros ingresados (decimales o enteros)");
    printf("\ningrese el PRIMER numero (1-10)");
    scanf("%f",&num1);
    printf("\ningrese el SEGUNDO numero (1-10)");
    scanf("%f",&num2);
    printf("\n%f",media(num1,num2)); 
    
    printf("\npresiona una tecla para finalizar....");
    getchar();
    getchar();
}
//*************** funciones
float media(float numero1,float numero2)
{
    float prom;
    prom=(numero1+numero2)/2;
    return prom;
}
