#include<stdio.h>
int main()
{
    int n,k,i,j,p=0,z=0;

    scanf("%d", &n);
    scanf("%d",&k);
    char s[n];
    for(i=0;i<n;i++)
        scanf("%s",&s[i]);
   for(i=0;i<n;i++)
   {
        if(z==0)
        z='A';
        if(s[i]>=z&&s[i]<=k+65)
        p++;
        z++;
        if(z==k+65)
            z=0;
   }
        printf("%d",p);
    return 0;

}
