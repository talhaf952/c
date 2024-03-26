/*
Task 1: Write a program to calculate and print gross salary and net salary. The input is basic salary. The details are 
as under: 
Medical allowance = 10% of basic salary basic salary * 0.1 
Conveyance allowance = 15% of basic salary basic salary * 0.15 
House rent = 45% of basic salary 
Gross Salary = Basic Salary + Medical Allowance + Conveyance allowance + House rent
Tax = 10 % of gross salary 
Net Salary = Gross Salary - Tax
*/
#include<stdio.h>
int main()
{
    int basic_salary, medical_allowance, conveyance_allowance, house_rent, gross_salary , tax, net_salary;
    basic_salary=30000;
    medical_allowance=basic_salary*0.1;
    conveyance_allowance=basic_salary*0.15;
    house_rent=basic_salary*0.45;
    gross_salary=basic_salary + medical_allowance + conveyance_allowance + house_rent;
    tax=gross_salary * 0.1;
    net_salary= gross_salary - tax;
    printf("Basic Salary = %d",basic_salary);
    printf("\nGross Salary = %d",gross_salary);
    printf("\nNet Salary = %d",net_salary);
    return 0;
}
