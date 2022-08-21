#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    string s,sn="",sl="";
    cin>>n>>s;
    sn += s[0];
    sl += s[s.size()-1];
    int a = stoi(sn);
    int b = stoi(sl);
    cout<<a+n+b;
    return 0;
}