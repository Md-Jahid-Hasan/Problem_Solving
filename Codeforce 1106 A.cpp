#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;

    char M[n][n];
    int count = 0;

   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        cin >> M[i][j];

       if(n<3){
        cout << "0";
        return 0;
    }

    for(i=1;i<n-1;i++)
        for(j=1;j<n-1;j++)
            if(M[i][j] == 'X')
                if(M[i-1][j-1] == 'X' && M[i-1][j+1] == 'X' && M[i+1][j-1] == 'X' && M[i+1][j+1]=='X')
                    count++;

    cout << count;
    return 0;
}
