#include <iostream>

using namespace std;

int main()
{
    float celsius=0, fahrenheit=0, dividendo=5, divisor=9;

    for (int i = 0; i <= 20 ; i++)
    {
        celsius = dividendo/divisor * (fahrenheit - 32); 
        cout<<"Tabla de valores Celcius y Farenheit: "<< celsius <<" | "<<fahrenheit<<endl;
        fahrenheit+=10;
    }
    

    return 0;
}



