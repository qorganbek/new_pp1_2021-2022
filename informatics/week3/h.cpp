#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,l,r;
    long long sum = 0;
    cin>>n>>l>>r;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(l == r){
        cout<<v[l-1];
    }
    else {
        for(int i=l-1;i<=r-1;i++){
            sum += v[i];
        }
        cout<<sum;
    }
    return 0;
}