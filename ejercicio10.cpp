#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    string opcion;

    cout <<"ingrese un valor para n1: ";
    cin >> n1;
    cout <<"ingrese un valor para n2: ";
    cin >> n2;
    cout << "ingrese el tipo de operación que desea realizar: ";
    cin >> opcion;

    if(opcion=="+"){
        cout << "la suma es: " << n1 + n2;
    } else if (opcion=="-")
    {
        cout << "la resta es: " << n1 - n2;
    } else if (opcion=="*"){
        cout << "la multiplicacion es: " << n1*n2;
    } else if (opcion=="/"){
        cout << "la division es: " << n1/n2;
    } else {
        cout << "el operador ingresado es incorrecto";
    }

    return 0;
}

