#include <iostream>
using namespace std;

int main(){
	char saludo[10] = "Hola";
	char *puntero_char;
	int *puntero_int;
	void *puntero_vacio;
	
	puntero_char = saludo;
	puntero_int = (int *)saludo;
	puntero_vacio = (void *)saludo;
	 
	cout<<*puntero_char<<endl;
	cout<<*puntero_int<<endl;
	cout<<*(float *)puntero_vacio<<endl;
	return 0;
}


