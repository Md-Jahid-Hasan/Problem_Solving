#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    char M[n][n];
    int count = 0;

   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%s", &M[i][j]);


    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(M[i][j] == 'X')
                if(M[i-1][j-1] == 'X' && M[i-1][j+1] == 'X' && M[i+1][j-1] == 'X' && M[i+1][j+1]=='X')
                    count++;

    printf("%d\n", count);
    return 0;
}
