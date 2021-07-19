#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,x;
    cin >> n >> k >> x;
    long long students[n+4];
    for(long long i=0;i<n;i++)
        cin >> students[i];
    sort(students, students+n);

    vector<pair<long long, long long> > group_pair;
    long long start = students[0], last = students[0];

    for(long long i=1;i<n;i++){
        if(students[i] - students[i-1] > x){
            group_pair.push_back({start, last});
            start = students[i];
            last = students[i];
        }
        else{
            last = students[i];
        }
    }
    group_pair.push_back({start, last});

    long long ans = group_pair.size();
    vector<long long> diff;

    for(long long i=1;i<group_pair.size();i++){
        long long f = group_pair[i].first;
        long long l = group_pair[i-1].second;
        diff.push_back(abs(f-l));
    }
    sort(diff.begin(), diff.end());

    for(long long i=0;i<diff.size();i++){
        if(k>0){
            diff[i] = (diff[i]-1)/x;
            if(k>=diff[i]){
                ans--;
                k -= diff[i];
            }
        }
    }
    cout << ans << endl;
}
