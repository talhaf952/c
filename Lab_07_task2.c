#include<stdio.h>
int main()
{
    int team1_runs,team1_wickets,team2_runs,team2_wickets;
    printf("Enter runs and wickets of team 1:\n");
    
    do{
    printf("Runs for Team 1:");
    scanf("%d",&team1_runs);
    printf("Wickets for Team 1:");
    scanf("%d",&team1_wickets);
    if(team1_runs<0 || team1_wickets<0 || team1_wickets>=10)
    {
        printf("Runs and wickets can not be negative. And wickets should be between 1 to 10.\n");
    }}
    while(team1_runs<0 || team1_wickets<0 || team1_wickets>=10);
    
    printf("\nEnter runs and wickets of team 2:\n");
     do{
    printf("Runs for Team 2:");
    scanf("%d",&team2_runs);
    printf("Wickets for Team 2:");
    scanf("%d",&team2_wickets);
    if(team2_runs<0 || team2_wickets<0 || team2_wickets>=10)
    {
        printf("Runs and wickets can not be negative. And wickets should be between 1 to 10.\n");
    }}
    while(team2_runs<0 || team2_wickets<0 || team2_wickets>=10);
    
    if(team2_runs>team1_runs)
    {
        printf("Team 2 won by %d Wickets.",10-team2_wickets);
    } 
    else if(team1_runs>team2_runs)
    {
        printf("Team 1 won by %d runs.",team1_runs-team2_runs);
    }
    else
    {
        printf("The match is draw.");
    }
    
    return 0;
}
