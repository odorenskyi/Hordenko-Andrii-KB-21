#include <math.h>

using namespace std;

double s_calculation(double x, double y,double z)
{
    return (z + 2 * pow(y, 2)) / (2.72 * (x - y)) + sqrt((3.14 * x));
}
