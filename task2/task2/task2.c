#include <stdio.h>
#define PI 3.14
#include <math.h>


double F(double x)
{
    return  pow(cos((3 / 8) * PI - (x / 4)), 2) - pow(cos((11 / 8) * PI - (x / 4)), 2);
}

void main(void)
{

    printf("vvedite x \n");
    double y, x;
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    y = F(x);
    printf("y = %.4lf\n", y);
}