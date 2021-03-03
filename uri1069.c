#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int f,l,i;
    while(scanf("%s", &a) != EOF){
        i=0,f=0,l=0;
        while(f>=l && i<strlen(a)){
            if(a[i] == '(')
                f++;
            else if(a[i] == ')')
                l++;
            i++;
        }
        if(f==l)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}

