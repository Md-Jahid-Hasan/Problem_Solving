#include <stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    int y = x;
    int z = x- y;
    //float z= (x-y);
    //int a = 100 * z;
    //float a = z - (int)z;
    //int b=a*10;

    printf("%d", z);
    return 0;
}
