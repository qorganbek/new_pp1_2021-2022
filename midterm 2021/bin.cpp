#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    string t="";
    while(n!=0){
        t+=to_string(n%2);
        n/=2;
    }
    reverse(t.begin(),t.end());
    cout<<t;
    return 0;
}
// 2%2=0  2/2=1 1%2=1 1/2=0   01