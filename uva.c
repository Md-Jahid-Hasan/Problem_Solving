#include<stdio.h>
int main()
{
    int a,b,c,i;
    while(scanf("%d %d %d", &a,&b,&c)==3)
    {
    if(a+b>c && b+c>a && c+a>b)
        printf("0\n");
    else
    {
        for(i=1;i>0;i++)
        {
            if(a+b+i>c && b+c+i>a && c+a+i>b)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    }
    return 0;
}
