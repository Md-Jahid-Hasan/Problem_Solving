#include<stdio.h>
int main(){
    int n,i,e=0,o=0,ei,oi;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++){
        if(a[i]%2 == 0){
            e++;
            ei=i;}
        else{
            o++;
            oi = i;}
    }
    if(e == 1)
        printf("%d", ei+1);
    else
        printf("%d", oi+1);
    return 0;
}
