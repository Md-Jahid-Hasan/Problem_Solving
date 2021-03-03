#include<stdio.h>
int main()
{
    int x,z,count = 0,i,j = 0;
    scanf("%d", &x);
    while(scanf("%d", &z)  == 1)
    {
        if(z > x)
            break;
    }
    for(i=x;i<z;i++)
    {
        count += i;
        j++;
        if(count >= z)
            break;
    }
    printf("%d", j);
    return 0;
}
