#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int x = a[i]^a[j];
            if(mp.count(x)){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}