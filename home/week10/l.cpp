#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++){
        s += i;
    }
    vector<int> v(s);
    int x = 0;
    for(int i = 1; i <= n; i++){
        fill(v.begin() + x, v.begin() + x + i, i);
        x = x + i;
    }
    for(auto q: v){
        cout << q << " ";
    }
}