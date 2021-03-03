#include <stdio.h>
int main()
{
    float s,a,b,tax,p;
    scanf("%f", &s);
    p = 8.0 / 100.0;

    if(s <= 2000)
         printf("Isento\n");
    else if(s > 2000 && s <= 3000)
    {
        a = s - 2000;
        tax = a *p;
        printf("R$ %.2f\n", tax);
    }
    else if(s > 2000 && s <= 4500)
    {
        a = s - 3000;
        tax = 1000*p + a * (18.0/100);
        printf("R$ %.2f\n", tax);
    }
    else if(s > 4500)
    {
        a = s - 4500;
        tax = (1000 * p) + (1500 * (18.0/100.0)) + (a * (28.0/100.0));
        printf("R$ %.2f\n", tax);
    }
    return 0;
}
