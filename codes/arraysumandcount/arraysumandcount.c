#include <stdio.h>
int main()
{
    int v[5];
    int sum=0;
    int i;
    int total=0;
      for(i=0;i<5;i++)
      {
        scanf("%d",&v[i]);
        sum+=v[i];
        total++;
      }
    printf("Total number of elements = %d\n",total);
    printf("Sum = %d\n",sum); 
return 0;
}
