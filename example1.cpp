#include <iostream>

using namespace std;

int main()
{
	int i;
	
	for(i=1;i<=20;i++)
	{
		if((i%3)==0)
		{
			cout<<"El numero "<<i<<" es multiplo de 3"<<endl;
		}
		else{
			cout<<"El numero "<<i<<" no es multiplo de 3"<<endl;
		}
	}
	
	return 0;
	
}
