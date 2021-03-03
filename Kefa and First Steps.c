#include<stdio.h>
int main(){
    int n,i,x=1,r=1;
    scanf("%d", &n);
    int income[n];
    for(i=0;i<n;i++)
        scanf("%d", &income[i]);

    for(i=0;i<n-1;i++){
        if(income[i+1]>=income[i]){
            x++;
            if(x>r)
                r = x;
            }

        else
            x=1;
    }
    printf("%d\n", r);
    return 0;
}
