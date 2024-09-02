#include <stdio.h>
int main()
{
    int n,i,neg=0;
        for(i=1;i<=5;i++)
        {
            printf("Enter a number: ");
            scanf("%d",&n);
                if(n<0)
                {
                        neg+=1;
                }
        }
        printf("Negative numbers: %d", neg);
    return(0);
}
