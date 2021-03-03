#include<iostream>
using namespace std;
int main()
{
    int n,m,a;
    cin >> n >> m >> a;
    double x,y;
    long long int i,j;
    x = (double)n/a;
    y = (double)m/a;
    i = x;
    j = y;

    if(x - i != 0)
        i++;
    if(y - j != 0)
        j++;

    cout << i*j <<endl;
    return 0;
}
