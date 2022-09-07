#include <iostream>

using namespace std;

int main()
{
    int cantidad, mayor=0, menor=0, n, contadorMayor=0, contadorMenor=0;

    cout << "ingrese cantidad de numeros a ingresar: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "ingrese un numero: ";
        cin >> n;
        if (i==0)
        {
            mayor = n;
            menor = n;
        } 
        if (n==mayor)
        {
            contadorMayor ++;
        } 
        if (n > mayor)
        {
            mayor = n;
            contadorMayor =1;
        }
        if (menor == n)
        {
            contadorMenor++;
        }
        if (n < menor)
        {
            menor = n;   
            contadorMenor = 1;
        }       
    }

    cout << "el mayor es: "<< mayor << endl;
    cout << "el menor es: "<< menor << endl;
    cout << "el mayor se repitio: " << contadorMayor << endl;
    cout << "el menor se repitio: " << contadorMenor << endl;

    return 0;
}
