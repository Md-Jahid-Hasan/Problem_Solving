#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int a;
    scanf("%d", &a);
    while(a>0){
    scanf("%s", &s);
    if(strlen(s)==5)
        printf("3\n");
    else if(s[0]=='t' && s[1]=='w' || s[0]=='t' && s[2]=='o' || s[1]=='w' && s[2]=='o')
        printf("2\n");
    else
        printf("1\n");
        a--;}
    return 0;
}
