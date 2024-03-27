/*
Task 2: Write a program to input the amount (deposited in the bank). Calculate and print the amount 
after each year for three years, where compound interest rate is 10%:
*/

#include<stdio.h>
int main()
{
    int amount;
    printf("Enter Deposited Amount: ");
    scanf("%d",&amount);
    int interest=amount + (amount * 0.1);
    printf("Amount after 1 year= %d", interest);
    amount=interest;
    interest=amount + (amount * 0.1);
    printf("\nAmount after 2 year= %d", interest);
    amount=interest;
    interest=amount + (amount * 0.1);
    printf("\nAmount after 3 year= %d", interest);
    return 0;
}