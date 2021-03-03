#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d", &a);
    if(a%2!=0 || a<=2)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
