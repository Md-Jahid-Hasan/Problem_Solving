#include<stdio.h>
int main(){
    int j,flag,k,n;
    scanf("%d", &k);

    while(k>0){
        scanf("%d", &n);
        int i=3,isPrime=1;

        if(n==1)
            printf("2\n");

        else{
        while(i>2){
                flag = 0;
            for(j=2;j*j<=i;j++){

                if(i%j == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                isPrime++;

            if(isPrime == n)
                break;
            i+=2;
        }

        printf("%d\n", i);}
        k--;
    }
    return 0;

}

