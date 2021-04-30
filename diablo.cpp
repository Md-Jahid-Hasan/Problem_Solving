#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,t,p,q,x,y;
    cin >> t;
    for(int i=1;i<=t;i++)
    {

        cout << "Case " << i <<":"<<endl;
        cin >>p >> q;
        vector<int>v;
        for(int j=1;j<=p;j++)
        {
            cin >> x;
            v.push_back(x);
        }
        for(int k=1;k<=q;k++)
        {
            getchar();
            char ch;
            cin >> ch;
            if(ch=='a')
            {
                cin >> y;
                v.push_back(y);
            }
            else
            {
                cin >> y;
                if(v.size()>=y){
                cout << v[y-1] <<endl;
                v.erase(v.begin()+y-1);
                }
                else
                    cout << "none" << endl;
            }
        }
    }
    return 0;


    }
