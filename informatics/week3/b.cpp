#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,cnt=0;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}