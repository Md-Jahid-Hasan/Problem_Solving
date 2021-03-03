#include<stdio.h>
int main(){
    int n,k,i;
    scanf("%d %d", &n, &k);
    int sum = 1;
    for(i=2;i<n;i++){
        sum = sum +i;
        if(sum > k){
            if((sum-k)+i == n)
                break;
        }
    }
    printf("%d", sum-k);
    return 0;

}
