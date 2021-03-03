#include<stdio.h>
int main()
{
    char s[10][100];
    int a,b[10],i,highest,j,k;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        highest=0;
        for(j=0;j<10;j++)
        {
            scanf("%s", &s[j]);
            scanf("%d", &b[j]);
            if(b[j]>highest)
                highest=b[j];
        }
        printf("Case #%d:\n",i);
        for(k=0;k<10;k++)
        {
            if(b[k]==highest)
                printf("%s\n", s[k]);
        }
    }
    return 0;
}
