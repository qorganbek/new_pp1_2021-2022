#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a, vector<int> b){
    if(a.back() == b.back()){
        if(a.size() == b.size()){
            for(int i = 0; i < a.size(); i++){
                if(a[i] != b[i]){
                    return a[i] < b[i];
                }
            }
        }
        return a.size() < b.size();
    }
    return a.back() < b.back();
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[i].resize(x + 1);
        for(int j = 0; j < x; j++){
            cin >> v[i][j];
            v[i][x] += v[i][j];
        }
    }
    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size() - 1; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }   
}