#include <stdio.h>
int main()
{
    int array[10],i;
            for(i=0;i<10;i++)
            {
                printf("Enter a number: ");
                scanf("%d",&array[i]);
                if(array[i]<30)
                {
                    array[i]=1;
                }
            }
            for(i=0;i<10;i++)
            {
                printf("Element [%d] = %d\n",i, array[i]);
            }
return(0);
}
