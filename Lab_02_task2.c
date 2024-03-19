/*Task 2: Write a program, to calculate perimeter of an irregular connected shape having five sides. Hardcode the value of all sides in variables. Obtain perimeter by adding sides. Finally, print all the sides and perimeter*/

#include <stdio.h>
int main() {
    int side_1=10;
    int side_2=15;
    int side_3=20;
    int side_4=25;
    int side_5=30;
    int perimeter=side_1+side_2+side_3+side_4+side_5;
    printf("side_1=%d",side_1);
    printf("\nside_2=%d",side_2);
    printf("\nside_3=%d",side_3);
    printf("\nside_4=%d",side_4);
    printf("\nside_5=%d",side_5);
    printf("\nPerimeter = %d",perimeter);
    return 0;
}
