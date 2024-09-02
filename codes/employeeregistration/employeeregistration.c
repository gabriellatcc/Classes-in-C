#include <stdio.h>
int main()
{
    char fun[50][100];
    int i,limit;
        printf("How many functionaries do you want to register? ");
        scanf("%d",&limit);
        if (limit<1||limit>50)
        {
            printf("Enter a number between 1 and 50.\n");
            return 1;
        }
        for(i=0;i>limit;i++)
        {
        printf("Enter the name of the %d funcionary: ",i+1);
        scanf("%s",&fun[i]);
        printf("Name of the registered funcionary: %c ",fun[i]);
        }
return(0);
}
