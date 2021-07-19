#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    long long tast[m], i;

    for(i=1;i<=m;i++)
        cin >> tast[i];
    long long total = tast[1] - 1;

    for(i=2;i<=m;i++){
        int j;
        if(tast[i] < tast[i-1]){
            j = (n - tast[i-1]) + tast[i];
            total += j;
        }
        else{
            j = tast[i] - tast[i-1];
            total += j;
        }
    }
    cout << total << endl;
}
