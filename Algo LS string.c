#include<stdio.h>
#include<string.h>
int main(){
char a[5][8], b[5];
int i,j;
for(i=0;i<5;i++)
    scanf("%s", &a[i]);

    scanf("%s", &b);
    for(i=0;i<5;i++){
            j = strcmp(a[i],b);
    if(j == 0){
        printf("found");
        return 0;
    }
    }
    printf("Not");

}

