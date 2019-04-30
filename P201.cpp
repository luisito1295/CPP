/* Nombre Luis Fernando Lopez Mendoza
   Grupo: 1-D ISC
   Fecha: 9 Sep 2015
   Descripcion: Clave de sexo

*/

#include <stdio.h>
#include <conio.h>

main ()


{
     clrscr();
     
     char sexo;
     float contador, H, M;
     
     printf ("Leer 3 veces la clave de sexo \n");
  

     
     for(contador=1;contador<=3;contador=contador+1)
     {
         printf ("Ingrese e, sexo (H: Hombre, M: Mujer) \n");    
         scanf("%s",&sexo);
         if (sexo=='H')
            {
              H=H+1;
            }
         else
           {
              M=M+1;
            }
     }
     printf("de hombres fueron: %f" ,H);
     printf("de mujeres fueron: %f", M);
     getch();    
}
