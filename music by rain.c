#include<stdio.h>
#include<string.h>

void printLcs(int i, int j,char a[], char s[][j]){
    if(i == 0 || j == 0)
        return;
    else if(s[i][j] == 'c'){
        printLcs(i-1,j-1,a,s);
        printf("%c", a[i-1]);
    }
    else if(s[i][j] == 'u')
        printLcs(i-1,j,a,s);
    else
        printLcs(i,j-1,a,s);

}

void lcs(char a[], char b[]){
    int m,n,i,j;
    m = strlen(a);
    n = strlen(b);
    int dp[m+1][n+1];
    char s[m+1][n+1];


    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0 || j == 0)
                dp[i][j] = 0;
            else if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
                s[i][j] = 'c';
                }
            else{
                if(dp[i-1][j] > dp[i][j-1]){
                    dp[i][j] = dp[i-1][j];
                    s[i][j] = 'u';
                }
                else{
                    dp[i][j] = dp[i][j-1];
                    s[i][j] = 'l';
                }
            }
        }
    }
    printf("%d", dp[m][n]);
    printLcs(m+1,n+1,b,s);
}

int main(){
    int t,i,j;
    scanf("%d", &t);
    char a[200],b[200];
    while(t>0){
            char sa[200] = "";
            char sb[200] = "";
        scanf("%s", &a);
        scanf("%s", &b);

        j=0;
    for(i=0;a[i] != '\0';i++){
        if(!(a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i'
           || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u')){
            sa[j] = a[i];
            j++;
        }
    }

    j = 0;
    for(i=0;b[i] != '\0';i++){
        if(!(b[i] == 'A' || b[i] == 'a' || b[i] == 'E' || b[i] == 'e' || b[i] == 'I' || b[i] == 'i'
           || b[i] == 'O' || b[i] == 'o' || b[i] == 'U' || b[i] == 'u')){
            sb[j] = b[i];
            j++;
        }
    }
    printf("%s %s\n", sa, sb);
    lcs(sa,sb);

    t--;
    }
}


