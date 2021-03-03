#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b && a == c && b == c)
        cout << "Equilateral Triangle" << endl;
    else if(a == b || a == c || b == c)
        cout << "Isosceles Triangle" << endl;
    else
        cout << "Bad Triangle" << endl;
    return 0;
}
