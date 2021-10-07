#define PI 3.14
#include <math.h>



double F(double x)
{
    return  pow(cos((3 / 8) * PI - (x / 4)), 2) - pow(cos((11 / 8) * PI - (x / 4)), 2);
}