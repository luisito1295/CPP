/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 9 Sep 2015
   Descripcion: Promedio de 3 califiaciones

*/

#include <stdio.h>
#include <conio.h>


main()

{

clrscr();

int M1, M2, M3, cal;


printf ("El promedio de 3 calificaciones en un examen \n");

printf  ("Inglese la calificacion \n");
printf  ("de las materia \n");

printf ("Calculo: ");
scanf ("%d",&M1);

printf ("Fisica: ");
scanf ("%d",&M2);

printf ("Ingles: ");
scanf ("%d",&M3);


cal = (M1+M2+M3)/3;

    if (cal>=6)
    {
       printf ("Felizidades usted !!!Aprobo!!! el examen \n");    
       printf ("Su promedio es: %d",cal);
    }
	else
	{
	
           printf ("Reprobado");  
    }
	getch();
    
    
      
}
