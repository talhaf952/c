#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int choice,num1,num2,answer,user_answer;
    int score=0;
    
    for(int i=1;i<=10;i++)
    {
        choice=rand()%3+1;
        if(choice==1)
        {
            printf("Q:%d Addition(+)\n",i);
            num1=rand()%100;
            num2=rand()%100;
            printf("1st number: %d\n",num1);
            printf("2nd number: %d\n",num2);
            answer=num1+num2;
            printf("Your answer: ");
            scanf("%d",&user_answer);
            
        }
        else if(choice==2)
        {
            printf("Q:%d SUbtraction(-)\n",i);
            num1=rand()%90+10;
            num2=rand()%num1;
            printf("1st number: %d\n",num1);
            printf("2nd number: %d\n",num2);
            answer=num1-num2;
            printf("Your answer: ");
            scanf("%d",&user_answer);
        }
        else
        {
         printf("Q:%d Multiplication(*)\n",i);
            num1=rand()%10;
            num2=rand()%10;
            printf("1st number: %d\n",num1);
            printf("2nd number: %d\n",num2);
            answer=num1*num2;
            printf("Your answer: ");
            scanf("%d",&user_answer);
        }
        if(user_answer==answer)
        {
            printf("Correct.\n\n");
            score++;
        }
        else
        {
            printf("Incorrect.\n\n");
        }
    }
    printf("Score: %d out of 10",score);
    return 0;
}