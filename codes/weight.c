#include <stdio.h>
int main()
{
  float a,l,c,vpc;
      printf("digite o valor da altura em cm: ");
      scanf("%f",&a);
      printf("digite o valor da largura em cm: ");
      scanf("%f",&l);
      printf("digite o valor do comprimento em cm: ");
      scanf("%f",&c);
      vpc=(a*l*c)/6000;
      printf("valor do peso cubico: %.2f",vpc);
return(0);
}
