#include <iostream>
using namespace std;
int main()
{
	char Mes[][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	char *Mes2[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	cout<<"Tamanio de Mes: "<<sizeof(Mes)<<endl;
	cout<<"Tamanio de Mes2: "<<sizeof(Mes2)<<endl;
	
	
	return 0;
	
}
