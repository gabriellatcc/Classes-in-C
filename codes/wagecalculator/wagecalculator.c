#include <stdio.h>
int main()
{
    float minWage,salary,result;
    printf("Enter the value of the minimum wage: ");
    scanf("%f",&minWage);
    printf("Enter the person's salary: ");
    scanf("%f",&salary);
    result=salary/minWage;
    printf("The number of minimum wages the person earns: %.2f\n", result);
  
return 0;
}
