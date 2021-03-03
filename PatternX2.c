#include<stdio.h>
int main()
{
    int a,b,c,k,n;

    scanf("%d", &n);
    printf("\n\n");
    for(int i=n,j=0;i>=0;i--,j++){
        for(k=0;k<j;k++)
                printf(" ");
    printf("*");
    for(a=0;a<2*i+1;a++)
        printf(" ");
    printf("*\n");
    }

    for(b=0;b<=k;b++)
        printf(" ");
    printf("*\n");

    for(int i=0,j=k;i<=n;i++,j--)
    {
        for(c=0;c<j;c++)
            printf(" ");
        printf("*");
        for(a=0;a<2*i+1;a++)
            printf(" ");
        printf("*\n");
    }


}
