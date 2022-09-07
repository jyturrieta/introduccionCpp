#include <iostream>
#include <math.h>


using namespace std;

int main(){
    float radio;
    cout << "ingrese un valor de radio: ";
    cin >> radio;
    cout << "la superficie es de: " << 4* M_PI *pow(radio,2) << endl;
    cout << "el volumen es de:  " << (4 * M_PI * pow(radio,3))/3 << endl;



    return 0;
}