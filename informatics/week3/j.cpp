#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,m,cnt=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<=m){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}