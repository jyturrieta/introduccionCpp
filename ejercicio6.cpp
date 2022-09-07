#include <iostream>

using namespace std;

int main() {

    int numero;
    
    cout << "ingrese un numero: ";
    cin >> numero;

    if (numero < 0){
        cout << "el numero es menor que 0 " << endl;
    } else if (numero > 0){
        cout << "el numero es mayor que 0 " << endl;
    } else{
        cout << "el numero es igual a 0 " << endl;
    }
    

    return 0;
}