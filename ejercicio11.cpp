#include<iostream>

using namespace std;

int main(){
	int opcion;
	
	cout<<"Ingrese una opcion en el rango de 1-4: "; 
    cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"Eligio la opcion 1"<<endl; break;
		case 2: cout<<"Eligio la opcion 2"<<endl; break;
		case 3: cout<<"Eligio la opcion 3"<<endl; break;
		case 4: cout<<"Eligio la opcion 4"<<endl; break;
		default: cout<<"La opcion elegida es incorrecta"<<endl; break;
	}
	
	return 0;
}