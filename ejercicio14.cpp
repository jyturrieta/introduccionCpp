#include <iostream>

using namespace std;

int main()
{
    int n, factorial=1;

    cout << "ingrese un numero: ";
    cin >> n;

    while (n != 0)
    {
        factorial*=n;
        n -- ;
    }
    
    cout << "el factorial es: " << factorial;


    return 0;
}
