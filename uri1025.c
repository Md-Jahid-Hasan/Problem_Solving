#include<stdio.h>

void lsearch(int a[], int n, int e){
    int i;
    for(i=0;i<e;i++){
        if(n == a[i]){
            printf("%d found at %d\n", n, i+1);
            return;}
    }
    printf("%d not found\n", n);
}
int partiton(int a[], int b, int e){
    int pivot = a[b],j,i=e+1,t;
    for(j=e;j>b;j--){
        if(a[j]>pivot){
            i=i-1;
            t=a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
        t = a[b];
        a[b] = a[i-1];
        a[i-1] = t;
    return i-1;
}

void sort(int a[], int b, int e){
    int p;
    if(b>=e)
        return;
    else{
        p = partiton(a, b, e);
        sort(a, b, p-1);
        sort(a, p+1, e);
    }
}
int main(){
    int n,q,i,c=1;
    while(scanf("%d %d", &n, &q)){
            int a[n], b[q];
        if(n == 0 && q == 0)
            return 0;
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);
        for(i=0;i<q;i++)
            scanf("%d", &b[i]);
        printf("CASE# %d:\n", c++);
      sort(a,0,n-1);
      for(i=0;i<q;i++)
        //printf("%d ", a[i]);
          lsearch(a,b[i],n);
    }
    return 0;
}
