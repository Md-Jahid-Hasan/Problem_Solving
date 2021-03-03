#include<stdio.h>
#include<math.h>
double pi = 2*acos(0.0);
int main(){
    int t,n=1;
    double area,r,s;
    scanf("%d", &t);
    while(t>0){
        scanf("%lf", &r);
        s = 2*r;
        area = s*s - pi*r*r;
        printf("Case %d: %.2lf\n", n++,area);
        t--;
    }
    return 0;
}
//3.1415926
