#include<stdio.h>
#include<string.h>
int main(){
    char s[2000];
    int t,i,vowel,count,l;
    scanf("%d", &t);
    getchar();
    while(t>0){
        vowel = 0;
        count = 0;

        gets(s);
        l = strlen(s);
        for(i=0;i<l;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowel++;
            else if(s[i] == ' ' || i == l-1){
                if(vowel == 0)
                    count++;
            vowel = 0;}
        }
        printf("%d\n", count);
        t--;
    }
    return 0;
}
