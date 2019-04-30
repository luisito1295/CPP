//------------------------------------------------------------------------------------
#include <iostream>
#include <conio.h>
 
/*
Programa que genera la solucion al problema
de las ocho reinas en un tablero de ajedrez
sin que puedan comerse unas con otras
 
 
Creado por: Fabian Fari?as
	 C.I: 18.204.018
 
*/
using namespace std;
class ajedrez{
protected:
int a[8][8];     //Atributo de la clase, esta matriz es el tablero de 8 x 8
public:
int error;      //Si ocurrio un choque entre las reinas se le asigna 1 a esta variable
ajedrez();
void limpiar(); //Inicializa el tablero, para usarlo nuevamente
void dibujar();//Muestra el tablero
void insertar(int posx, int posy);//Metodo que coloca una reina en el tablero si es posible hacerlo
};
 
ajedrez::ajedrez(){  //Constructor de la clase
error=0;             //Inicializo en 0 esta variable porq no debe iniciar con error
for(int i=0;i<8;i++) //Inicializamos toda la matriz en 0
	for(int j=0;j<8;j++)
	a[i][j]=0;
}
void ajedrez::limpiar(){ //Metodo que inicializala matriz con 0
for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
	a[i][j]=0;
}
//------------------------------------------------------
void ajedrez::dibujar(){ //Metodo que dibuja el tablero
	for(int i=0;i<8;i++){
	cout<<endl;
	
	for(int j=0;j<8;j++){
	
	cout<<a[i][j]<<"  ";
	}}
}
//-----------------------------------------------------
int ajedrez::generar(int posx, int posy){
int x, y,i;     //Variables temporales para filas y columnas
//Se comprueba que ni en las diagonales, ni en filas y columnas exista
//una reina, si lo hay se asigna 1 a la bandera error
for(i=0;i<8;i++){
if(a[posx][i] == 1)error=1;
}
 
 
for(i=0;i<8;i++){
if(a[i][posy]== 1)error=1;
}
 
x=posx;
y=posy;
	while(x!= 0 && y!=0){
	x--;
	y--;
	}
for(i=0;i<8;i++){
	if((x+i)<8 &(y+i)<8){
	if(a[x+i][y+i]==1 )error=1;
 
	       }
}
x=posx;
y=posy;
	while(x!=0 ){
	x--;
	y++;
	}
for(i=0;i<8;i++){
if((x+i<8 )&&((y-i>=0) && (y-i<8))){
if(a[x+i][y-i]==1){error=1};
 
 
     }
 
}
a[posx][posy]=1;
 
 
 
}
//-------------------------------------------------
 
int main()
{
int tablero[8][8],soluciones=0;
ajedrez *obj=new ajedrez();
	for(int i1=0;i1<8;i1++){ //Estos 8 ciclos for me generaran las 92 posibles
	for(int i2=0;i2<8;i2++){ //combinaciones, se buscaran todas las posibles
	for(int i3=0;i3<8;i3++){ //coordenadas
	for(int i4=0;i4<8;i4++){
	for(int i5=0;i5<8;i5++){
	for(int i6=0;i6<8;i6++){
	for(int i7=0;i7<8;i7++){
	for(int i8=0;i8<8;i8++){
obj->insertar(0,i1) ;      //Se pasan por parametros todas las combinaciones
obj->insertar(1,i2) ;      //generadas por los ciclos for
obj->insertar(2,i3) ;
obj->insertar(3,i4) ;
obj->insertar(4,i5) ;
obj->insertar(5,i6) ;
obj->insertar(6,i7) ;
obj->insertar(7,i8) ;
if(obj->error){
obj->limpiar();
obj->error=0;  } else
{
clrscr();
obj->dibujar();
soluciones++;
cout<<"Solucion "<<soluciones<<endl;
cout<<"Las coordenadas fueron: " <<endl;
cout<<"1 - "<<i1+1<<endl;
cout<<"2 - "<<i2+1<<endl;
cout<<"3 - "<<i3+1<<endl;
cout<<"4 - "<<i4+1<<endl;
cout<<"5 - "<<i5+1<<endl;
cout<<"6 - "<<i6+1<<endl;
cout<<"7 - "<<i7+1<<endl;
cout<<"8 - "<<i8+1<<endl;
obj->limpiar();
getch();
}
 
			}}}}}}}}//Se cierran los 8 ciclos for
delete obj;
getch();
return 0;
}    //Creado por: Fabian Fari?as
