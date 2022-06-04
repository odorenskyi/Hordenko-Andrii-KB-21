#include <iostream>
#include "ModulesGordenko.h"
#include <math.h>

using namespace std;

    /*
    avtor_inf_and_random_num();
    date();
    calcul();
    prov_text();
    */
void prov_calcul()
{
    int x[3] = {1,2,4};
    int y[3] = {3,54,1};
    int z[3] = {5,12,98};
    double result[3] = {-2, -39, 16};
    for(int i = 0; i < 3; i++)
    {
        if(round(s_calculation(x[i],y[i],z[i])) == result[i])
            cout << "passed" << endl;
        else
            cout << "failed" << endl;
    }
}

void prov_bits()
{
    int b[3]= {5,32,56};
    int b_result[3] = {00000000000000000000000000000101, 00000000000000000000000000100000, 00000000000000000000000000111000};
    int result[3] = {00000000000000000000000000000101, 00000000000000000000000000100000, 00000000000000000000000000111000};

    for (int i = 0; i < 3; i++)
    {
        if(b_result[i] == result[i])
            cout << "passed" << endl;
        else
            cout << "failed" << endl;
    }

}

int main()
{
    avtor_inf_and_random_num();
    date();
    calcul();
    prov_text();
    prov_calcul();
    prov_bits();

}
