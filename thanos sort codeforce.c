#include<stdio.h>
void thanosSort(int a[], int first, int last){

}

int main(){
    int n,i;
    while(scanf("%d", &n)){
        int num[n];
        for(i=0;i<n;i++)
            scanf("%d", &num[i]);
        thanosSort(num, 0, n-1);
    }
}
