/*Task 4: Write a program, declare meaningful variables to store price of wheat, rice, and biscuit. Declare 
another variable to store total. Hardcode prices of wheat, rice and biscuit. Calculate to total and generate 
output in following format:
Sample Run:
Wheat 150
Rice 285
Biscuit 320
---------------
Total 755
*/

#include<stdio.h>
int main()
{
    int wheat, rice, biscuit, total;
    wheat=150;
    rice=285;
    biscuit=320;
    total=wheat+rice+biscuit;
    printf("Wheat\t   %d",wheat);
    printf("\nRice\t   %d",wheat);
    printf("\nBiscuit\t   %d",wheat);
    printf("\n-----------------");
    printf("\nTotal\t   %d",total);
    return 0;
}
