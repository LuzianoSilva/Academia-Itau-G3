#include <stdio.h>
int main()
{
    //var
    float tempf, tempc, quantp, quantmm;
    //entradas
    scanf("%f", &tempf);
    scanf("%f", &quantp);
    //calculos
    tempc= 5*(tempf-32)/9;
    quantmm= quantp*25.4;
    //saidas
    printf(" o valor em celssius = %.2lf\n", tempc);
    printf("a quantidade de chuva = %.2lf\n", quantmm);
return 0;}