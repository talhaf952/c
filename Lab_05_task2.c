#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int num1=rand() %5 +1;
    int num2=rand() %5 +1;
    int num3=rand() %5 +1;
    printf("%d \t %d \t %d\n",num1,num2,num3);
    if(num1==num2&&num1==num3)
    {
        printf("All are equal.");
    }
    else if(num1!=num2&&num1!=num3&&num2!=num3)
    {
        printf("All are different.\n");
        if(num1>num2&&num1>num3)
        {
            printf("First is largest.\n");
        }
        else if(num2>num1&&num2>num3)
        {
            printf("Second is largest.\n");
        }
        else
        {
            printf("Third is largest.\n");
        }
        
        if(num1<num2&&num1<num3)
        {
            printf("First is smallest.\nSecond and third are greater than first.\n");
        }
        else if(num2<num1&&num2<num3)
        {
            printf("Second is smallest.\nFirst and third are greater than second.\n");
        }
        else
        {
            printf("Third is smallest.\nFirst  and second are greater than third.\n");
        }
        if(num1>num2 && num1>num3 && num3>num2)
        {
            printf("Third is in middle of first and second.\n");
        }
        else if(num1>num2 && num1>num3 && num2>num3)
	    {
            printf("Second is in middle of first and third.\n");
        }
        else if(num2>num1 && num2>num3 && num3>num1)
        {
            printf("Third is in middle of first and second.\n");
        }
        else if(num2>num1 && num2>num3 && num1>num3)
	    {
            printf("First is in middle of second and third.\n");
        }
        else if(num3>num1 && num3>num2 && num1>num2)
        {
            printf("First is in middle of second and third.\n");
        }
        else
        {
            printf("Second is in middle of first and third.\n");
        }
    }
    else
    {
        if(num1==num2&&num1>num3)
        {
            printf("First and second are largest.\nThird is smallest.\n");
        }
        else if(num1==num2&&num1<num3)
        {
            printf("First and second are smallest.\nThird is largest.\n");
        }
        else if(num1==num3&&num1>num2)
        {
            printf("First and third are largest.\nSecond is smallest.\n");
        }
        else if(num1==num3&&num1<num2)
        {
            printf("First and third are smallest.\nSecond is largest.\n");
        }
        else if(num2==num3&&num2>num1)
        {
            printf("Second and third are largest.\nFirst is smallest.\n");
        }
        else
        {
            printf("Second and third are smallest.\nFirst is largest.\n");
        }
    }
    return 0;
}