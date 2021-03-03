#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d", &a);
    while(1 == scanf("%d", &b))
    {
        if(b>0)
            break;
    }
    for(i=a;i<a+b;i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
