#include <iostream>
#include "ModulesGordenko.h"
#include <math.h>

using namespace std;

void test_driver(){

    system("chcp 65001 & cls");

    int x [5] = {6, 9, 7, 8, 9};
    int y [5] = {5, 5, -15, -5, -7};
    int z [5] = {9, -10, 8, 6, 10};

    int result [5] = {26, 9, 12, 7, 8};

    for(int i = 0; i < 5; i++)
    {
        if(round(s_calculation( x[i], y[i], z[i])) == result[i])
        {
            cout << "Passed" << endl;
        }
        else
        {
            cout << "Failed" << endl;
        }
    }
}

int main()
{
    test_driver();
}
