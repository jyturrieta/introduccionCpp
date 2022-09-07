#include <iostream>

using namespace std;

int main(){
	int nro1,nro2, suma,resta,multiplicacion,division;
	
	cout << "ingrese primer numero: " ;
	cin >> nro1;
	cout << "ingrese segundo numero: " ;
 	cin >> nro2;
	
	suma = nro1 + nro2;
	resta = nro1 - nro2;
	multiplicacion = nro1*nro2;
	division= nro1/nro2;
	cout << "la suma es: " << suma<<endl;
	cout << "la resta es: " << resta<<endl;
	cout << "la multiplicacion es: "<<multiplicacion<<endl;
	cout << "la division es: "<<division<<endl;

 	return 0;

}
