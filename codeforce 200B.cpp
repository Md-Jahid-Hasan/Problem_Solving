#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int p, total = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p;
        total += p;
    }
    double percent = (double)(total * 100)/(n*100);
    cout << setprecision(12) << percent << endl;
    return 0;
}
