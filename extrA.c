#include<stdio.h>
int main()
{
    long long int m,n,r,x,z,y,a=1;
    scanf("%lld", &r);
    while(a<=r)
    {
        scanf("%lld%lld%lld", &m,&n,&x);
        if(m>n && m>x)
        {
            y=m*m;
            z=n*n+x*x;
        }
        else if(n>m && n>x)
        {
            y=n*n;
            z=m*m+x*x;
        }
        else if(x>m&&x>n)
        {
            y=x*x;
            z=m*m+n*n;
        }
        if(y==z)
            printf("Case %lld: yes\n",a);
        else
            printf("Case %lld: no\n", a);
        a++;
    }
    return 0;
}
