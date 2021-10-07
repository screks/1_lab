#include <stdio.h>

#define PI 3.14
#include <math.h>


void main(void)
{
    double x = 10.5;
    printf("x = %.4lf\n", x);
    double f;
    f = pow(cos((3 / 8) * PI - (x / 4)), 2) - pow(cos((11 / 8) * PI - (x / 4)), 2);

    printf("f = %.4lf\n", f);

    printf("x = ");
    scanf_s("%lf", &x);


    f = pow(cos((3 / 8) * PI - (x / 4)), 2) - pow(cos((11 / 8) * PI - (x / 4)), 2);
    printf("f = %.4lf\n", f);
}