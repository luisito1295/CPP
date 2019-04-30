//Programa que convierte una cantidad de 2 digitos a letras. Programa muy simple (No se consideran excepciones)

#include <stdio.h>
#include <stdlib.h>
 
main(){
int num;
int decenas;
int unidades;
 
printf("\nIngresar numero entre 1 y 99 : ");
scanf("%d",&num);
 
decenas = num/10;
unidades = num%10;
 
        printf("decenas=%d unidades=%d \n\n",decenas,unidades);
            switch(decenas){
            case 2: {printf("Veinte y"); break;}
            case 3: {printf("Treinta y"); break;}
            case 4: {printf("Cuarenta y"); break;}
            case 5: {printf("Cincuenta y"); break;}
            case 6: {printf("Sesenta y"); break;}
            case 7: {printf("Setenta y"); break;}
            case 8: {printf("ochenta y"); break;}
            case 9: {printf("Noventa y"); break;}
            }
            
            switch(unidades){
            case 0: {printf("\n"); break;}
            case 1: {printf("uno\n"); break;}
            case 2: {printf("dos\n"); break;}
            case 3: {printf("tres\n"); break;}
            case 4: {printf("cuatro\n"); break;}
            case 5: {printf("cinco\n"); break;}
            case 6: {printf("seis\n"); break;}
            case 7: {printf("siete\n"); break;}
            case 8: {printf("ocho\n"); break;}
            case 9: {printf("nueve\n"); break;}
            }
}
