#include <stdio.h>
int main()
{
    int array[5],i,sum=0;
        for(i=0;i<=4;i++)
        {
            printf("Enter any integer number: ");
            scanf("%d",&array[i]);
            sum+=array[i];
        }
        printf("Total %d",sum);
return(0);
}
