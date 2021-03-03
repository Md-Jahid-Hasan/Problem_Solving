#include<stdio.h>
int main()
{
    int t,l,v,a,r,x,i;
    scanf("%d", &t);
    while(t>0)
    {
        scanf("%d%d%d%d", &l,&v,&a,&r);
        int y=0;

        for(i=1;i>=0;i++)
        {
            x=i*v;
            if(x>l)
            {
                printf("%d\n", y);
                break;}
                if(x<a)
                    y++;
                if(x>r)
                    y++;
        }
        t--;
    }
return 0;
}
