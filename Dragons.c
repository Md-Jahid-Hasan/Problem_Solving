#include<stdio.h>

int main(){
    int s,n,i,j,f=-1,a=0,swap;
    scanf("%d %d", &s, &n);
    int x[n],y[n];
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(x[j]>x[j+1])
            {
                swap = x[j];
                x[j] = x[j+1];
                x[j+1] = swap;

                swap = y[j];
                y[j] = y[j+1];
                y[j+1] = swap;

            }
        }
    }
      for(i=0;i<n;i++){
        if(x[i]<s)
            s = s + y[i];
        else{
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
