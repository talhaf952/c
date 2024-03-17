/*Task 1: Write a program, to convert Centigrade into Fahrenheit. Declare two integer variables to store Centigrade and Fahrenheit. Hardcode Centigrade value and get Fahrenheit value using the formula. F =
C ∗ 9/5 + 32. Finally, print both Centigrade & Fahrenheit value:
Sample Run:
Centigrade: 50
Fahrenheit: 122
Test your formula for different values of Centigrade*/


#include<stdio.h>
int main()
{
    int centigtrade=50;
    int fahrenheit;
    fahrenheit=centigtrade*9/5+32;
    printf("\nCentigrade: %d",centigtrade);
    printf("\nFahrenheit: %d",fahrenheit);
}
