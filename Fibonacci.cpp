#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int ant1=1,ant2=1;
	int suma=1;
	for(int i=1;i<10;i++){
		cout<<suma<<" ";
		suma=ant1+ant2;
		ant1=ant2;
		ant2=suma;
	}
}
