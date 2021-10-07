#include <stdio.h>
#include "func.h"
#define PI 3.14
#include <math.h>


double x, result;

void F(void)
{
    result = pow(cos((3 / 8) * PI - (x / 4)), 2) - pow(cos((11 / 8) * PI - (x / 4)), 2);
}