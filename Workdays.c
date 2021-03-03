#include<stdio.h>
int main()
{
    int m,n,result;
    scanf("%d %d", &m,&n);
    result = m*(++n);
    printf("%d\n",result);
    return 0;
}
