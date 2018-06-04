#include <iostream>

using namespace std;

struct sEstructura{
	int a;
	int b;
}estructura,*e;

int main(){
	estructura.a = 10;
	estructura.b = 20;
	e = &estructura;
	
	cout<<estructura.a<<endl;
	cout<<estructura.b<<endl;
	cout<<endl;
	
	/*Equal to guy before*/
	cout<<e->a<<endl;
	cout<<e->b<<endl;
	
	
	
	return 0;
}
