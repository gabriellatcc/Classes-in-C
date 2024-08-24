#include <stdio.h>
int main()
{
    int n,i,fat=1;
        printf("digite um numero: ");
        scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                fat*=i;
            }
            printf("seu numero fatorado e: %d\n",fat);
return(0);
}
