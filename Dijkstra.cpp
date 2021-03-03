   #include <bits/stdc++.h>

    using namespace std;
    #define infinity 1<<30
    vector< long int>g[100009], cost[100009];
    struct node{
        int u;
        long int cost;
        node(int _u, int _cost){
            u = _u;
            cost = _cost;
        }
        bool operator < ( const node& p ) const {      return cost > p.cost;   }

    };
    void dijstkra(long int n,int source){

        long long int distance[100005],parent[100005];
        for(int i=1;i<=100005;i++) {
            distance[i] = -1;
            parent[i] = -1;
        }

        priority_queue<node>q;
        q.push(node(source,0));
        distance[source] = 0;
        parent[source] = source;

        while(!q.empty()){
            node top = q.top();
            q.pop();
            int u=top.u;

            for(int i=0;i<(int)g[u].size();i++){
                int v=g[u][i];
                if(distance[v] == -1)
                    {
                        distance[v] = distance[u] + cost[u][i];
                        q.push(node(v, distance[v]));
                        parent[v] = u;
                    //cout << v<<" " << parent[v] << endl;
                }
                else{
                    if(distance[u] + cost[u][i] < distance[v]){
                        distance[v] = distance[u] + cost[u][i];
                        q.push(node(v, distance[v]));
                        parent[v] = u;}
                }
            }
        }
        vector<int> path;

            while(n != 1){
                if(parent[n] == -1){
                    cout<< "-1" << endl;
                    return;
                }
                path.push_back(n);
                n = parent[n];
            }
            path.push_back(1);
            for(int i=path.size()-1;i>=0;i--)
                cout << path[i] << " ";
            cout<<endl;

            //for(int i=1;i<=n;i++){
                //cout<<source<<" --> "<<i<<" = "<<distance[i]<<endl;
                //cout << "parent of " << i << " is " << parent[i] << endl;}
    }
    int main(){


        long int numNodes, numEdges;
        cin>>numNodes>>numEdges;
        for(int i=0;i<numEdges;i++){
            int u, v, w;
            cin>>u>>v>>w;
            g[u].push_back(v);
            g[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        int source;
        dijstkra(numNodes, 1);

        return 0;
    }
