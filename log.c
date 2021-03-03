#include <stdio.h>
#include<math.h>

int main(){
    double x;
    printf("Enter value of x: ");
    scanf("%lf", &x);

    double lg = log(x);
    double qube = x * x *x;
    double e = exp(x);

    double result = lg + qube + e;
    printf("%lf", result);
    return 0;
}
