#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
     cin >> n >> m;
     int a[m][2];
     for(i=0;i<m;i++)
        for(j=0;j<2;j++)
            cin>> a[i][j];

     int x,y,c=0;
     cin >> x >> y;

     for(i=0;i<m;i++){
            if(a[i][0] == x && a[i][1] == y){
                cout << "Yes" << endl;
                return 0;
            }
     }
     cout << "No" << endl;
     return 0;
}
