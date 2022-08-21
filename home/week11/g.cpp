#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, set<int>> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int day;
        cin >> name >> day;
        mp[name].insert(day);
    }
    for(auto x: mp){
        if(x.second.size() >= 3){
            cout << x.first << " +1\n";
        }
        else{
            cout << x.first << " NO BONUS\n";
        }
    }
}