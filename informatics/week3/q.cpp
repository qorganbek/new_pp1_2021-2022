#include <bits/stdc++.h>
using namespace std;

bool IsItPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    if(IsItPrime(n)){
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}