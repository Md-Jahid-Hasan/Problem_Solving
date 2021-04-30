#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    string line;
    cin >> line;
    while(t--){
        for(int i=0;i<n-1;i++){
            if(line[i] == 'B')
                if(line[i+1] == 'G'){
                    swap(line[i], line[i+1]);
                    i++;
                }
        }
    }
    cout << line;


}
