#include<stdio.h>
int main(){
    int t,n,i;
    double mean,newMean;
    scanf("%d", &t);
    while(t>0){
        scanf("%d", &n);
        int a[n],total=0,flag =0,equal =0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
            total = total+a[i];
        }
        mean = (double)total/n;
        for(i=1;i<n;i++)
            if(a[i] == a[i-1])
                equal++;

        if(equal == n-1){
            printf("1\n");
            t--;
            continue;
        }


        for(i=0;i<n;i++){
            newMean = (total - a[i])/(double)(n-1);

            if(newMean == mean){
                printf("%d\n", i+1);
                flag  = 1;
                break;
            }
        }
        if(flag == 0)
            printf("Impossible\n");
        t--;
    }
    return 0;
}
