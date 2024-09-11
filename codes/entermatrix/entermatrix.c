#include <stdio.h>
int main()
{
    int m[3][3], row, column;
        for(row=0;row<3;row++)
        {  
            for (column=0;column<3;coluna++)
            {
                printf("Enter a value in position %d e %d: ",line,column);
                scanf("%d",&m[line][column]);
            }
        }
        printf("\Matrix entered:\n");
        for(row=0;row<3;row++)
        {
            for (column=0;column<3;column++)
            {
                printf("%d\t",m[row][colunm]);
            }
            printf("\n");
        }
    return 0;
}
