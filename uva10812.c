#include<stdio.h>
int main()
{
    int n,sum,diff;
    scanf("%d", &n);
    int num1,num2;

    while(n>0){
        scanf("%d%d", &sum, &diff);

        if(sum>=diff){
            num1 = (sum+diff) / 2;
            num2 = sum-num1;

            if(num1+num2 == sum && num1-num2 == diff)
                printf("%d %d\n", num1,num2);

            else
                 printf("impossible\n");
        }

        else
            printf("impossible\n");
        n--;

    }
    return 0;
}
