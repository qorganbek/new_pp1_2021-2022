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
    int pos = 0;
    int ulken = v[0];
    for(int i=0;i<v.size();i++){
        if(ulken<v[i]){
            ulken = v[i];
            pos = i;
        }
    }
    cout<<pos+1;
    return 0;
}