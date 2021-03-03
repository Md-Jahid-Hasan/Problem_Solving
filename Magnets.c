#include<stdio.h>
int main(){
    int n,i,group=1;
    scanf("%d", &n);
    int poles[n];
    for(i=0;i<n;i++)
        scanf("%d", &poles[i]);

    for(i=0;i<n-1;i++)
        if(poles[i] != poles[i+1])
            group++;

    printf("%d\n", group);
    return 0;
}
