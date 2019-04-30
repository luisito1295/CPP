/* Nombre:Luis Fernando Lopez Mendoza
   Grupo: 1 ISC FIE
   Frcha: 5 Sep 2015
   Descripcion: Obtener la edad en meses
*/


#include <conio.h>
#include <stdio.h>

main ()

{

clrscl();
int edad, mes, anios;

printf("Obtener la edad en meses\n\n");

printf("Ingresa la edad \n");
scanf("%d",&edad);

printf("Ingresa tus meses\n");
scanf("%d",&mes);

anios = edad*12+mes;

printf("Tu edad en meses son: %d \n",anios);




printf("Preciona una tecla para continuar \n\n");

getch();


}