#include <stdio.h>
int main()
{
    int arrayX[5],arrayY[5],arrayZ[5],k,j,limit=0;
        for(j=0;j<5;j++)
        {
            scanf("%d",&arrayX[j]);
            scanf("%d",&arrayY[j]);
        }
        for(j=0;j<=4;j++)
        {
            for(k=0;k<=4;k++)
            {
                if(arrayX[j]==arrayY[k])
                {
                    arrayZ[limit]=arrayX[j];
                    limit++;
                    break;
                }
            }
        }
        for(j=0;j<=limit-1;j++)
        {
            printf("Element [%d]= %d\n",j,arrayZ[j]);
        }
return(0);
}
