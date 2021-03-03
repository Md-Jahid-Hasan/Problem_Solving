#include<bits/stdc++.h>
using namespace std;

int main(){
    long int t, length, v, l,r;
    cin >> t;
    long int lanten,i;
    while(t--){
        cin >> length >> v >> l >> r;
       int total_lanten = length/v;
       int invisibel_lanten = (r/v) - (l-1)/v;
       lanten = total_lanten - invisibel_lanten;
       cout << lanten << endl;
    }
    return 0;
}

