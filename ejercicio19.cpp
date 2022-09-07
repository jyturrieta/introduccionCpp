
#include <iostream>

/*19) Dada una serie de números enteros terminada en cero, imprimir los tres 
mayores*/
using namespace std;

int main()
{
    int cantidad, numero, mayor1, mayor2, mayor3;

    cout << "ingrese la cantidad de numeros: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++){
    
        cout << "ingrese un numero: ";
        cin >> numero;
        if (numero%10 == 0){
            if (numero > mayor1)
            {
                mayor3 = mayor2;
                mayor2 = mayor1;
                mayor1 = numero;
            }
            else if (numero > mayor2)
            {
                mayor3 = mayor2;
                mayor2 = numero;
            }
            else if (numero > mayor3)
            {
                mayor3 = numero;
            }
        } else {
            cout << "el numero no termina con 0" << endl;
        }
    }
    cout << "los mayores son: " << mayor1 << " "<< mayor2 << " "<< mayor3 << endl;
   
    
    return 0;
}
