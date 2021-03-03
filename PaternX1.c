#include<stdio.h>
int main()
{
    int a[10][10],i,j;
//    for(i=0;i<10;i++)
//        for(j=0;j<10;j++)
//            scanf("%d", &a[i][j]);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++){
            if(i == j)
            printf("*");
            if(i+j == 11)
                printf("*");
            printf(" ");
            }
            printf("\n");
    }
    return 0;
}
