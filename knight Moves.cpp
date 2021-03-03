#include<bits/stdc++.h>
using namespace std;

struct Sqare{
    int r,c,moves;
    Sqare(int _r, int _c, int _moves){
        r = _r;
        c = _c;
        moves = _moves;
    }
};

int r[] = {2,1,2,1,-2,-1,-2,-1};
int c[] = {1,2,-1,-2,1,2,-1,-2};

int dfs(int fc, int fr, int tc, int tr){
    int a,b;
    queue<Sqare> adj;
    int moves = 0;
    adj.push(Sqare(fr,fc, moves));
    while(!adj.empty()){
        Sqare s = adj.front();
        adj.pop();
//        if(s.r == tr && s.c == tc)
//            return s.moves;
        for(int i=0;i<8;i++){
            a = s.c + c[i];
            b = s.r + r[i];
            if(a > 0 && a <= 8 && b >0 && b <= 8)
                adj.push(Sqare(b,a,1+s.moves));

            if(a == tc && b == tr)
                return s.moves + 1;
        }
    }
}


int main(){
    string s1,s2;
    int fr,fc,tr,tc;
    while(cin >> s1 >> s2){
        if (s1 == s2)
        {
            cout << "To get from " << s1 << " to " << s2 << " takes " << "0" << " knight moves." << endl;
            continue;
        }
        fc = s1[0] - 'a' + 1;
        fr = s1[1] - '0';

        tc = s2[0] - 'a' + 1;
        tr = s2[1] - '0';
        int moves = dfs(fc,fr,tc,tr);
        cout << "To get from " << s1 << " to " << s2 << " takes " << moves << " knight moves." << endl;
    }
}
