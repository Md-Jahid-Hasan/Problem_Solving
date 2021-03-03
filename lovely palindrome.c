#include<stdio.h>
#include<string.h>
int main(){
    char a[1000000];
    scanf("%s", &a);
    printf("%s", a);
    printf("%s\n", strrev(a));
    return 0;
}
