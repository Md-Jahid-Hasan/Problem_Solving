#include<stdio.h>
int partiton(int a[100],int begin, int end){
    int pivot= a[begin],i= end+1,j,t;
    for(j=end;j>begin;j--){
        if(a[j]>pivot){
            i -= 1;
            t = a[j];
            a[j] = a[i];
            a[i] = t;
        }}
        t= a[begin];
        a[begin] = a[i-1];
        a[i-1] = t;

    return i-1;
}

void quickshort(int a[100],int begin, int end){
    int pivot;
    if(begin>=end)
            return;
    else{
        pivot = partiton(a, begin, end);
        quickshort(a, begin, pivot-1);
        quickshort(a, pivot+1, end);
    }

}

int main(){
    int a[100],n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    quickshort(a, 0, n-1);
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
}
void search(int a[], int b, int e, int n){

    int m;
    while(b<=e){
    m = (b+e)/2;
    if(a[m] == n){
        printf("%d found at %d\n", n, m+1);
        return;}
    else if(n>a[m])
        b = m+1;
    else
        e = m-1;
    }
    printf("%d not found\n", n);
}
