#include<stdio.h>
int main(){
    int n,k,t;
    scanf("%d %d", &n, &k);
    while(k>0){
        t=n;
        while(t/10 != 0){
            t = t%10;
        }
        if(t==0)
            n = n/10;
        else
            n--;
        k--;
    }
    printf("%d", n);
}
