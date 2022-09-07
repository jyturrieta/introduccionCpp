#include <iostream>

using namespace std;

int main(){

    int base, altura, perimetro, superficie;

    

    cout << "ingrese la base: ";
    cin >> base;
    cout << "ingrese la altura: ";
    cin >> altura;
    perimetro = (base*2) + (altura*2);
    superficie = base*altura;
    cout << "el perimetro es de: " << perimetro << endl;
    cout << "la superficie es de: " << superficie << endl;
    return 0; 
    
}