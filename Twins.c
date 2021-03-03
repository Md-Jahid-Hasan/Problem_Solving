#include<stdio.h>

int partition(int coin[],int left,int right){
    int pivot = coin[left];
    int swap;
    while(left<=right){
        if(pivot == coin[left]){
            if(pivot>=coin[right])
                right--;
            else{
                swap = coin[left];
                coin[left] = coin[right];
                coin[right] = swap;
                pivot = coin[right];
                left++;
            }
        }
        else if(pivot == coin[right]){
            if(pivot <= coin[left])
                left++;
            else{
                swap = coin[left];
                coin[left] = coin[right];
                coin[right] = swap;
                pivot = coin[left];
                right--;
            }
        }
    }
    return left;
}

int quickSort(int coin[],int left,int right){
    int p;
    if(left<right){
        p = partition(coin,left,right);
        quickSort(coin, left,p-1);
        quickSort(coin, p+1, right);
    }
}

int main(){
    int n,i;
    scanf("%d", &n);
    int coin[n],sum=0,partialSum=0;
    for(i=0;i<n;i++){
        scanf("%d", &coin[i]);
        sum = sum+coin[i];}


    quickSort(coin,0,n-1);
    for(i=0;i<n;i++){
        partialSum = partialSum + coin[i];
        if(partialSum>(sum/2))
            break;
    }

    printf("%d\n", i+1);
    return 0;

}
