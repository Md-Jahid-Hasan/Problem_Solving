#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int p,q;

    while(1){
        cin >> n >>m;
        int in_degree[n+1];
        vector<int> task[n+1];

        memset(in_degree, 0, sizeof(in_degree));

        if (n==0 && m==0)
            break;
        for(int i=0;i<m;i++){
            cin >> p >> q;
            task[p].push_back(q);
            in_degree[q] += 1;
        }
        queue<int> qu;
        for(int i=1;i<=n;i++){
            if(in_degree[i] == 0)
                qu.push(i);
        }
        while(!qu.empty()){
            int t = qu.front();
            for(int i=0;i<task[t].size();i++){
                --in_degree[task[t][i]];
                if(in_degree[task[t][i]] == 0)
                    qu.push(task[t][i]);
            }
            cout << t << " ";
            qu.pop();
        }
        cout << endl;

    }

}

