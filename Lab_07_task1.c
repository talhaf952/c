#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float discriminant, root1, root2;
    do {
        printf("Enter Non Zero value of \"a\": ");
        scanf("%d", &a);
    } while (a == 0);
    
    printf("Enter value of \"b\": ");
    scanf("%d", &b);
    
    printf("Enter value of \"c\": ");
    scanf("%d", &c);
    discriminant = (b * b) - (4 * a * c);
    if (discriminant < 0) {
        printf("Sorry, the roots are imaginary.\n");
    } else {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        printf("Root 1: %.2f\n", root1);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 2: %.2f", root2);
    }
    
    return 0;
}
