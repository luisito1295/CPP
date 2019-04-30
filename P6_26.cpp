/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion:Obtener la area de un circulo
  */



#include <stdio.h>
#include <conio.h>
#include <math.h>

// obtener el area de un circulo mediante una funcion
float num;
float circulo(float radio);

main()
{
      clrscr();
      
    printf("obtener el area de un circulo)");
    printf("\ningrese radio del circulo:");
    scanf("%f",&num);
    printf("\narea >%f",circulo(num)); 
    
    printf("\npresiona una tecla para finalizar....");
    getchar();
    getchar();
}
//*************** funciones
float circulo(float radio)
{
	float pi=3.1416;
    float area;
    area=pi*pow(radio,2);        //un numero multiplicado por si mismo es la potencia al cuadrado: 9*9 =81
    return area;
}
            
