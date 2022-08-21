#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> s;
    for (int i=0;i<2;i++){
        int x;
        cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    cout<<(s[1]%s[0])+1;
    return 0;
}