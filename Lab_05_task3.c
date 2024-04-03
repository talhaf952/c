#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter number from 1 to 6.\n");
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    printf("Enter number 3: ");
    scanf("%d",&num3);
    if(num1>=1 && num1<=6 && num2>=1 && num2<=6 && num3>=1 && num3<=6 )
    {
        if(num1==num2 && num2==num3)
        {
            printf("%d appeared three times.\n",num1);
        }
        else if(num1==num2&&num1!=num3)
        {
            printf("%d appeared two times.\n",num1);
            printf("%d appeared one times.\n",num3);
        }
        else if(num2==num3&&num2!=num1)
        {
            printf("%d appeared two times.\n",num2);
            printf("%d appeared one times.\n",num1);
        }
        else if(num1==num3&&num1!=num2)
        {
            printf("%d appeared two times.\n",num1);
            printf("%d appeared one times.\n",num2);
        }
        else
        {
            printf("%d appeared 1 times.\n",num1);
            printf("%d appeared 1 times.\n",num2);
            printf("%d appeared 1 times.\n",num3);
        }
    }
    else
    {
        printf("Wrong input.");
    }
    
    return 0;
}