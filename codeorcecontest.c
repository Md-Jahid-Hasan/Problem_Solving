#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d", &n);
    char c[n];
    //for(i=0;i<n;i++)
    scanf("%s", &c);
    for(i=0;i<n;i++)
    {
        if(c[i] == 'S')
        {
            for(j=n-1;j>=0;j--)
            {
                if(c[j] == 'G')
                {
                   c[i] = 'G';
                   c[j] = 'S';
                   break;
                }

            }
            break;
        }
    }
    for(i=0;i<n;i++)
    {

        if(c[i] == 'S')
            break;
        count++;
    }
    printf("%d", count);
    return 0;
}
