// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int males,females;
    printf("Enter Number of Males: ");
    scanf("%d",&males);
    printf("Enter Number of Females: ");
    scanf("%d",&females);
    float total,male_percentage,female_percentage;
    total=males+females;
    male_percentage=((float)males/total)*100;
    female_percentage=((float)females/total)*100;
    if(male_percentage>female_percentage)
    {
        printf("=============================\n");
        printf("| Percatage of males:   %d %% |\n",(int)male_percentage);
        printf("| Percatage of females: %d %% |\n",(int)female_percentage);
        printf("=============================\n");
    }
    else if(female_percentage>male_percentage)
    {
        printf("**********************************\n");
        printf("*** Percatage of females: %d %% ***\n",(int)female_percentage);
        printf("*** Percatage of males:   %d %% ***\n",(int)male_percentage);
        printf("**********************************\n");
    }
    else
    {
        printf("both are same.");
    }
    return 0;
}