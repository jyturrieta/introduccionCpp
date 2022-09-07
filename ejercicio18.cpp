#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "ingrese un valor para a: ";
    cin >> a;
    cout << "ingrese un valor para b: ";
    cin >> b;
    for (int i = 0; i < b ; i++)
    {
       c += a;
    }

    cout << "el resultado es: " << c;
        

    return 0;
}
