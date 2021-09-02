#include <stdio.h>
int main()
{
       //var
       double sm, ckw,valorcustkw, valoresid, valordesc, valorkw;
     scanf("%lf", &sm);
     scanf("%lf", &ckw);
     //calculos
     valorcustkw = (sm*0.7)/100.00;
     valoresid = ckw *valorcustkw;
     valordesc = valoresid*0.9;
     //saidas
      printf("Custo por kW: R$ %.2f\n", valorcustkw);
      printf("ckw: R$ %.2f\n", valoresid);
      printf("Custo com desconto: R$ %.2f\n", valordesc);
      return 0;
}