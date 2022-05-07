#include <iostream>
#include <cmath>
#include <locale>
#include <windows.h>
#include <string>
#include "ModulesGordenko.h"


using namespace std;

string authorCopyright()
{
    return "© Gordenko Andrey";
}

bool Expression(double a, double b)
{
    return (a + 10 >= b);
}

float DecHexNumber(int x,int y,int z)
{
    double S;
    cout << endl << "'X' in decimal: " << dec << x << endl
         << "'X' in the hexadecimal: " << hex << x << endl;
    cout <<"'Y' in decimal = " << dec << y << endl
         << "'Y' in the hexadecimal: " << hex << y << endl;
    cout << "'Z' in decimal = " << dec << z << endl
        << "'Z' in the hexadecimal: " << hex << z << endl;

    S = s_calculation(x,y,z);
    cout << endl << "Result s_calculation: ";
    return S;
    }

 int main()
 {
    setlocale(LC_ALL,"UKR");

    double x,y,z,a,b;

    cout << authorCopyright();
    cout << endl << "Enter a value x:";
    cin >> x;
    cout << "Enter a value y:";
    cin >> y;
    cout << "Enter a value z:";
    cin >> z;
    cout << "Enter a value a: ";
    cin >> a;
    cout << "Enter a value b: ";
    cin >> b;

    cout << endl << "Result of a boolean expression: " <<  Expression(a,b) << endl;
    cout <<  DecHexNumber(x, y, z) << endl << endl;

    system("pause");
    return 0;
 }
