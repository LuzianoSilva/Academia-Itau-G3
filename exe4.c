#include <stdio.h>
#include <math>
int main()
{
    float a, b, c, delta;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
delta= pow(b,2)-4*a*c;
printf ("O VALOR DE DELTA E = %.2f\n", delta);
return 0;}