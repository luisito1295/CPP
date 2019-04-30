/* Nombre:Luis Fernando Lopez Mendoza
   Grupo: 1 ISC FIE
   Frcha: 5 Sep 2015
   Descripcion: Convertir total de munitos a mese, semanas
		dias, horas y minutos
   Nota Usar divicion entre y opracion modulo
*/

#include <conio.h>
#include <stdio.h>

main()
{


long mintot, meses, sem, dias, horas, min, residuo;

//clrscr();

gotoxy (25,2);

printf("Ingresar la cantidad de minutos recoridos :");
scanf("%ld",&mintot);


meses = mintot / 43200;  //1 mes tiene 43200 mins

residuo = mintot % 43200;  //El residuo de la divicion, op. modulo
sem=residuo / 10080;
gotoxy(25,5);

printf("Meses:   %ld       Residuo:  %ld",meses,residuo);


gotoxy(25,6);
sem = residuo / 10080;
residuo = residuo % 10080;
printf("Semanas:   %ld     Residuo:   %ld",sem,residuo);


gotoxy(25,7);
dias = residuo / 1440;
residuo = residuo % 1440;
printf("Dias :  %ld        Residuo:   %ld",dias,residuo);


gotoxy(25,8);
horas = residuo / 60;
min = residuo % 60;
printf("Horas:   %ld   y   Munutos:  %ld",horas,min);

getch();


}