/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: solicitar un numero del 1 al 10 y mostrarlo en letra
  */


#include <stdio.h>
#include <conio.h>
#include <string> 

using namespace std; 


int num;
void letra(int numero);


main()
{
      
    //clrscr();
    
    printf("se mostrara en letra un numero del 1 al 10");
    printf("\ningrese numero (1-10)");
    scanf("%d",&num);
    letra(num); 
    
    printf("\npresiona una tecla para finalizar....");
    getchar();
    getchar();
}
//*************** funciones
void letra(int numero)
{
string text;

     {
        if (num==1)
         {
           printf("uno");
         }   
         if (num==2)
         {
           printf("Dos");
         }   
         if (num==3)
         {
           printf("Tres");
         }   
         if (num==4)
         {
           printf("Cuatro");
         }   
         if (num==5)
         {
           printf("Cinco");
         }   
         if (num==6)
         {
           printf("Seis");
         }   
         if (num==7)
         {
           printf("Siete");
         }   
         if (num==8)
         {
           printf("Ocho");
         }   
         if (num==9)
         {
           printf("Nueve");
         }   
         if (num==10)
         {
           printf("Diez");
         }   
    
            
      }
      printf("\n%d",text);
      return;
}
