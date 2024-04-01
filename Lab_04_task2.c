#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int num1=rand() %5 +1;
    int num2=rand() %5 +1;
    int num3=rand() %5 +1;
    int num4=rand() %5 +1;
    printf("%d \t %d \t %d \t %d \t", num1,num2,num3,num4);
    if(num1!=num2 && num1!=num3 && num1!=num4 && num2!=num3 && num2!=num4 && num3!=num4)
    {
        printf("\nAll are different.");
    }
    else if(
num1==num2 && num1==num3 && num1!=num4 ||
num1==num2 && num1==num4 && num1!=num3 ||
num1==num3 && num1==num4 && num1!=num2 ||
num2==num3 && num2==num4 && num2!=num1)
    {
        printf("\nThree are same and 1 is different.");
    }
    else if(num1==num2 && num3==num4 && num1==num4)
    {
        printf("\nAll are same.");
    }
    else if(
num1==num2 && num1!=num3 && num2!=num4 && num3!=num4||
num1==num3 && num1!=num4 && num3!=num2 && num2!=num4|| 
num1==num4 && num1!=num2 && num4!=num3 && num2!=num3||
num2==num3 && num2!=num4 && num3!=num1 && num1!=num4||
num2==num4 && num2!=num3 && num4!=num1 && num1!=num3||
num3==num4 && num3!=num2 && num4!=num1 && num1!=num2
)
    {
        printf("\nTwo are same and other two are different.");
    }
    else if(
num1==num2&&num3==num4&&num1!=num3||
num1==num3&&num2==num4&&num1!=num4||
num1==num4&&num3==num2&&num1!=num3)
    {
        printf("\nTwo are same and other two are same.");
    }
    else
    {
        printf("\nOther then from given outputs.");
    }
}

