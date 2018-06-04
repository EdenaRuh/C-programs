//Buscar caracter determinado en cadena (BuscaCaracter). Devolver un int con la posición donde fue encontrada, si no -1.
//BuscaCaracter(char cadena char caracter)
#include <iostream>
using namespace std;
int BuscarCaracter(char *, char *);
int main()
{
	char cadena[20];
	char *ptr_cadena;
	char caracter;
	char *ptr_caracter;
	int posicion = 0;
	cout<<"Introduzca una cadena: "<<endl;
	cin>>cadena;
	cout<<"Introduzca el caracter a buscar: "<<endl;
	cin>>caracter;
	ptr_cadena = &cadena[0];
	ptr_caracter = &caracter;	
	posicion = BuscarCaracter(ptr_cadena, ptr_caracter);
	if (posicion != -1)
	{
		cout<<"El caracter buscado esta en la posicion: "<<posicion<<endl;
	}
	else 
	{
		cout<<"No existe el caracter buscado en la cadena"<<endl;
	}	
	return 0;
}

int BuscarCaracter(char *a, char *b)
{
	int i = 0;
	int pos = 0;	
	while(a[i] != 0)
	{
		if(a[i] == *b){
			pos = i;
			return pos;						
		}		
		i++;
	}
	return -1;	
}
