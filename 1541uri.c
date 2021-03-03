#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,b,c,size;
    double area;

    while(1){
        scanf("%d", &a);
        if(a==0)
            break;
        scanf("%d%d", &b,&c);

        area = (a*b*100)/c;
        size = sqrt(area);
        printf("%d\n", size);


    }
}
