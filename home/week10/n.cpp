#include <bits/stdc++.h>
using namespace std;


void show(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


bool palindrome(vector<int> v){
    for(int i=0;i<v.size()/2;i++){
        if(v[i]!=v[v.size()-1-i]){
            return 0;
        }
    }
    return 1;
}


int main () {
    int n;
    cin>>n;
    std::vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    do{
        if(palindrome(v)){
            show(v);
            return 0;
        }
    }while(next_permutation(v.begin(),v.end()));
    cout<<"IMPOSSIBLE";
    return 0;
}
