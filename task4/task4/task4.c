#include <stdio.h>
#define PI 3.14
#include <math.h>



double x, result;
void F(void);

void main(void)
{

    printf("vvedite x \n");
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    F();
    printf("result = %.4lf\n", result);
}

void F(void)
{
    result = pow(cos((3 / 8) * PI - (x / 4)), 2) - pow(cos((11 / 8) * PI - (x / 4)), 2);
}