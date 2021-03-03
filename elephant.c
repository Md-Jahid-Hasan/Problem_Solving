#include<stdio.h>
int main(){
    int x,i,step=0;
    scanf("%d", &x);
    int move[] = {5,4,3,2,1};
    for(i=0;i<5;i++){
        step = step + (x/move[i]);
        x = x%move[i];
        if(x==0)
            break;
    }
    printf("%d\n", step);
}
