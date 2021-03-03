#include<stdio.h>
int main()
{
    int m,n,r,x,y;
    while(scanf("%d %d", &x,&y)==2)
    {
        int a=0;
        m=x;
        while(m>=y)
        {
            n=m/y;
            r=m%y;
            a += n;
            m = n+r;
        }
       printf("%d\n",x+a);
    }
    return 0;
}
