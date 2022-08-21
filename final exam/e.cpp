#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
    }
    cin>>m;
    vector< pair  < string , string> > v;
    for(int i=0;i<m;i++){
        string s ,t;
        cin>>s>>t;
        v.push_back(make_pair(s,t));
    }
    string l;
    vector<string> sk;
    cin>>l;
    for(int i=0;i<m;i++){
        if(v[i].first == l){
            sk.push_back(v[i].second);
        }
        else if(v[i].second == l){
            sk.push_back(v[i].first);
        }
    }
    sort(sk.begin(),sk.end());
    cout<<sk.size()<<endl;
    for(int i=0;i<sk.size();i++){
        cout<<sk[i]<<" ";
    }
    return 0;
}