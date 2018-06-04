//nombre y numero de telefono de 10 personas. Se deben leer los datos
//introducidos por el usuario y guardarlos en memoria . Después buscar el nombre correspondiente
//a un numero  y el tel correspondiente a una persona. Menú para elegir, opción de salir.
/* Menú
a) Buscar por nombre
b) Buscar por numero de teléfono
c) salir
*/
#include <iostream>
#include <string.h>


using namespace std;

struct personas{
	char telefono[10];
	char nombre[20];	
}persona[10];

int main(){
	char opcion;
	int i;
	char nombres[20];
	char telefonos[10];
	do{
		cout<<"Menu"<<endl;
		cout<<"a) Buscar por nombre"<<endl;
		cout<<"b) Buscar por numero de telefono"<<endl;
		cout<<"c) Introducir numero de telefono y nombre"<<endl;
		cout<<"d) Salir"<<endl;
		cout<<"Que desea hacer?"<<endl;
		cin>>opcion;		
		switch(opcion){
		case 'a':
			cout<<"Introduzca un nombre"<<endl;
			cin>>nombres;
			for(i=0;i<10;i++){
				if(strcmp(persona[i].nombre,nombres)==0){
				cout<<"El telefono es: "<<persona[i].telefono<<endl;
				}				
			}
			break;			
		case 'b':
			cout<<"Introduzca un numero de telefono"<<endl;
			cin>>telefonos;
			for(i=0;i<10;i++){
				if(strcmp(persona[i].telefono,telefonos) == 0){
				cout<<"El nombre es: "<<persona[i].nombre<<endl;
				}				
			}
			break;	
		case 'c':
			for(i=0;i<10;i++){
				cout<<"Introduzca un nombre y un telefono de la persona"<<i+1<<endl;
				cin>>nombres;
				cin>>telefonos;				
				strcpy(persona[i].nombre,nombres);
				strcpy(persona[i].telefono,telefonos);
			}
			cout<<"Ha completado todas las personas"<<endl;
			break;			
		case 'd': break;
		}				
	}while(opcion != 'd');	
}


