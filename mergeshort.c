#include<stdio.h>
 void abc(int num[]){
    num[3] = 8;
 }
int main(){
    int a[] = {4,65,5,5,7,3,0,2};
    abc(a);
    printf("%d", a[3]);
}
