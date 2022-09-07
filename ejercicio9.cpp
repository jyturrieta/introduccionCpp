#include <iostream>

using namespace std;

int main()
{
    int m, n;

    
    cout << "ingrese un valor para m: ";
    cin >> m;
    cout << "ingrese un valor para n: ";
    cin >> n;
    if(m%n==0){
        cout << m << " es divisible por " << n ;
    } else{
        cout << m << " no es divisible por " << n;
    }


    return 0;
}
