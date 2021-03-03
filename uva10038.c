#include<stdio.h>
int main(){
    int n,d,t[3000],i,ar[3000],j;
    while(scanf("%d", &n)==1){

        int flag = 0;
        for(i=1;i<=n;i++)
            scanf("%d", &ar[i]);

        for(i=1;i<n;i++){
            d = abs(ar[i] - ar[i+1]);

            if(d>0 && d<n){
                t[i] = d;
                for(j=1;j<i;j++){
                    if(t[i] == t[j]){
                        printf("Not jolly\n");
                        flag = 1;
                    }
                }
            }
            else{
                printf("Not jolly\n");
                flag = 1;}

            if(flag == 1 )
                break;
        }

        if(flag == 0)
            printf("Jolly\n");
    }
    return 0;
}
