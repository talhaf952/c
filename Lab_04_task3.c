#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int operand1=rand() %9 +1;
    int operand2=rand() %9 +1;
    int choice=rand() %3 +1;
    int answer;
    printf("%d \t %d \n",operand1,operand2);
    if(choice==1)
    {
        printf("Enter Sum of two numbers: ");
        scanf("%d", &answer);
        if(answer==operand1+operand2)
        {
        printf("correct!");
        }
        else
        {
            printf("Incorrect");
        }
    }
    else if(choice==2)
    {
        printf("Enter Difference of two numbers: ");
        scanf("%d", &answer);
        if(answer==operand1-operand2)
        {
        printf("correct!");
        }
        else
        {
            printf("Incorrect");
        }
    }
    else
    {
        printf("Enter Product of two numbers: ");
        scanf("%d", &answer);
        if(answer==operand1*operand2)
        {
        printf("correct!");
        }
        else
        {
            printf("Incorrect");
        }
    }
    return 0;
}