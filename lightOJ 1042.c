#include<stdio.h>
#include<math.h>
int main(){
    int t,n,bin[100],a=0,j,i,bin1[100],count=0,decimal;
    scanf("%d", &t);
    while(t>0){
        scanf("%d", &n);
        while(n != 0){
            bin[a] = n%2;
            n = n/2;
            a++;
        }
        for(i=0;i<a;i++)
        printf("%d", bin[i]);
        j=a;
       for(i=0;i<a;i++){
            if(bin[i]==1){
                bin[i]=0;
                count++;
                    if(bin[i+1]==0){
                        bin[i+1] = 1;
                        break;
                    }
                }
       }

//       if(count == 1){
//            bin[a] = 1;
//            j++;}
//       else{
       for(i=0;i<count-1;i++)
            bin[i]=1;

       for(i=0;i<j;i++){
            bin1[i] = bin[a-1];
            a--;
       }
      for(i=0;i<j;i++)
        printf("%d", bin1[i]);


     // printf("%d", decimal);
        t--;
    }
}
