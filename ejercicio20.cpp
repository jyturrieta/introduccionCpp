#include <iostream>

using namespace std;

int main()
{
    string nombre, nombreMax, nombreMin;
    int salario, mayor, menor, cantidad;

    cout << "ingrese la cantidad de personas: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "ingrese un nombre: ";
        cin >> nombre;
        cout << "ingrese un salario: ";
        cin >> salario;
        
        if (i == 0)
        {
            mayor = menor = salario;
            nombreMax = nombreMin = nombre;
        }
        else
        {
            if (salario > mayor)
            {
                mayor = salario;
                nombreMax = nombre;
            }
            else if (salario < menor)
            {
                menor = salario;
                nombreMin = nombre;
            }

        }
    }
    cout << "el salario maximo es: " << mayor << " y el nombre es: " << nombreMax << endl;
    cout << "el salario minimo es: " << menor << " y el nombre es: " << nombreMin << endl;
    return 0;
}
    
