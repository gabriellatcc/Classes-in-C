#include <stdio.h>
int main()
{
    char gender,m,f;
    float w,h,iwm,iwf;
        printf("Enter a gender between male and female(m/f): ");
        scanf("%c",&gender);
        printf("Enter the weight: ");
        scanf("%f",&w);
        printf("Enter the heigh: ");
        scanf("%f",&h);
            if(gender==m)
            {
                iwm=(w*h)-58;
                printf("Your ideal weight would be: %f",iwm);
            }
            else if(gender==f)
            {
                iwf=(w*h)-44.7;
                printf("Your ideal weight would be: %f",iwf);
            }
            else
            {
                printf("This code is binary.");
            }

return(0);
}
