#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int totalStudents=30,midsTotal=35,finalsTotal=40,sessionalsTotal=25,totalMarks=100,fail=0,sum=0;
    int average;
    int mids,finals,sessionals,total;
    char grade;
    printf("Roll No\t Mids\tFinals\tSessionals\tTotal\tGrade\n");
    for(int i=1;i<=totalStudents;i++)
    {
        mids=rand()%35+1;
        finals=rand()%40+1;
        sessionals=rand()%25+1;
        total=mids+finals+sessionals;
        if(total>=85)
        {
            grade='A';
        }
        else if(total>=75)
        {
            grade='B';
        }
        else if(total>=65)
        {
            grade='C';
        }
        else if(total>=55)
        {
            grade='D';
        }
        else if(total>=50)
        {
            grade='E';
        }
        else 
        {
            grade='F';
            fail++;
        }
        sum+=total;
        printf("%d\t\t\t%d\t\t%d\t\t%d\t\t%d\t\t%c\n",i,mids,finals,sessionals,total,grade);
    }
    printf("Total Students: %d\n",totalStudents);
    printf("Pass: %d\n",totalStudents-fail);
    printf("Fail: %d\n",fail);
    printf("Overall Average Marks: %d\n",sum/totalStudents);
    return 0;
}