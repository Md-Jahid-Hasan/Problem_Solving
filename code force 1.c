#include<stdio.h>
int main()
{
    int n,q1,q2,k1,k2,x1,x2,i,j;
    while(scanf("%d%d%d%d%d%d%d", &n,&q1,&q2,&k1,&k2,&x1,&x2)==7)
    {
        if(q1 == x1 || q2 == x2)
        {
            printf("NO\n");
            continue;
        }

        for(i=q1,j=q2;i<=n,j<=1;i++,j--)
        {
            if(x1 == i && x2 == j){
                prinf("NO\n");
                break;}
        }
        for(i=q1,j=q2;i<=1,j<=1;i--,j--)
        {
            if(x1==i && x2 == j)
            {
                printf("NO\n");
                break;
            }
        }
        for(i=q1,j=q2;i<=1,j<=n;i--,j++)
        {
            if(x1 == i && x2 == j)
            {
                printf("NO\n");
                break;
            }
        }
        for(i=q1,j=q2;i<=n,j<=n;i++,j++)
        {
            if(x1 == i && x1 == j)
            {
                printf("NO\n");
                break;
            }
        }
        printf("YES\n");
    }
    return 0;
}
