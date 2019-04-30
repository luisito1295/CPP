//Nombre:Luis Fernando Lopez Mendoza
//Grupo: 1 ISC FIE
//Frcha: 5 Sep 2015
//Descripcion: Determinar el promedio de 3 materias

#include <stdio.h>
#include <conio.h>


main()


{

clrscr();
      
float M1, M2, M3, promedio;


printf ("Determinar el promedio de 3 materias\n"); 

printf ("Ingrese la primera materia\n");  
scanf  ("%f",&M1);

printf ("Ingrese la segunda materia\n");
scanf  ("%f",&M2);

printf ("Ingrese la tercera materia\n");
scanf  ("%f",&M3);


promedio = (M1+M2+M3)/3;
printf ("El promedio de las 3 materias es: %d \n",promedio);
      
getch();







}