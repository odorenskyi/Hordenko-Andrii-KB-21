#include <iostream>
#include <math.h>
#include <bitset>

using namespace std;

double s_calculation(double x, double y,double z)
{
    return (z + 2 * pow(y, 2)) / (2.72 * (x - y)) + sqrt((3.14 * x));
}

double bal_baphort(double speed)
{
    if (speed < 0.3)
    {
        return 0;
    }
    if (speed <= 1.5)
    {
        return 1;
    }
    if (speed <= 3.4)
    {
         return 2;
    }
    if (speed <= 5.4)
    {
        return 3;
    }
    if (speed <= 7.9)
    {
         return 4;
    }
    if (speed <= 10.7)
    {
         return 5;
    }
    if (speed <= 13.8)
    {
         return 6;
    }
    if (speed <= 17.1)
    {
         return 7;
    }
    if (speed <= 20.7)
    {
         return 8;
    }
    if (speed <= 24.4)
    {
        return 9;
    }
    if (speed <= 28.4)
    {
        return 10;
    }
    if (speed <= 32.6)
    {
         return 11;
    }
    if (speed >= 32.7)
    {
         return 12;
    }
    return 0;
}

double temperature(double celciya)
{
    return celciya * 1.8 + 32;
}

int bits_number(int number)
{
    bitset<32> b_number{number};
    if(b_number[14] == 1){
        return b_number.count();
    }
        return 32 - b_number.count();
}











