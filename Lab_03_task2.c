/*
Task 2: Write a program to input the amount (deposited in the bank). Calculate and print the amount after each year for three years, where compound interest rate is 10%:
*/

#include<stdio.h>
int main(){

float amount_deposited;
float interest_rate =0.10;
int years= 3;

printf("Enter deposited amount:");
scanf("%f", &amount_deposited);

for(int i=1; i<=years; ++i){
(amount_deposited += amount_deposited*0.10);
printf("amount after year %d: %.2f\n",i,amount_deposited);
}
return 0;
}

//using Loop
/*
/*
Task 2: Write a program to input the amount (deposited in the bank). Calculate and print the amount 
after each year for three years, where compound interest rate is 10%:
*/

#include<stdio.h>
int main()
{
    int deposit;
    int years;
    int interest;
    printf("Enter Deposited Amount: ");
    scanf("%d",&deposit);
    printf("Enter Number of Years: ");
    scanf("%d",&years);
    for(int i=1;i<=years;i++)
    {
        interest=deposit*0.1;
        deposit=interest+deposit; 
        printf("\nAmount after %d years = %d",i,deposit);
    }
    return 0;
}
*/
