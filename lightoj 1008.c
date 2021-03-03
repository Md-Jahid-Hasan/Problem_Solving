#include<stdio.h>
int main(){
    int t,i,j,f,a=0;
    long long int n;
    scanf("%d", &t);
    while(t>0){
        scanf("%lld", &n);
        if(n>25)
            n = n%25;
        if(n==0)
            n=25;


        if(n == 1)
            i=1,j=1;

        else if(n<=4){
                i=1,j=2;
           for(f=2;f<n;f++){
                if(i<j)
                    i++;
                else
                    j--;
           }
        }

        else if(n<=9){
            i=3,j=1;
            for(f=5;f<n;f++){
                if(i>j)
                    j++;
                else
                    i--;
            }
        }

        else if(n<=16){
            i=1,j=4;
             for(f=10;f<n;f++){
                if(i<j)
                    i++;
                else
                    j--;
           }
        }
        else{
            i=5,j=1;
            for(f=17;f<n;f++){
                if(i>j)
                    j++;
                else
                    i--;
            }

        }

        printf("Case %d: %d %d\n",++a, i,j);
        t--;
    }
    return 0;
}
