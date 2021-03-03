#include<iostream>
#include <vector>
#include <stack>
using namespace std;
vector< vector<int> > adj;
int visited[105],edge_id[105];

void foundAnswer(int s){

    for(int i=0;i<adj[s].size();i++){
        int v = adj[s][i];
        if(visited[v] == 0)
        {
            visited[v] = 1;
            foundAnswer(v);
        }

    }
}



int main(){
    int n, x, y;

    while(1){
    cin >> n;
    if(n==0)break;
    adj.clear();
    adj.resize(n+1);
    while(cin >> x){
        if(x == 0)
            break;
        while(cin >> y){
            if(y==0)
                break;
            adj[x].push_back(y);
        }
    }
    int z,s;

    cin >> z;
    while(z--){
        cin >> s;
        for(int i=0;i<=100;i++)
            visited[i] = edge_id[i]= 0;

        vector<int> unVisited;
        foundAnswer(s);

        for(int i=1;i<=n;i++)
         {
            if(visited[i] == 0)
                unVisited.push_back(i);
         }
         cout << unVisited.size();

         for(int i=0;i<unVisited.size();i++){
            cout << " " << unVisited[i];
         }

        cout << endl;
    }
    }
}
