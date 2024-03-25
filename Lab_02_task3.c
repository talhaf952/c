/*Task 2: Write a program, to calculate perimeter of an irregular connected shape having five sides. Hardcode the value of all sides in variables. Obtain perimeter by adding sides. Finally, print all the sides and perimeter*/
#include <stdio.h>

int main() {
    int x1, x2, answer;
    x1 = 20;
    x2 = 10;
    int expr1 = x1 * x1 + x2 * x2 + 2 * x1 * x2;
    int expr2 = x1 * x1 + 1 / (x2 * x2) - 2;
    int expr3 = (x1 + x2) * (x1 - x2);
    printf("Expression 1: %d\n", expr1);
    printf("Expression 2: %d\n", expr2);
    printf("Expression 3: %d\n", expr3);
    return 0;
}
