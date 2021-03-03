#include<stdio.h>
int main(){
    int n,i,sum=0,total,j=1;
    scanf("%d", &n);
    int seat[n], team[n];
    for(i=0;i<n;i++){
        scanf("%d", &seat[i]);
        sum = sum + seat[i];
        }
    total = seat[0];
    team[0] = 1;
        for(i=1;i<n;i++){
            if(seat[i]<= seat[0]/2){
                team[j++] = i+1;
                total = total + seat[i];
            }
        }

    if(total>sum/2){
        printf("%d\n", j);
        for(i=0;i<j;i++)
            printf("%d ", team[i]);
    }
    else
        printf("0");
}
