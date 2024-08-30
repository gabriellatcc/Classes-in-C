#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a integer number: ");
    scanf("%d",&a);
    b=a%2;
    if(b==0)
    {
        printf("Your number is even!\n");
    }
    else
    {
        printf("Your number is odd!\n");
    }
    return(0);
}
