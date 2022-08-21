#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int pos_u = 0;
    int ulken = v[0];
    int kishi = v[0];
    int pos_k = 0;
    for(int i=0;i<v.size();i++){
        if(ulken<v[i]){
            ulken = v[i];
            pos_u = i;
        }
    }
    for(int i=0;i<v.size();i++){
        if(kishi>v[i]){
            kishi = v[i];
            pos_k = i;
        }
    }
    // cout<<kishi<<endl;
    // cout<<ulken<<endl;
    v[pos_u] = kishi;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}