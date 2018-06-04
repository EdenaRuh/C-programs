#include <iostream>

using namespace std;
struct numero{
	int A, B;
	void guardaA(int a)
	{
		A = a;
	}
	void guardaB(int b)
	{
		B = b;
	}
	int leerA ()
	{
		return A;
	}
	int leerB ()
	{
		return B;
	}
	
}numeros;

int main(){
	numeros.guardaA(56);
	numeros.guardaB(83);
	cout<<numeros.leerA()<<endl;
	cout<<numeros.leerB()<<endl;
}
