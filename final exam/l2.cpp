#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<x;i++){
            int k;
            cin>>k;
            mp1[k]++;
            mp2[k]+=i+1;
        }
        bool ok =false ;
        map<int,int>::iterator it;
        for(it=mp1.begin();it!=mp1.end();it++){
            if((*it).second==1){
                v.push_back(mp2[(*it).second])
                ok = true ;
            }
        }
    }
    return 0;
}