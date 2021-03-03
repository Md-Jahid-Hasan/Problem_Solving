#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int i,j,k,t[4];
    while(1){
        j=0;
        x = x+1;
        i = x;
        while(i>0){
           t[j] = i%10;
           i = i/10;
           j++;
        }
        if(t[0]!=t[1]&&t[0]!=t[2]&&t[0]!=t[3]&&t[1]!=t[2]&&t[1]!=t[3]&&t[2]!=t[3])
            break;
    }
    printf("%d\n", x);
}
