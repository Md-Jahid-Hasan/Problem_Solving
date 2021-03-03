#include<stdio.h>
#include<string.h>
int main()
{
    char h[10];
    int n=1;

    while(scanf("%s", &h))
    {
        if(strcmp(h,"*") == 0)
            break;
        if(strcmp(h,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n", n);
        if(strcmp(h,"Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n", n);
        n++;
    }
    return 0;
}
