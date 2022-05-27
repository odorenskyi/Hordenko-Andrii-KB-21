#include <iostream>
#include <locale.h>
#include "ModulesGordenko.h"

using namespace std;

void s_cal()
{
    int x = 0;
    int y = 0;
    int z = 0;

    cout << "Enter X: ";
    cin >> x;
    cout << "Enter Y: ";
    cin >> y;
    cout << "Enter Z: ";
    cin >> z;

    cout << "Result: " << s_calculation(x, y, z) << endl;
}

void temp()
{
    double celcia = 0;
    cout << "Enter temperature: ";
    cin >> celcia;
    cout << endl << "Celsia: " << celcia << endl;

    cout << "Farengeit: " << temperature(celcia) << endl;
}

void bal()
{
    double speed = 0;
    cout << "Enter speed wind: ";
    cin >> speed;

    cout << "Result: " << bal_baphort(speed);
}

void bit()
{
    int num = 0;
    cout << "Enter number: ";
    cin >> num;

    cout << "Result: " << bits_number(num) << endl;
}


int main()
{
    setlocale (LC_ALL, "UKR");

    int symbol = 0;
    char sym;
    while(true)
    {
        cout << "Enter number: ";
        cin >> symbol;

        if (symbol == 7)
        {
            s_cal();
        }
        if (symbol == 5)
        {
            bal();
        }
        if (symbol == 4)
        {
            temp();
        }
        if (symbol == 3)
        {
            bit();
        }
        else
        {
            cout << "\a";
        }
        cout << endl;
        cout << "Action: ";
        cin >> sym;

        if (sym == 'T' || sym == 't' || sym == 'C')
            break;

        system("pause");
        system("cls");
    }
}
