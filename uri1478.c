#include<stdio.h>
int main()
{
    int i,j,n,k,a;
    while(scanf("%d",&n) && n){
            a=n;
        for(i=1;i<=n;i++){
            for(j=i;j>1;j--){
            if(j==i)
                printf("%3d", j);
            else
                printf(" %3d", j);
            }

            for(k=1;k<=a;k++){
            if(i==1 && k==1)
                printf("%3d", j);
            else
                printf(" %3d", k);
            }
            printf("\n");
            a--;
        }
        printf("\n");
    }
    return 0;
}
