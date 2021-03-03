
#include<bits/stdc++.h>
using namespace std;

map<string,vector<string> >adj;
map <string, bool> visited;
map<string,string > parent;

bool bfs(string s1, string s2){
    queue<string> q;
    q.push(s1);
    while(!q.empty()){
        string str = q.front();
        q.pop();
        visited[str] = true;
        if(str == s2)
            return true;
        for(int i=0;i<adj[str].size();i++){
            string str2 = adj[str][i];
            if(!visited[str2]){
                visited[str2]=true;
                parent[str2] = str;
                q.push(str2);
                if(str2 == s2)
                    return true;
            }
        }
    }
    return false;
}

void print_path(string s1, string s2){
    if(s1 == s2) return;
    print_path(parent[s1],s2);
    cout << parent[s1] << " " << s1 << endl;
}

int main(){
    int n,i;
    string s1, s2;
    bool z = false;
    while(scanf("%d", &n) != EOF){
        for(i=0;i<n;i++){
           cin >> s1 >> s2;
           adj[s1].push_back(s2);
           adj[s2].push_back(s1);
        }

        cin >> s1 >> s2;
        if(z) cout<<endl;
        z = true;
        bool result = bfs(s1,s2);
        string x;
        if(result){
            print_path(s2, s1);
        }
        else cout << "No route"<<endl;
        visited.clear();
        adj.clear();
        parent.clear();

    }

    return 0;
}
