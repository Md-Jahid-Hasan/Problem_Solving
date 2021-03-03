#include<stdio.h>
int main()
{
    char a;
    int i,j,n=12;
    double m[12][12],ans=0;
    scanf("%c", &a);

    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf", &m[i][j]);
    n--;
    i=1;
    while(n>i){
        for(j=i;j<n;j++)
        ans += m[n][j];
        n--;
        i++;
    }

    if(a == 'S')
        printf("%.1lf\n", ans);
    else
        printf("%.1lf\n", ans/30);
        return 0;
}
