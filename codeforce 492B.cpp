#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    int lantern[n];
    for(int i=0;i<n;i++)
        cin >> lantern[i];
    sort(lantern, lantern+n);

    float d=0;

    if(lantern[0] != 0)
        d = lantern[0];

    for(int i=0;i<n-1;i++){
        int j = i + 1;
        float temp = float(lantern[j] - lantern[i]) / 2;
        if(temp > d)
            d = temp;
    }

    if(lantern[n-1] != l){
        float temp = float(l-lantern[n-1]);
        if(temp > d)
            d = temp;
    }
    printf("%.10lf\n", d);


}
