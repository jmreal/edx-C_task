#include <stdio.h>
int main()
{
 int playersw1;
 int playersw2;
 int playersw3;
 int playersw4;
 int playersw5;
 int playersw6;
 int playersw7;
 int playersw8;
 int team1;
 int team2;
 int memberPerteam;
 scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", &memberPerteam,
 &playersw1, &playersw2, &playersw3, &playersw4, &playersw5, &playersw6, &playersw7, &playersw8);
 team1 = playersw1 + playersw2 + playersw3 + playersw4;
 team2 = playersw5 + playersw6 + playersw1 + playersw7;
 if(team1 > team2){
     printf("Team %d has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d\n", 1, team1, team2);
     
 }
 if(team2 > team1){
     printf("Team %d has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d\n", 2, team1, team2);
 }
    return 0;
}
