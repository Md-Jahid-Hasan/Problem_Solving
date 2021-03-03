#include<stdio.h>
int main(){
    int n,x,i,j,group = 0,a,b;
    scanf("%d %d", &n, &x);
    int drinks[n];
    int type[1000] = {0};
    for(i=0;i<n;i++)
        scanf("%d", &drinks[i]);

    for(i=0;i<x;i++){
        for(j=0;j<n;j++){
            if(drinks[j] == (x-i))
                type[i] = type[i]+1;
        }
    }

    int tgroup;


    for(i=0;i<x;i++){
        group =group + type[i]/2;
    }

    tgroup = n - group*2;
    if(tgroup%2 != 0)
        tgroup++;
    group = group*2+(tgroup/2);
    printf("%d", group);

    return 0;
}
