/*Nombre: Lopez Mendoza Luis Fernando
  Grupo: 1 D ISC
  Fecha: 03/10/15
  Descripcion: Centrar los textos
  */


#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
/* escribir una funcion que permita centrar un texto en la pantalla
   considerando 80 columnas x 23 lineas */
int centrado(int linea,char texto[40]);

	

main()
{
      //clrscr();
      
    int col;
 printf("a partir de este momento los demas textos se mostraran centrados");
 getchar();
centrado(5,"Hola mundo");
centrado(8,"pedro paramo, llano en llamas");
centrado(23,"frankeinstein, rene descartes");


getchar();
    
    
}
//*************** grupo de funciones

int centrado(int linea, char texto[40])
{
int longText,columna;
  longText=strlen(texto); //mide el tamaño de la cadena 
  columna=(80-longText)/2;     //restamos 80 y dividimos entre 2 (centro de la pantalla)
 // gotoxy(linea,columna);
  printf("%s\n",texto);
  getchar();
  return columna;

}    
