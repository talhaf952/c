#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    // Generate four random numbers in range 1-5
    /*int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    */
    time_t t1;
    srand((unsigned)time(&t1));
    for(int i=0;i<4;i++)
    {
        printf("%d\t",rand() %5 + 1);
    }
}


/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    time_t t1;
    srand((unsigned)time(&t1));
    
    int numbers[4];
    
    // Generate four random numbers in the range 1-5 and print them
    printf("Generated numbers: ");
    for(int i = 0; i < 4; i++) {
        numbers[i] = rand() % 5 + 1;
        printf("%d ", numbers[i]);
    }
    
    // Check if all numbers are different or if there are duplicates
    int unique_count = 0;
    for(int i = 0; i < 4; i++) {
        int is_unique = 1;
        for(int j = i + 1; j < 4; j++) {
            if(numbers[i] == numbers[j]) {
                is_unique = 0;
                break;
            }
        }
        if(is_unique) {
            unique_count++;
        }
    }
    
    // Print the appropriate message based on the analysis
    if(unique_count == 4) {
        printf("\nAll are different\n");
    } else if(unique_count == 2) {
        printf("\nTwo are same and two are different\n");
    } else {
        printf("\nMore than two numbers are same\n");
    }
    
    return 0;
}

*/


#3
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int num1=rand() %5 +1;
    int num2=rand() %5 +1;
    int num3=rand() %5 +1;
    int num4=rand() %5 +1;
    printf("%d \t %d \t %d \t %d \t", num1,num2,num3,num4);
    if(num1!=num2 && num1!=num3 && num1!=num4 && num2!=num3 && num2!=num4 && num3!=num4)
    {
        printf("\nAll are different.");
    }
    else if(
num1==num2 && num1==num3 && num1!=num4 ||
num1==num2 && num1==num4 && num1!=num3 ||
num1==num3 && num1==num4 && num1!=num2 ||
num2==num3 && num2==num4 && num2!=num1)
    {
        printf("\nThree are same and 1 is different.");
    }
    else if(num1==num2 && num3==num4 && num1==num4)
    {
        printf("\nAll are same.");
    }
    else if(
num1==num2 && num1!=num3 && num2!=num4 && num3!=num4||
num1==num3 && num1!=num4 && num3!=num2 && num2!=num4|| 
num1==num4 && num1!=num2 && num4!=num3 && num2!=num3||
num2==num3 && num2!=num4 && num3!=num1 && num1!=num4||
num2==num4 && num2!=num3 && num4!=num1 && num1!=num3||
num3==num4 && num3!=num2 && num4!=num1 && num1!=num2
)
    {
        printf("\nTwo are same and other two are different.");
    }
    else if(
num1==num2&&num3==num4&&num1!=num3||
num1==num3&&num2==num4&&num1!=num4||
num1==num4&&num3==num2&&num1!=num3)
    {
        printf("\nTwo are same and other two are same.");
    }
    else
    {
        printf("\nOther then from given outputs.");
    }
}

*/