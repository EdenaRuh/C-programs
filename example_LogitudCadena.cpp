//Programa que de el tama�o de una cadena de caracteres (LongitudCadena, devuelve un int y par�metro un puntero a char)
//Usar s�lo punteros y aritm�tica de punteros
#include <iostream>
using namespace std;
int LongitudCadena(char *);
int main()
{
	cout<<"Inicio del programa"<<endl;
	char cadena[20];
	char *ptr_cadena;
	int tamanio;
	cout<<"Introduzca una cadena de caracteres"<<endl;
	cin>>cadena;		
	ptr_cadena = &cadena[0];
	tamanio = LongitudCadena(ptr_cadena);
	cout<<"La cadena tiene "<<tamanio<<" caracteres"<<endl;
	return 0;
}

int LongitudCadena(char *a)
{
	int i = 0;	
	while(a[i] != 0)
	{
		i++;
	}
	return i;	
}

