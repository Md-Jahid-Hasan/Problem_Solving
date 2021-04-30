#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        int length = s.length();
        if(length>10)
            cout << s[0] << length -2 <<s[length-1] << endl;
        else
            cout << s<<endl;


    }
     return 0;
}
