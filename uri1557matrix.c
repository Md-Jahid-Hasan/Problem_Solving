#include<stdio.h>

int numberOfDigit(int x)
{
    int a=x,b=0;
    while(a)
    {
        a/=10;
        b++;
    }
    return b;
}

int main()
{
    int i,j,k,n;
    while(scanf("%d", &n))
    {
        int m[n][n],a,x=1;
        for(i=0;i<=n;i++){
                a = x;
            for(j=0;j<n;j++){
                m[i][j] = a;
                a *= 2;
            }
            x *= 2;
        }

        k = numberOfDigit(m[n-1][n-1]);

        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
            printf(" %d ", m[i][j]);
        printf("\n");
        }

    printf("%d\n", k);
    }


}
