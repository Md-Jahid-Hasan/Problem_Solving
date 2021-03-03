#include<stdio.h>
int main()
{
    int n,sum=0,ch;
    float ave;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    sum+=ar[i];
    ave=(float)sum/n;

    for(int i=0;i<n;i++)
    {
        if(ar[i]<ave)
            ch=ar[i];
    }
    printf("%d",ch);
}
