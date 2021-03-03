#include<stdio.h>
int bbg(int *x)
{
    int y,z;
    z=*x;
    *x = z * z;
    y = z*z * z;
    return y;
}
int main()
{
    int a,c;
    scanf("%d", &a);
    c=bbg(&a);
    printf("%d %d", a,c);
    return 0;
}
