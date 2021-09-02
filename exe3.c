#include <stdio.h>
#define p 3.14159
#define custo 100
int main()
{//var
float a, r, c1;
scanf("%f\n", &a);
scanf("%f\n", &r);
//formula
c1 =(2 *p*r*r)+(2*p*r*a*100.00);
//resultado
//saidas
printf("O VALOR DO CUSTO E %.2f\n", c1);
return 0;}