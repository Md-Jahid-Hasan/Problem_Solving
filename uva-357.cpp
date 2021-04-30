#include<bits/stdc++.h>

using namespace std;


int main()
{
    long int s = 30001;
    int arr[] = {1, 5, 10, 25, 50};
    unsigned long long ways[s] = {};
    ways[0] = 1;
    for (int c = 0; c < 5; ++c)
    {
        for (int i = arr[c]; i < s; ++i)
        {
            ways[i] += ways[i - arr[c]];
        }
    }
    int n;
    while(cin >> n){
        if(ways[n] > 1)
            cout << "There are " << ways[n] << " ways to produce "<< n << " cents change."<<endl;
        else
            cout << "There is only " << ways[n] << " way to produce "<< n << " cents change."<<endl;
    }

    return 0;
}

