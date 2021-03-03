#include<stdio.h>
int main()
{
    int i,j,r1,r2,a,b;
    scanf("%d",&a);
    while(a){
        scanf("%d%d", &r1,&r2);
        b = r1+r2;
        printf("%d\n", b);
        a--;
    }
    return 0;
}
