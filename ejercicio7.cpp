#include <iostream>

using namespace std;

int main() {
    int n1, n2, mayor=n1;
    
    cout << "ingrese un valor para n1: ";
    cin >> n1;
    cout << "ingrese un valor para n1: ";
    cin >> n2;

    if(n1 >= n2){
        cout << "el mayor es " << n1 ;
    } else{
        cout << "el mayor es " << n2 ;
    }

    return 0;
}