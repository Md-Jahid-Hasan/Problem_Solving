#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d", &n)==1){
        int slug[n],level=0;

        for(i=0;i<n;i++)
            scanf("%d", &slug[i]);

        for(i=0;i<n;i++){
            if(slug[i] < 10){
                if(level<1)
                    level = 1;}
            else if(slug[i]>=10 &&  slug[i]<20){
                if(level<2)
                    level =2;}
            else{
                if(level<3)
                    level = 3;}
        }
        printf("%d\n", level);
    }
    return 0;
}
