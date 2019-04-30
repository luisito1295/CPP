#include <string>
#include <iostream>
 
using namespace std;
 int binario(int num){
	int numero, mod;
    string binario = "";
	if (numero > 0) {
        while (numero > 0) {
        	mod=numero%2;
            if (mod == 0) {
                binario = "0"+binario;
            } else {
                binario = "1"+binario;
            }
            numero = numero/2;
        }
    } 
    cout << "El resultado de la conversion es: " << binario;
}
int main() {
	int numero;
    
    cout << "Ingrese un numero entero positivo: \n";
    cin >> numero;
    
    binario(numero);
    getchar();
}


