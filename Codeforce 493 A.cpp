#include <bits/stdc++.h>
using namespace std;

int main(){
    char home_team[25], away_team[25];
    int num_of_fouls, i,j, l=0;
    cin >> home_team >> away_team;
    cin >> num_of_fouls;
    char team[num_of_fouls][1], card[num_of_fouls][1];
    int time[num_of_fouls], jersy_number[num_of_fouls], fouls[num_of_fouls];

    for(i=0;i<num_of_fouls;i++){
        cin >> time[i] >> team[i] >> jersy_number[i]>> card[i];
    }

    for (i=num_of_fouls-1;i>=0;i--){
        if(card[i][0]=='r'){
            fouls[l++] = i;
            continue;
        }
        for(j=i-1;j>=0;j--){
            if(team[i][0] == team[j][0] && jersy_number[i] == jersy_number[j]
            && card[i][0] == card[j][0]){
                fouls[l++] = i;
                break;
            }
        }
    }

    int flag = 0;
   for(i=l-1;i>=0;i--){
    int x = fouls[i];
    //cout << home_team << " " << jersy_number[fouls[i]] << " "<< time[fouls[i]]<<"e" <<endl;
    if(i < l-1){
        for(j=i+1;j<l;j++){
            int y = fouls[j];
            if(team[x][0] == team[y][0] && jersy_number[x] == jersy_number[y] ){
                //cout<<team[y][0]<<jersy_number[y]<<endl;
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        if(team[x][0] == 'h'){
            cout << home_team << " " << jersy_number[fouls[i]] << " "<< time[fouls[i]]<<endl;
        }
        else{
            cout << away_team << " " << jersy_number[fouls[i]] << " "<< time[fouls[i]]<<endl;
        }
    }

    flag = 0;

   }
   return 0;

}
