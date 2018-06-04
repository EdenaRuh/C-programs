#include <iostream>

using namespace std;

struct complejos{
	double real;
	double imaginario;
	/*complejo(){
		real = 0;
		imaginario = 0;
	}*/
	/*complejo(double r, double i){
		real = r;
		imaginario = i;
	}*/
	complejo(double r){
		real = r;
		imaginario = 0;
	}
	
}complejo;

int main(){
	//complejo.complejo(23.12, 44.35);
	complejo.complejo(12.45);
	//complejo.complejo();	
	cout<<complejo.real<<" "<<complejo.imaginario<<endl; 
	cout<<complejo.real<<" "<<complejo.imaginario<<endl;
	cout<<complejo.real<<" "<<complejo.imaginario<<endl;	
}
