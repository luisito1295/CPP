/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: obtener la longitud de numeros que tiene un numero (ejem: 253 =3) mediante una funcion
  */


#include <stdio.h>
#include <conio.h>
#include <string> 
using namespace std; 

	

string largo;
int num,medida;


main()
{
      
     clrscr(); 
    int n;
    printf("obtener longitud de un numero cualquiera)");
    printf("\ningrese numero:");
    scanf("%d",&num);
    largo=num;
    
    
    printf("\nlongitud del numero >%d",strlen,(largo)); 
    
    printf("\npresiona una tecla para finalizar....");
    getchar();
    getchar();
}
            
