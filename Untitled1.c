#include <stdio.h>

void test(int a, int b){
    int prev;
    if(b == NULL)
        printf("A null value Provided\n");
    if(a <10){
        printf("%d before\n", a);
        prev = a;
        test(++a, 5);
        printf("%d after %d\n", a, prev);
    }
}
int main(){
    test(0, NULL);
}
