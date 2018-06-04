#include <iostream>

using namespace std;
int calcularModulo(int numero, int factor);
int main()
{
	int i;
	int factor = 3;
	int resultado;
	for(i=1;i<=20;i++)
	{
		resultado = calcularModulo(i,factor);
		if (resultado == 0){
			cout<<"El numero "<<i<<" ES divisible entre 3"<<endl;
		}
		else
		{
			cout<<"El numero "<<i<<" NO es divisible ente 3"<<endl;
		}
	}
	
	
	return 0;
}
int calcularModulo(int numero, int factor)
{
	if((numero%factor)==0){
		return 0;
	}
	else{
		return -1;
	}
}
