#include<stdio.h>
int main()
{
    int c,a,b;
    scanf("%d", &c);
    while(c>0)
    {
        scanf("%d %d", &a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
        c--;
    }
    return 0;
}
