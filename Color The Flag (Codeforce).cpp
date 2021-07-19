#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,s, a[105], b[105];
    cin >> m >> s;
    string minx = "", maxx="";

    if(m == 1 && s == 0)
        cout << "0 0" << endl;
    else if(m*9 < s || s == 0)
        cout << "-1 -1"<< endl;
    else{
        int ss = s-1;
        for(int i=0;i<m;i++){
            a[i] = min(s,9);
            s -= a[i];
        }
        for(int i=0;i<m;i++)
            maxx += a[i] + '0';

        memset(b, 0, sizeof(b));
        b[0] = 1;
        for(int i=m-1;i>0;i--){
            b[i] = min(ss, 9);
            ss -= b[i];
        }

        if(ss)
            b[0] +=ss;

        for(int i=0;i<m;i++)
            minx += b[i] + '0';
    }
    cout << minx <<" "<< maxx<< endl;

}
