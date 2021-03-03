#include<stdio.h>
int main()
{
    int t,x,y,z,n=1;
    scanf("%d", &t);
    while(n<=t)
    {
        scanf("%d %d %d", &x,&y,&z);
        if(x>20 || y>20 || z>20)
            printf("Case %d: bad\n", n);
        else
            printf("Case %d: good\n", n);
        n++;
    }
    return 0;
}
