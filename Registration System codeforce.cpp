#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    map<string, int> database;
    cin >> n;

    while(n--){
        string name;
        cin >> name;
        if(database.count(name) == 0){
                cout << "OK" << endl;
            database.insert(make_pair(name, 1));
        }
        else{
            cout<<name<<database[name]<<endl;
            database[name] +=1;
        }
    }

    return 0;
}
