#include<stdio.h>
int main()
{
    int t,a,b,s,c=1,i;
    scanf("%d", &t);
    while(c<=t)
    {
        s=0;
        scanf("%d %d", &a,&b);
        for(i=a;i<=b;i++)
        {
            if(i%2 != 0)
                s+=i;
        }
        printf("Case %d: %d\n", c,s);
        c++;
    }
    return 0;

}
