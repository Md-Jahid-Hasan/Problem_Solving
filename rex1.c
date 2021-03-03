#include<stdio.h>

int main(){
char input;
scanf("%c", &input);

switch(input){
case 'A':
    printf("A");
    break;
case 'B':
    printf("B");
    break;
case 'C':
    printf("C");
    break;
case 'D':
    printf("D");
    break;
default:
    printf("Entered character does not match.\n");
}

return 0;
}
