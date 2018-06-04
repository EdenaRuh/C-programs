#include <iostream>

using namespace std;

int main(){
int vector[5] = {1,2,3,4,5};
int *puntero = 0;
int *puntero_uno = 0;
puntero = vector;
puntero_uno = &vector[3];

cout<<puntero<<endl;
cout<<puntero_uno<<endl;
cout<<*puntero_uno<<endl;
puntero_uno[-1] = puntero_uno[1] = 1000;
cout<<vector[2]<<" "<<vector[4]<<endl;
cout<<(*puntero)++<<endl;
cout<<puntero++<<endl;
cout<<(*puntero)++<<endl;
cout<<puntero++<<endl; //puntero = puntero + 7 ------> puntero increasing in 7*sizeof(int)
return 0;
}
 
