#include<iostream>

using namespace std;

int main(){
	int segundos, minutos = 0, horas = 0, dias = 0;
	
	cout<<"Ingrese un tiempo en segundos: ";
     cin>>segundos;
	
	if (segundos > 59){
		minutos = segundos / 60;
		segundos = segundos % 60;
		if(minutos > 59){
			horas = minutos / 60;
			minutos = minutos % 60;
			if(horas > 23){
				dias = horas / 24;
				horas = horas % 24;
			}
		}
	}
	
	cout<<"Dias: "<<&dias<<endl;
	cout<<"Horas: "<<&horas<<endl;
	cout<<"Minutos: "<<&minutos<<endl;
	cout<<"Segundos: "<<&segundos<<endl;
	
	
	return 0;
}