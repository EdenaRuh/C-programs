#include <iostream>
using namespace std;
//Rellenar array por teclado. Calcular suma, promedio, mayor y menor

int main()
{
	int matrix[10] = {0};
	int i,k,a;
	int j,m,z,aux = 0;
	float tamanio = 10;
	float media = 0;
	int suma = 0;
	int maximo, minimo;
	cout<<"Introduzca 10 valores para rellenar la matriz"<<endl;
	for(i=0;i<10;i++)  //También se podría hacer con un do----while
	{
		cout<<"Introduzca el valor "<<i+1<<endl;
		cin>>matrix[i];
	}
	
	for(i=0;i<10;i++)  //También se podría hacer con un do----while
	{
		cout<<" "<<matrix[i]<<" ";		
	}		
	
	for(j=0;j<10;j++)
	{
		suma = suma + matrix[j];
	}
	media = suma/tamanio;
	//Ordenamiento del array. Método burbuja
	for(k=tamanio;k>0;k--)
	{		
		a = k-1;
		for(m=0;m<a;m++)
		{
			if(matrix[m]>matrix[m+1])
			{
				aux = matrix[m];
				matrix[m] = matrix[m+1];
				matrix[m+1] = aux;							
			}
		}
	}
	//La matriz está ordenada
	cout<<"La media es "<<media<<endl;
	cout<<"La suma es "<<suma<<endl;
	for(z=0;z<10;z++){
		cout<<" "<<matrix[z]<<" ";
	}
	cout<<"El valor maximo es "<<matrix[9]<<endl;
	cout<<"El valor minimo "<<matrix[0]<<endl;
	return 0;
}



