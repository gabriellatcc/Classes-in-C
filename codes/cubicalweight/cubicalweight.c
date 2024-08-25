#include <stdio.h>
int main()
{
  float h,w,l,cwv;
      printf("Enter the height value in cm: ");
      scanf("%f",&h);
      printf("Enter the width value in cm: ");
      scanf("%f",&w);
      printf("Lnter the length value in cm: ");
      scanf("%f",&l);
      cwv=(h*w*l)/6000;
      printf("Cubical weight value: %.2f",cwv);
return(0);
}
