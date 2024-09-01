#include <stdio.h>
#include <math.h>
int main()
{
    int a,root;
    printf("Enter any integer: ");
    scanf("%d",&a);
        if(a>=0)
        {
        root = sqrt(a);
        printf("The square root is: %.2lf\n", root);
        }
        else
        {
            printf("Invalid number!\n");
        }
    return(0);
}
