/* Nombre: Luis Fernando Lopez Mendoza
   Grupo: 1D ISC FIE
   Fecha: 5 Sep 2015
   Descripcion: Millas a kilometros
*/

#include <stdio.h>
#include <conio.h>

main()

{

float millas, k;

printf ("Convercion de Millas a Kilometros \n");

printf ("Ingresa las millas \n");
scanf  ("%f",&millas);

k = millas*1.60934;
printf ("Los kilometros son: %f",k);

getch();

}
