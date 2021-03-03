#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%s", &s);
        if(strlen(s)==5)
            printf("3\n");
        else if((s[0]=='o'&&s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))
            printf("1\n");
        else
            printf("2\n");
        t--;
    }
    return 0;
}
