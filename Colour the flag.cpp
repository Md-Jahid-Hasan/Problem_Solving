#include<bits/stdc++.h>
using namespace std;

int ow,er,ew,o_r;

bool first(vector<string> a)
{
    long long int n=a.size();
    long long int m=a[0].length();
    long long int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!='.')
            {
                if((i+j)%2==0 && a[i][j]!='R')
                    return false;
                else if((i+j)%2==1 && a[i][j]!='W')
                    return false;
            }
        }
    }
    return true;
}

bool second(vector<string> a)
{
    long long int n=a.size();
    long long int m=a[0].length();
    long long int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!='.')
            {
                if((i+j)%2==0 && a[i][j]!='W')
                    return false;
                else if((i+j)%2==1 && a[i][j]!='R')
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i,j,n,m;
        cin>>n>>m;
        vector<string> a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        if(first(a))
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((i+j)%2==0)
                        cout<<'R';
                    else
                        cout<<'W';
                }
                cout<<endl;
            }
        }
        else if(second(a))
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((i+j)%2==0)
                        cout<<'W';
                    else
                        cout<<'R';
                }
                cout<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
}

