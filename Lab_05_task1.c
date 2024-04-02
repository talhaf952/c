#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    float avg;
    printf("Enter 4 numbers:\n");
    printf("Number 1: ");
    scanf("%d",&num1);
    printf("Number 2: ");
    scanf("%d",&num2);
    printf("Number 3: ");
    scanf("%d",&num3);
    printf("Number 4: ");
    scanf("%d",&num4);
    avg=(num1+num2+num3+num4)/4;
    printf("Average: %.2f \n",avg);
    if(num1>avg)
    {
        printf("First  number is larger  than average.\n");
    }
    else
    {
        printf("First  number is smaller than average.\n");
    }
    if(num2>avg)
    {
        printf("Second number is larger  than average.\n");
    }
    else
    {
        printf("Second number is smaller than average.\n");
    }
    if(num3>avg)
    {
        printf("Third  number is larger  than average.\n");
    }
    else
    {
        printf("Third  number is smaller than average.\n");
    }
    if(num4>avg)
    {
        printf("Fourth number is larger  than average.\n");
    }
    else
    {
        printf("Fourth number is smaller than average.\n");
    }
    return 0;
}