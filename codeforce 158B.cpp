#include<bits/stdc++.h>
using namespace std;

int main(){
    int group;

    cin >> group;
    int s;
    int cnt[5] = {};
    for(int i=0;i<group;i++){
        cin >> s;
        cnt[s]++;
    }

    int bus = cnt[4] + cnt[3] + cnt[2]/2;
    cnt[1] -= cnt[3];
    if(cnt[2]%2 == 1){
        bus++;
        cnt[1] -=2;
    }
    if(cnt[1] > 0)
        bus += (cnt[1] + 3) / 4;

    cout << bus <<endl;
    return 0;


}
