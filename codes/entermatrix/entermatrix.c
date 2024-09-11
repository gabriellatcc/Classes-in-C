#include <stdio.h>
int main()
{
    int m[3][3], row, column;
        for(row=0;row<3;row++)
        {  
            for (column=0;column<3;column++)
            {
                printf("Enter a value in position %d and %d: ",row,column);
                scanf("%d",&m[row][column]);
            }
        }
        printf("Matrix entered:\n");
        for(row=0;row<3;row++)
        {
            for (column=0;column<3;column++)
            {
                printf("%d\t",m[row][column]);
            }
            printf("\n");
        }
    return 0;
}
