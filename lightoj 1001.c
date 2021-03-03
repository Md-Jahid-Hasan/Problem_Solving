#include<stdio.h>
int main(){
    int t,n;
    scanf("%d", &t);
    while(t>0){
        scanf("%d", &n);

        if(n == 0)
            printf("0 0\n");
        else if(n>10)
            printf("%d %d\n", n-10, 10);
        else
            printf("0 %d\n", n);
        t--;
    }
    return 0;
}
