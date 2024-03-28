/*
Task 3: Write a program to calculate height of a plant after each year for next five year, where the 
magical plant doubles its height after each year. The initial height of the plant is the input of the 
program:
*/

#include<stdio.h>
int main()
{
    int height;
    int years;
    printf("Enter height of a plant: ");
    scanf("%d",&height);
    printf("Enter Number of a years: ");
    scanf("%d",&years);
    for(int i=1;i<=years;i++)
    {
        height=height*2;
        printf("\nHeight after %d years = %d",i,height);
    }
}