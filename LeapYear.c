#include<stdio.h>
int main(){
    char a[10000];
    int b=0;
    while(scanf("%s", &a)==1)
    {
        if(a%4 == 0)
            if(a%100 == 0)
                if(a%400 == 0){
                    printf("This is leap year.\n");
                    b=1;
                }

        if(a%15 == 0){
            printf("This is huluculu festival year.\n");
            b=1;
        }

        if(a%55 == 0){
            printf("This is buluculu festival year.\n");
            b=1;
        }

        if(b == 0)
            printf("This is an ordinary year.\n");

    }
    return 0;

}
