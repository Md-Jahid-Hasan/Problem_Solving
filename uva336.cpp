#include<bits/stdc++.h>
#include<set>
using namespace std;

int bfs(vector<int> adjNode[], int s, int lev){
    vector<int> visited(100001, 0);
    vector<int> level(100001, 0);
    queue<int> q;
    int i,l=0;

    q.push(s);
    visited[s] = 1;
    level[s] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(i=0;i<adjNode[u].size();i++){
            int v = adjNode[u][i];
            if(visited[v] == 0){
                level[v] = level[u]+1;
                visited[v] = 1;
                if(level[v]<=lev)
                    l++;
                q.push(v);
            }
        }
    }
    return l;
}

int main(){
    int nc,x,y,i,s,ttl,c=1;
    while(cin >> nc){
        if(nc == 0)
            break;
        vector<int> adjNode[100001];
        set<int> node;
        for(i=0;i<100001;i++)
            adjNode[i].clear();

        for(i=0;i<nc;i++){
            cin >> x >> y;
            node.insert(x);
            node.insert(y);
            adjNode[y].push_back(x);
            adjNode[x].push_back(y);
        }
        while(cin >> s >> ttl){
            if(s == 0 && ttl == 0)
                break;
            int visit = bfs(adjNode, s, ttl);
            int ans = node.size() - visit - 1;
            cout << "Case " << c++ << ": " << ans << " nodes not reachable from node " << s << " with TTL = "
                 << ttl <<"." << endl;

        }
    }
    return 0;
}
