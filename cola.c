#include<stdio.h>
int main()
{
    int n,i;

    while(scanf("%d", &n)==1){

    int x =n,c=0;

    while(n>=3){
        n -= 3;
        n++;
        c++;
    }

    if(n == 2)
        c++;

    printf("%d\n", c+x);
    }
    return 0;
}
