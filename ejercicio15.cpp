#include <iostream>

using namespace std;

int main()
{
    int num, suma=0;

    while (num!=0)
    {
        cout<<"ingrese un valor para num: ";
        cin>>num;
        suma+=num;
        cout<<"la suma parcial es: "<<suma<<endl;
    }

    return 0;
}
