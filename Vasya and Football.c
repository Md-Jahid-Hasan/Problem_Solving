#include<stdio.h>
#include<string.h>
int main(){
    char team[2][22];
    scanf("%s%s", &team[0], &team[1]);
    int n;
    scanf("%d", &n);
    int time[n],player[n],i,j;
    int red[100][2] = {0};
    char std[n][2],card[n][2];
    for(i=0;i<n;i++){
        scanf("%d%s%d%s", &time[i], &std[i], &player[i], &card[i]);
    }

    for(i=0;i<n;i++){
        if(strcmp(card[i], "r") == 0){
            if(strcmp(std[i],"h") == 0)
                red[player[i]][0] += 2;
            else
                red[player[i]][1] += 2;
        }
        /*else{
            for(j=i+1;j<n;j++){
                if(strcmp(std[i], std[j]) == 0){
                    if(player[i] == player[j])
                        if(strcmp(card[i], card[j]) == 0)
                            red[j] += 1;
                }
            }
        }*/
        else
            if(strcmp(std[i],"h") == 0)
                red[player[i]][0] += 1;
            else
                red[player[i]][1] += 1;

    }
    for(i=0;i<n;i++){
        if(red[player[i]][0] >= 2){
            //if(strcmp(std[i],"h") == 0)
                printf("%s %d %d\n", team[0], player[i], time[i]);}
            else if(red[player[i]][1]>=2)
                printf("%s %d %d\n", team[1], player[i], time[i]);

    }

    return 0;
}
