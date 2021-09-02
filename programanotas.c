#include <stdio.h>
int main()
{
    //declarar 6 variaveis do tipo float
float v1, v2, v3, v4, v5, media;
printf("Digite cinco valores em ponto flutuante\n");
scanf("%f %f %f %f %f", &v1, &v2, &v3, &v4, &v5);
    //Calcular a media
media=(v1+v2+v3+v4+v5)/5.0;
    //Imprimir a media
printf("A media final e: %.2f\n", media);
return 0;
}
